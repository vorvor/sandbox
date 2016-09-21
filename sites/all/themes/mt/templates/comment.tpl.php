<?php
/**
 * @file
 * Returns the HTML for comments.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728216
 */
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <header>
    <p class="submitted">
      <?php print $picture; ?>
      <?php print $submitted; ?>
      <?php // print $permalink; ?>
    </p>

    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h3<?php print $title_attributes; ?>>
        <?php //print $title; ?>
        <?php if ($new): ?>
          <mark class="new"><?php //print $new; ?></mark>
        <?php endif; ?>
      </h3>
    <?php elseif ($new): ?>
      <mark class="new"><?php print $new; ?></mark>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($unpublished): ?>
      <mark class="watermark"><?php print t('Unpublished'); ?></mark>
    <?php elseif ($preview): ?>
      <mark class="watermark"><?php print t('Preview'); ?></mark>
    <?php endif; ?>
  </header>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['links']);
    print render($content);
  ?>

  <?php if ($signature): ?>
    <footer class="user-signature clearfix">
      <?php print $signature; ?>
    </footer>
  <?php endif; ?>



  <?php
  unset($content['links']['comment']['#links']['comment-reply']);
  $content['links']['flag']['#attributes']['class'][] = 'comment-like';
  print render($content['links']) ?>

  <?php
  // ------- render user list who liked
  $users = views_get_view_result('comment_like_count', 'block_1', $comment->cid);
  $names = [];
  foreach ($users as $user) {
    $names[] = $user->users_flagging_name;
  }
  if (count($names) > 0) {
    print '<div class="comment-like-users">' . implode(',', $names) . ' ' . t('also liked it!') . '</div>';
  }
  // ------- render user list who liked
  ?>
</article>
