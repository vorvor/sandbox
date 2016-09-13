<?php

/**
 * @file
 * CTools Content type plugin definition.
 *
 * List of user no relation as a block.
 */

$plugin = array(
  'title' => t('Decide order'),
  'single' => TRUE,
  'category' => t('Custom'),
);

/**
 * Render callback function.
 */
function motor_decide_order_content_type_render() {
  $images = motor_decide_order();
  $images2 = motor_decide_order(2);
  $pane = new stdClass();
  $pane->title = t('Decide');

  $pane->content = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('decide-order-wrapper'),
    ),
  );

  $pane->content += array(
    'decide1' => array(
      '#type' => 'container',
      'content' => array(
        '#markup' => $images . '<br/>' . $images2 . motor_compare_decides(1,2,1),
      ),
    ),
  );


  return $pane;
}
