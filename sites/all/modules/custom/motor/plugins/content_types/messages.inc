<?php

/**
 * @file
 * CTools Content type plugin definition.
 *
 * List of user no relation as a block.
 */

$plugin = array(
  'title' => t('Messages'),
  'single' => TRUE,
  'category' => t('Custom'),
);

/**
 * Render callback function.
 */
function motor_messages_content_type_render() {
  global $user;

  $query = db_select('pm_index', 'mi');
  $query->leftJoin('pm_message', 'm', 'm.mid = mi.mid');
  $query
    ->fields('mi', array('mid'))
    ->fields('m', array('body'))
    ->condition('m.author', $user->uid, '<>')
    ->condition('mi.recipient', $user->uid);
  $results = $query
    ->execute()
    ->fetchAll();

  $messages = array();
  foreach ($results as $result) {
    $messages[]= $result->body;
  }



  $pane = new stdClass();
  $pane->title = t('Messages');

  $pane->content = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('uos__account-orders', 'uos--hide-before-init'),
      'data-uos-callback' => 'redirect_anonymous',
    ),
    '#attached' => array(
      'library' => array(array('uos', 'base')),
    ),
    'open_orders' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('uos__account-orders__open')),
      'content' => array(
        '#markup' => implode(',', $messages),
      ),
    ),
  );

  return $pane;
}
