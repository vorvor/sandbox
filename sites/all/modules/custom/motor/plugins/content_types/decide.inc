<?php

/**
 * @file
 * CTools Content type plugin definition.
 *
 * List of user no relation as a block.
 */

$plugin = array(
  'title' => t('Decide'),
  'single' => TRUE,
  'category' => t('Custom'),
);

/**
 * Render callback function.
 */
function motor_decide_content_type_render() {
  $images = motor_throw_decide_item();
  $pane = new stdClass();
  $pane->title = t('Decide');

  $pane->content = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('decide-wrapper'),
    ),
    '#attached' => array(
      'js' => array(drupal_get_path('module', 'motor') . '/js/motor.js'),
    )
  );

  if (empty($images)) {
    $pane->content += array(
      'decide1' => array(
        '#type' => 'container',
        'content' => array(
          '#markup' => 'Kipörgetted',
        ),
      ),
    );
  }
  else {
    $pane->content += array(
      'decide1' => array(
        '#type' => 'container',
        '#attributes' => array(
          'data-nid' => $images[0]['nid'],
          'data-other-nid' => $images[1]['nid'],
          'class' => 'decide-option',
        ),
        'content' => array(
          '#markup' => $images[0]['img'],
        ),
      ),
      'decide2' => array(
        '#type' => 'container',
        '#attributes' => array(
          'data-nid' => $images[1]['nid'],
          'data-other-nid' => $images[0]['nid'],
          'class' => 'decide-option',
        ),
        'content' => array(
          '#markup' => $images[1]['img'],
        ),
      ),
    );
  }

  return $pane;
}
