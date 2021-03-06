<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>
<html <?php print $html_attributes . $rdf_namespaces; ?>>
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="width=device-width">
  <?php endif; ?>

  <?php print $styles; ?>
  <?php print $scripts; ?>
  <?php if ($add_html5_shim): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5shiv.min.js"></script>
    <![endif]-->
  <?php endif; ?>
  <?php
    global $user;
    if ($user->uid != 0) {
      ?>
      <script type="text/javascript">
        window.smartlook || (function (d) {
          var o = smartlook = function () {
            o.api.push(arguments)
          }, h = d.getElementsByTagName('head')[0];
          var c = d.createElement('script');
          o.api = new Array();
          c.async = true;
          c.type = 'text/javascript';
          c.charset = 'utf-8';
          c.src = '//rec.getsmartlook.com/recorder.js';
          h.appendChild(c);
        })(document);
        smartlook('init', '4ef42aabefa9a32166d6b279c4112033cca7e7e6');
      </script>
      <?php
    }
  ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php if ($skip_link_text && $skip_link_anchor): ?>
    <p class="skip-link__wrapper">
      <a href="#<?php print $skip_link_anchor; ?>" class="skip-link visually-hidden visually-hidden--focusable" id="skip-link"><?php print $skip_link_text; ?></a>
    </p>
  <?php endif; ?>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
