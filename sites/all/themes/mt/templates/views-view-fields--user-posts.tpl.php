<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
  <?php print $field->label_html; ?>
  <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>
<?php
  /*$node_comments = views_embed_view('comment', 'block', $fields['nid']->raw);

  $comment = new stdClass;
  $comment->nid = $fields['nid']->raw;
  $form = drupal_get_form('comment_form', $comment);
  print '<div class="comments"><h2>' . t('Comments') . '</h2>' . $node_comments . '</div>' .  render($form);*/
  //$node = node_load($fields['nid']->raw);
  //print drupal_render(comment_node_page_additions($node));

  $node = node_load($fields['nid']->raw);
  $static_comments = comment_node_page_additions($node);
  //print '<div class="open-comments">comments</div><div class="comments-wrapper">' . drupal_render($static_comments) . '</div>';
  print '<div class="comments-wrapper">' . drupal_render($static_comments) . '</div>';

?>
