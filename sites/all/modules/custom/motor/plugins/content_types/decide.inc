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
  $tid = arg(1);
  if (!empty($tid)) {
    $images = motor_throw_decide_item();
  }
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

  if (empty($tid)) {
    $pane->content += array(
      'label' => array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => 'decide-label',
        ),
        'content' => array(
          '#markup' => t('Choose game!'),
        ),
      ),
      'decide1' => array(
        '#type' => 'container',
        'content' => array(
          '#markup' =>  views_embed_view('decide_menu', 'block'),
        ),
      ),
    );
  }
  if (empty($images)) {
    $pane->content += array(
      'decide1' => array(
        '#type' => 'container',
        'content' => array(
          '#markup' => t('You finished that game! Choose another one!')
            . l(t('Back to game choose'), 'decide'),
        ),
      ),
    );
  }
  else {
    $pane->content += array(
      'label' => array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => 'decide-label',
        ),
        'content' => array(
          '#markup' => t('Which one you prefer?'),
        ),
      ),
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
