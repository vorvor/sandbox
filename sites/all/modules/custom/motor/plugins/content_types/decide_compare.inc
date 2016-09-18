<?php

/**
 * @file
 * CTools Content type plugin definition.
 *
 * List of user no relation as a block.
 */

$plugin = array(
  'title' => t('Decide compare'),
  'single' => TRUE,
  'category' => t('Custom'),
);

/**
 * Render callback function.
 */
function motor_decide_compare_content_type_render() {
  global $user;
  $other_user = arg(1);

  $name = 'decide';
  $myvoc = taxonomy_vocabulary_machine_name_load($name);
  $tree = taxonomy_get_tree($myvoc->vid);

  $list = [];
  foreach ($tree as $term) {
    $name = $term->name;
    $listitem = motor_compare_decides($user->uid, $other_user, $term->tid);
    if (!empty($listitem)) {
      $list[] = $term->name . ':' . $listitem;
    }
  }

  $pane = new stdClass();
  $pane->title = t('Similiraty with that user in games');

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
        '#markup' => implode('<br />', $list),
      ),
    ),
  );


  return $pane;
}
