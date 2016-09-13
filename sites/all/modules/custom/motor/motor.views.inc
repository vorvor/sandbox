<?php

/**
 * @file
 * Views integration for sono_shop.
 */

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function motor_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'motor'),
    ),
    'handlers' => array(
      'motor_handler_userlike' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

/**
 * Implements hook_views_data().
 */
function motor_views_data() {
  $data = array();
  // Add Example group
  $data['motor']['table']['group'] = t('Custom');
  $data['motor']['table']['join'] = array(
    '#global' => array(),
  );
  $data['motor']['userlike'] = array(
    'title' => t('User like'),
    'help' => t('Shows users who like it.'),
    'field' => array(
      'handler' => 'motor_handler_userlike',
    ),
  );
  return $data;
}
