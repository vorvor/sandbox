<?php

/**
 * @file
 * CTools Content type plugin definition.
 *
 * List of user no relation as a block.
 */

$plugin = array(
  'title' => t('Not related users'),
  'single' => TRUE,
  'category' => t('Custom'),
);

/**
 * Render callback function.
 */
function motor_not_related_users_content_type_render() {
  global $user;

  $query = db_select('users', 'u');
  $query->fields('u', array('uid'));
  $results = $query
    ->execute()
    ->fetchAll();

  $users = array();
  foreach ($results as $result) {
    $users[]= $result->uid;
  }


  $query = db_select('user_relationships', 'ur');
  $query
    ->fields('ur', array('requester_id'))
    ->fields('ur', array('requestee_id'))
    ->condition('requester_id', $user->uid);
  $results = $query
    ->execute()
    ->fetchAll();

  $users_er = array();
  foreach ($results as $result) {
    $users_er[]= $result->requestee_id;
  }

  $query = db_select('user_relationships', 'ur');
  $query
    ->fields('ur', array('requestee_id'))
    ->fields('ur', array('requester_id'))
    ->condition('requestee_id', $user->uid);

  $results = $query
    ->execute()
    ->fetchAll();

  $users_ee = array();
  foreach ($results as $result) {
    $users_ee[]= $result->requester_id;
  }

  $users_ee[] = 0;
  $users_ee[] = $user->uid;
  $users = array_diff($users, $users_ee);
  $users = array_diff($users, $users_er);
  $pane = new stdClass();
  $pane->title = t('New users');

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
        '#markup' => views_embed_view('users', 'panel_pane_1', implode(',', $users)),
      ),
    ),
  );

  return $pane;
}
