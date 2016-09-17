<?php

/**
 * @file
 * CTools Content type plugin definition.
 *
 * List of user no relation as a block.
 */

$plugin = array(
  'title' => t('Messages all'),
  'single' => TRUE,
  'category' => t('Custom'),
);

/**
 * Render callback function.
 */
function motor_messages_all_content_type_render() {
  /*$query = db_select('users', 'u');
  $query->fields('u', array('uid'));
  $results = $query->execute()->fetchAll();

  foreach ($results as $result) {
    $query = db_select('pm_index', 'pm');
    $query->condition('pm.recipient', $result->uid);
    $query->fields('pm', array('mid'));
    $results2 = $query
      ->execute()
      ->fetchAll();

    $messages = array();
    foreach ($results as $result) {
      $messages[]= $result->body;
    }
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
  */
}
