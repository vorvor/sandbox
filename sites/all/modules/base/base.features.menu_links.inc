<?php
/**
 * @file
 * base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_backlog:backlog.
  $menu_links['main-menu_backlog:backlog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'backlog',
    'router_path' => 'backlog',
    'link_title' => 'Backlog',
    'options' => array(
      'identifier' => 'main-menu_backlog:backlog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_dashboard:dashboard.
  $menu_links['main-menu_dashboard:dashboard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'identifier' => 'main-menu_dashboard:dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_feed:feed.
  $menu_links['main-menu_feed:feed'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feed',
    'router_path' => 'feed',
    'link_title' => 'Feed',
    'options' => array(
      'identifier' => 'main-menu_feed:feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_kijelentkezs:user/logout.
  $menu_links['main-menu_kijelentkezs:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Kijelentkezés',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_kijelentkezs:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_messages:messages.
  $menu_links['main-menu_messages:messages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_messages:messages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_posztolj-te-is:node/add/post.
  $menu_links['main-menu_posztolj-te-is:node/add/post'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/post',
    'router_path' => 'node/add/post',
    'link_title' => 'Posztolj te is!',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_posztolj-te-is:node/add/post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Backlog');
  t('Dashboard');
  t('Feed');
  t('Home');
  t('Kijelentkezés');
  t('Messages');
  t('Posztolj te is!');

  return $menu_links;
}
