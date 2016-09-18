<?php
/**
 * @file
 * base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Hey %user:name!';
  $display->uuid = 'e97e7338-6dc2-462e-a4e2-021514e19efe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-46e4ac2c-d227-4542-8efa-2e6952528432';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_basic_data-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46e4ac2c-d227-4542-8efa-2e6952528432';
  $display->content['new-46e4ac2c-d227-4542-8efa-2e6952528432'] = $pane;
  $display->panels['center'][0] = 'new-46e4ac2c-d227-4542-8efa-2e6952528432';
  $pane = new stdClass();
  $pane->pid = 'new-649ed98f-da5b-4f1f-b8a6-2997f02218b7';
  $pane->panel = 'center';
  $pane->type = 'messages';
  $pane->subtype = 'messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '649ed98f-da5b-4f1f-b8a6-2997f02218b7';
  $display->content['new-649ed98f-da5b-4f1f-b8a6-2997f02218b7'] = $pane;
  $display->panels['center'][1] = 'new-649ed98f-da5b-4f1f-b8a6-2997f02218b7';
  $pane = new stdClass();
  $pane->pid = 'new-250874f5-afb5-4392-bcc9-88c2d5f0bb92';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'users-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '250874f5-afb5-4392-bcc9-88c2d5f0bb92';
  $display->content['new-250874f5-afb5-4392-bcc9-88c2d5f0bb92'] = $pane;
  $display->panels['center'][2] = 'new-250874f5-afb5-4392-bcc9-88c2d5f0bb92';
  $pane = new stdClass();
  $pane->pid = 'new-689f5794-fbac-4b39-ba63-0df49fb1c807';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'users-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '689f5794-fbac-4b39-ba63-0df49fb1c807';
  $display->content['new-689f5794-fbac-4b39-ba63-0df49fb1c807'] = $pane;
  $display->panels['center'][3] = 'new-689f5794-fbac-4b39-ba63-0df49fb1c807';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'decide';
  $page->task = 'page';
  $page->admin_title = 'Decide';
  $page->admin_description = '';
  $page->path = 'decide';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_decide__panel';
  $handler->task = 'page';
  $handler->subtask = 'decide';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9de588b4-fb5c-411b-8da9-1d23b9c052f9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_decide__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-607ea89e-7e9d-468f-b27f-490bf393aac8';
  $pane->panel = 'center';
  $pane->type = 'decide';
  $pane->subtype = 'decide';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '607ea89e-7e9d-468f-b27f-490bf393aac8';
  $display->content['new-607ea89e-7e9d-468f-b27f-490bf393aac8'] = $pane;
  $display->panels['center'][0] = 'new-607ea89e-7e9d-468f-b27f-490bf393aac8';
  $pane = new stdClass();
  $pane->pid = 'new-2350636b-26f7-4ac2-ae12-12fde98af468';
  $pane->panel = 'center';
  $pane->type = 'decide_order';
  $pane->subtype = 'decide_order';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2350636b-26f7-4ac2-ae12-12fde98af468';
  $display->content['new-2350636b-26f7-4ac2-ae12-12fde98af468'] = $pane;
  $display->panels['center'][1] = 'new-2350636b-26f7-4ac2-ae12-12fde98af468';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['decide'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'feed';
  $page->task = 'page';
  $page->admin_title = 'Feed';
  $page->admin_description = '';
  $page->path = 'feed';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Feed',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_feed__panel';
  $handler->task = 'page';
  $handler->subtask = 'feed';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '54b7f369-be4f-4401-81dd-204ce7ac2e74';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_feed__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-31a8e0f5-9421-44f6-9fc6-2c8218b5b6fc';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'formblock-post';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '31a8e0f5-9421-44f6-9fc6-2c8218b5b6fc';
  $display->content['new-31a8e0f5-9421-44f6-9fc6-2c8218b5b6fc'] = $pane;
  $display->panels['center'][0] = 'new-31a8e0f5-9421-44f6-9fc6-2c8218b5b6fc';
  $pane = new stdClass();
  $pane->pid = 'new-3b8e40a6-7761-4772-8672-53c6692e9d5c';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_posts-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3b8e40a6-7761-4772-8672-53c6692e9d5c';
  $display->content['new-3b8e40a6-7761-4772-8672-53c6692e9d5c'] = $pane;
  $display->panels['center'][1] = 'new-3b8e40a6-7761-4772-8672-53c6692e9d5c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3b8e40a6-7761-4772-8672-53c6692e9d5c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['feed'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'login';
  $page->task = 'page';
  $page->admin_title = 'Login';
  $page->admin_description = '';
  $page->path = 'login';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_login__panel';
  $handler->task = 'page';
  $handler->subtask = 'login';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'df8c3373-e0b0-4d41-8f85-909dae71eae7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_login__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b7b9ddd4-8efd-4de9-b7f5-016893cf933a';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'user-registration',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b7b9ddd4-8efd-4de9-b7f5-016893cf933a';
  $display->content['new-b7b9ddd4-8efd-4de9-b7f5-016893cf933a'] = $pane;
  $display->panels['center'][0] = 'new-b7b9ddd4-8efd-4de9-b7f5-016893cf933a';
  $pane = new stdClass();
  $pane->pid = 'new-22f6797e-1955-4a26-ad79-e831b9d09c3e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'user-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '22f6797e-1955-4a26-ad79-e831b9d09c3e';
  $display->content['new-22f6797e-1955-4a26-ad79-e831b9d09c3e'] = $pane;
  $display->panels['center'][1] = 'new-22f6797e-1955-4a26-ad79-e831b9d09c3e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['login'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_page';
  $page->task = 'page';
  $page->admin_title = 'User page';
  $page->admin_description = '';
  $page->path = 'user-page/%user';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'user_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '762883e0-e4af-47b2-a87a-81c69073d344';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_user_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-70c4a275-9f5d-4b73-bdc8-6dd1e87bfccc';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'user_basic_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '70c4a275-9f5d-4b73-bdc8-6dd1e87bfccc';
  $display->content['new-70c4a275-9f5d-4b73-bdc8-6dd1e87bfccc'] = $pane;
  $display->panels['center'][0] = 'new-70c4a275-9f5d-4b73-bdc8-6dd1e87bfccc';
  $pane = new stdClass();
  $pane->pid = 'new-97ab25e4-aa3e-4ec0-bbc6-dde54d929e92';
  $pane->panel = 'center';
  $pane->type = 'decide_compare';
  $pane->subtype = 'decide_compare';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '97ab25e4-aa3e-4ec0-bbc6-dde54d929e92';
  $display->content['new-97ab25e4-aa3e-4ec0-bbc6-dde54d929e92'] = $pane;
  $display->panels['center'][1] = 'new-97ab25e4-aa3e-4ec0-bbc6-dde54d929e92';
  $pane = new stdClass();
  $pane->pid = 'new-b4b713b9-e7a5-41d1-a56d-f68a342a02eb';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'user_posts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b4b713b9-e7a5-41d1-a56d-f68a342a02eb';
  $display->content['new-b4b713b9-e7a5-41d1-a56d-f68a342a02eb'] = $pane;
  $display->panels['center'][2] = 'new-b4b713b9-e7a5-41d1-a56d-f68a342a02eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-70c4a275-9f5d-4b73-bdc8-6dd1e87bfccc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'users';
  $page->task = 'page';
  $page->admin_title = 'Users';
  $page->admin_description = '';
  $page->path = 'users';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_users__panel';
  $handler->task = 'page';
  $handler->subtask = 'users';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '17299523-d7be-4c69-9501-a8dc64085374';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_users__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8cba9116-3337-45f1-a0bc-4a3aa9a81ef1';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'users-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cba9116-3337-45f1-a0bc-4a3aa9a81ef1';
  $display->content['new-8cba9116-3337-45f1-a0bc-4a3aa9a81ef1'] = $pane;
  $display->panels['center'][0] = 'new-8cba9116-3337-45f1-a0bc-4a3aa9a81ef1';
  $pane = new stdClass();
  $pane->pid = 'new-f42af2f6-94c0-4d46-9045-de3e34d32177';
  $pane->panel = 'center';
  $pane->type = 'not_related_users';
  $pane->subtype = 'not_related_users';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f42af2f6-94c0-4d46-9045-de3e34d32177';
  $display->content['new-f42af2f6-94c0-4d46-9045-de3e34d32177'] = $pane;
  $display->panels['center'][1] = 'new-f42af2f6-94c0-4d46-9045-de3e34d32177';
  $pane = new stdClass();
  $pane->pid = 'new-130d91a7-8005-4cb2-a212-26a158c5bf81';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'users-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '130d91a7-8005-4cb2-a212-26a158c5bf81';
  $display->content['new-130d91a7-8005-4cb2-a212-26a158c5bf81'] = $pane;
  $display->panels['center'][2] = 'new-130d91a7-8005-4cb2-a212-26a158c5bf81';
  $pane = new stdClass();
  $pane->pid = 'new-ce8e247b-3fae-4c58-8a9f-6ce492f41076';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'users-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ce8e247b-3fae-4c58-8a9f-6ce492f41076';
  $display->content['new-ce8e247b-3fae-4c58-8a9f-6ce492f41076'] = $pane;
  $display->panels['center'][3] = 'new-ce8e247b-3fae-4c58-8a9f-6ce492f41076';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['users'] = $page;

  return $pages;

}
