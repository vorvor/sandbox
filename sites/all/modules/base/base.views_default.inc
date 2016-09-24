<?php
/**
 * @file
 * base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'backlog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Backlog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Backlog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_user_act' => 'field_user_act',
    'field_user_pass' => 'field_user_pass',
    'field_comment_ref' => 'field_comment_ref',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_act' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_pass' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_comment_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Mező: Tartalom: User act */
  $handler->display->display_options['fields']['field_user_act']['id'] = 'field_user_act';
  $handler->display->display_options['fields']['field_user_act']['table'] = 'field_data_field_user_act';
  $handler->display->display_options['fields']['field_user_act']['field'] = 'field_user_act';
  /* Mező: Tartalom: User pass */
  $handler->display->display_options['fields']['field_user_pass']['id'] = 'field_user_pass';
  $handler->display->display_options['fields']['field_user_pass']['table'] = 'field_data_field_user_pass';
  $handler->display->display_options['fields']['field_user_pass']['field'] = 'field_user_pass';
  /* Mező: Tartalom: Comment ref */
  $handler->display->display_options['fields']['field_comment_ref']['id'] = 'field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['table'] = 'field_data_field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['field'] = 'field_comment_ref';
  /* Mező: Tartalom: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Sort criterion: Tartalom: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'backlog' => 'backlog',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'backlog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Backlog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['backlog'] = array(
    t('Master'),
    t('Backlog'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('User act'),
    t('User pass'),
    t('Comment ref'),
    t('Post date'),
    t('Page'),
  );
  $export['backlog'] = $view;

  $view = new view();
  $view->name = 'comment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Comment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hozzászólások';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kapcsolat: Hozzászólás: Tartalom */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Mező: Hozzászólás: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'comment';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Mező: Hozzászólás: Szerző */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Hozzászólás: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  /* Sort criterion: Hozzászólás: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Tartalom: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Hozzászólás: Elfogadott */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['comment'] = array(
    t('Master'),
    t('Hozzászólások'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Tartalom'),
    t('Mind'),
    t('Block'),
  );
  $export['comment'] = $view;

  $view = new view();
  $view->name = 'comment_like_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'comment like count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Kapcsolat: Hozzászólás: Tartalom */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Kapcsolat: Flags: like_comment counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like_comment';
  /* Kapcsolat: Flags: like_comment */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like_comment';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Kapcsolat: Flags: Felhasználó */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Hozzászólás: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Hozzászólás: ID */
  $handler->display->display_options['arguments']['cid']['id'] = 'cid';
  $handler->display->display_options['arguments']['cid']['table'] = 'comment';
  $handler->display->display_options['arguments']['cid']['field'] = 'cid';
  $handler->display->display_options['arguments']['cid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['cid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['cid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['cid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['cid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Hozzászólás: Elfogadott */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Blokk */
  $handler = $view->new_display('block', 'Blokk', 'block_1');
  $translatables['comment_like_count'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Tartalom'),
    t('counter'),
    t('flag'),
    t('Flag user'),
    t('Mind'),
    t('Blokk'),
  );
  $export['comment_like_count'] = $view;

  $view = new view();
  $view->name = 'decide_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Decide Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Decide Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Mező: Tartalom: Type (editable) */
  $handler->display->display_options['fields']['field_type_editable']['id'] = 'field_type_editable';
  $handler->display->display_options['fields']['field_type_editable']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type_editable']['field'] = 'field_type_editable';
  $handler->display->display_options['fields']['field_type_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_type_editable']['widget_type'] = 'options_select';
  $handler->display->display_options['fields']['field_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_type_editable']['suppress_description'] = 0;
  /* Sort criterion: Tartalom: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'decide' => 'decide',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'decide-admin';
  $translatables['decide_admin'] = array(
    t('Master'),
    t('Decide Admin'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Type (editable)'),
    t('Page'),
  );
  $export['decide_admin'] = $view;

  $view = new view();
  $view->name = 'decide_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Decide menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Decide menu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Mező: Taxonómia kifejezés: Kifejezésazonosító */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Mező: Taxonómia kifejezés: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'decide/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonómiaszótár: Programok által használt név */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'decide' => 'decide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['decide_menu'] = array(
    t('Master'),
    t('Decide menu'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Kifejezésazonosító'),
    t('.'),
    t(','),
    t('Block'),
  );
  $export['decide_menu'] = $view;

  $view = new view();
  $view->name = 'greeting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Greeting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Hey [name]! How Ya Doin\'?';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Felhasználó: Létrehozás dátuma */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Felhasználó: Jelenlegi */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['greeting'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Hey [name]! How Ya Doin\'?'),
    t('Content pane'),
    t('View panes'),
  );
  $export['greeting'] = $view;

  $view = new view();
  $view->name = 'statistics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'accesslog';
  $view->human_name = 'Statistics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Statisztikák';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'aid' => 'aid',
    'hostname' => 'hostname',
    'title' => 'title',
    'path' => 'path',
    'url' => 'url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'aid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hostname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kapcsolat: Access log: Felhasználó */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'accesslog';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Mező: Access log: Aid */
  $handler->display->display_options['fields']['aid']['id'] = 'aid';
  $handler->display->display_options['fields']['aid']['table'] = 'accesslog';
  $handler->display->display_options['fields']['aid']['field'] = 'aid';
  /* Mező: Access log: Kiszolgáló neve */
  $handler->display->display_options['fields']['hostname']['id'] = 'hostname';
  $handler->display->display_options['fields']['hostname']['table'] = 'accesslog';
  $handler->display->display_options['fields']['hostname']['field'] = 'hostname';
  /* Mező: Access log: Oldal címe */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'accesslog';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Mező: Access log: Útvonal */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'accesslog';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  /* Mező: Access log: Hivatkozó */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'accesslog';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'statistics';
  $translatables['statistics'] = array(
    t('Master'),
    t('Statisztikák'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('uid'),
    t('Aid'),
    t('.'),
    t(','),
    t('Kiszolgáló neve'),
    t('Oldal címe'),
    t('Útvonal'),
    t('Hivatkozó'),
    t('Név'),
    t('Page'),
  );
  $export['statistics'] = $view;

  $view = new view();
  $view->name = 'user_basic_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User basic data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Pictures */
  $handler->display->display_options['fields']['field_pictures']['id'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['table'] = 'field_data_field_pictures';
  $handler->display->display_options['fields']['field_pictures']['field'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_pictures']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pictures']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['field_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pictures']['settings'] = array(
    'image_style' => 'box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pictures']['separator'] = '';
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Looking for */
  $handler->display->display_options['fields']['field_looking_for']['id'] = 'field_looking_for';
  $handler->display->display_options['fields']['field_looking_for']['table'] = 'field_data_field_looking_for';
  $handler->display->display_options['fields']['field_looking_for']['field'] = 'field_looking_for';
  /* Mező: Privatemsg: Send Privatemsg link */
  $handler->display->display_options['fields']['privatemsg_link']['id'] = 'privatemsg_link';
  $handler->display->display_options['fields']['privatemsg_link']['table'] = 'users';
  $handler->display->display_options['fields']['privatemsg_link']['field'] = 'privatemsg_link';
  $handler->display->display_options['fields']['privatemsg_link']['label'] = '';
  $handler->display->display_options['fields']['privatemsg_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['privatemsg_link']['return'] = 1;
  /* Mező: Felhasználói kapcsolatok: User relationship add / remove action */
  $handler->display->display_options['fields']['ur_action']['id'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['table'] = 'users';
  $handler->display->display_options['fields']['ur_action']['field'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['label'] = '';
  $handler->display->display_options['fields']['ur_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ur_action']['ur-type'] = '1';
  $handler->display->display_options['fields']['ur_action']['ur-actions'] = array(
    'add' => 'add',
    'remove' => 'remove',
    'requested' => 'requested',
    'received' => 'received',
  );
  /* Mező: Felhasználó: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit profile';
  /* Sort criterion: Felhasználó: Létrehozás dátuma */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Felhasználó: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Felhasználó: Jelenlegi */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $translatables['user_basic_data'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Looking for'),
    t('Üzenet küldése'),
    t('Edit profile'),
    t('Mind'),
    t('Content pane'),
    t('View panes'),
    t('Content pane 2'),
  );
  $export['user_basic_data'] = $view;

  $view = new view();
  $view->name = 'user_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kapcsolat: Tartalom: Szerző */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Kapcsolat: Flags: like */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like';
  /* Kapcsolat: Flags: User's flaggings */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_user_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'like';
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Pictures */
  $handler->display->display_options['fields']['field_pictures']['id'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['table'] = 'field_data_field_pictures';
  $handler->display->display_options['fields']['field_pictures']['field'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_pictures']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pictures']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['field_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pictures']['settings'] = array(
    'image_style' => 'mini-box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pictures']['separator'] = '';
  /* Mező: Felhasználói kapcsolatok: User relationship add / remove action */
  $handler->display->display_options['fields']['ur_action']['id'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['table'] = 'users';
  $handler->display->display_options['fields']['ur_action']['field'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['relationship'] = 'uid';
  $handler->display->display_options['fields']['ur_action']['label'] = '';
  $handler->display->display_options['fields']['ur_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ur_action']['ur-type'] = '1';
  $handler->display->display_options['fields']['ur_action']['ur-actions'] = array(
    'add' => 'add',
    'remove' => 'remove',
    'requested' => 'requested',
    'received' => 'received',
  );
  /* Mező: Tartalom: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'szerkesztés';
  /* Mező: Tartalom: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Mező: Tartalom: Image */
  $handler->display->display_options['fields']['field_post_image']['id'] = 'field_post_image';
  $handler->display->display_options['fields']['field_post_image']['table'] = 'field_data_field_post_image';
  $handler->display->display_options['fields']['field_post_image']['field'] = 'field_post_image';
  $handler->display->display_options['fields']['field_post_image']['label'] = '';
  $handler->display->display_options['fields']['field_post_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_post_image']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_post_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_post_image']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_post_image']['separator'] = '';
  /* Mező: Tartalom: Media */
  $handler->display->display_options['fields']['field_media']['id'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['label'] = '';
  $handler->display->display_options['fields']['field_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Mező: Tartalom: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Mező: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Mező: Tartalom: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Mező: Egyéni: User like */
  $handler->display->display_options['fields']['userlike']['id'] = 'userlike';
  $handler->display->display_options['fields']['userlike']['table'] = 'motor';
  $handler->display->display_options['fields']['userlike']['field'] = 'userlike';
  $handler->display->display_options['fields']['userlike']['label'] = '';
  $handler->display->display_options['fields']['userlike']['element_label_colon'] = FALSE;
  /* Sort criterion: Tartalom: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Felhasználó: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'post' => 'post',
  );

  /* Display: current user */
  $handler = $view->new_display('panel_pane', 'current user', 'panel_pane_1');

  /* Display: all user */
  $handler = $view->new_display('panel_pane', 'all user', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'post' => 'post',
  );
  $translatables['user_posts'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('flag'),
    t('user flagged content'),
    t('szerkesztés'),
    t('Mind'),
    t('current user'),
    t('View panes'),
    t('all user'),
  );
  $export['user_posts'] = $view;

  $view = new view();
  $view->name = 'users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Új tagok';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kapcsolat: Felhasználói kapcsolatok: Kapcsolattípus azonosító */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Pictures */
  $handler->display->display_options['fields']['field_pictures']['id'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['table'] = 'field_data_field_pictures';
  $handler->display->display_options['fields']['field_pictures']['field'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_pictures']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pictures']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['field_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pictures']['settings'] = array(
    'image_style' => 'box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pictures']['separator'] = '';
  /* Mező: Felhasználói kapcsolatok: User relationship add / remove action */
  $handler->display->display_options['fields']['ur_action']['id'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['table'] = 'users';
  $handler->display->display_options['fields']['ur_action']['field'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['label'] = '';
  $handler->display->display_options['fields']['ur_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ur_action']['ur-type'] = '1';
  $handler->display->display_options['fields']['ur_action']['ur-actions'] = array(
    'add' => 'add',
    'remove' => 'remove',
    'requested' => 'requested',
    'received' => 'received',
  );
  /* Mező: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Mégsem';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid_1]/relationships/requested/[uid]/cancel';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Felhasználó: Létrehozás dátuma */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Felhasználó: Jelenlegi */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '0';
  /* Filter criterion: Felhasználói kapcsolatok: Requestee user is current user */
  $handler->display->display_options['filters']['requestee_id_current']['id'] = 'requestee_id_current';
  $handler->display->display_options['filters']['requestee_id_current']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['requestee_id_current']['field'] = 'requestee_id_current';
  $handler->display->display_options['filters']['requestee_id_current']['value'] = '0';

  /* Display: All user */
  $handler = $view->new_display('panel_pane', 'All user', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Pictures */
  $handler->display->display_options['fields']['field_pictures']['id'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['table'] = 'field_data_field_pictures';
  $handler->display->display_options['fields']['field_pictures']['field'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_pictures']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pictures']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['field_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pictures']['settings'] = array(
    'image_style' => 'box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pictures']['separator'] = '';
  /* Mező: Felhasználói kapcsolatok: User relationship add / remove action */
  $handler->display->display_options['fields']['ur_action']['id'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['table'] = 'users';
  $handler->display->display_options['fields']['ur_action']['field'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['label'] = '';
  $handler->display->display_options['fields']['ur_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ur_action']['ur-type'] = '1';
  $handler->display->display_options['fields']['ur_action']['ur-actions'] = array(
    'add' => 'add',
    'remove' => 'remove',
    'requested' => 'requested',
    'received' => 'received',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Felhasználó: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Felhasználó: Jelenlegi */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '0';

  /* Display: User you on */
  $handler = $view->new_display('panel_pane', 'User you on', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nekik küldtél meghívót, egyelőre nem hagyták jóvá';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Kapcsolat: Felhasználói kapcsolatok: Kapcsolattípus azonosító */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Kapcsolat: Felhasználói kapcsolatok: Felkérő felhasználó */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['label'] = 'felkérő';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Pictures */
  $handler->display->display_options['fields']['field_pictures']['id'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['table'] = 'field_data_field_pictures';
  $handler->display->display_options['fields']['field_pictures']['field'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_pictures']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pictures']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['field_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pictures']['settings'] = array(
    'image_style' => 'box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pictures']['separator'] = '';
  /* Mező: Felhasználói kapcsolatok: User relationship add / remove action */
  $handler->display->display_options['fields']['ur_action']['id'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['table'] = 'users';
  $handler->display->display_options['fields']['ur_action']['field'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['label'] = '';
  $handler->display->display_options['fields']['ur_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ur_action']['ur-type'] = '1';
  $handler->display->display_options['fields']['ur_action']['ur-actions'] = array(
    'add' => 'add',
    'remove' => 'remove',
    'requested' => 'requested',
    'received' => 'received',
  );
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid_1']['label'] = '';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Felhasználó: Jelenlegi */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '0';
  /* Filter criterion: Felhasználói kapcsolatok: Requester user is current user */
  $handler->display->display_options['filters']['requester_id_current']['id'] = 'requester_id_current';
  $handler->display->display_options['filters']['requester_id_current']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['requester_id_current']['field'] = 'requester_id_current';
  $handler->display->display_options['filters']['requester_id_current']['value'] = '1';
  /* Filter criterion: Felhasználói kapcsolatok: Kapcsolat állapota */
  $handler->display->display_options['filters']['approved']['id'] = 'approved';
  $handler->display->display_options['filters']['approved']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['approved']['field'] = 'approved';
  $handler->display->display_options['filters']['approved']['operator'] = '!=';
  $handler->display->display_options['filters']['approved']['value'] = '1';

  /* Display: Inquiring users */
  $handler = $view->new_display('panel_pane', 'Inquiring users', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ők szeretnének megismerni téged!';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Kapcsolat: Felhasználói kapcsolatok: Felkérő felhasználó */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['label'] = 'felkérő';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Pictures */
  $handler->display->display_options['fields']['field_pictures']['id'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['table'] = 'field_data_field_pictures';
  $handler->display->display_options['fields']['field_pictures']['field'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_pictures']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pictures']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['field_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pictures']['settings'] = array(
    'image_style' => 'box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pictures']['separator'] = '';
  /* Mező: Felhasználói kapcsolatok: User relationship add / remove action */
  $handler->display->display_options['fields']['ur_action']['id'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['table'] = 'users';
  $handler->display->display_options['fields']['ur_action']['field'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['ur_action']['label'] = '';
  $handler->display->display_options['fields']['ur_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ur_action']['ur-type'] = '1';
  $handler->display->display_options['fields']['ur_action']['ur-actions'] = array(
    'add' => 'add',
    'remove' => 'remove',
    'requested' => 'requested',
    'received' => 'received',
  );
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['label'] = '';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Felhasználói kapcsolatok: Requestee user is current user */
  $handler->display->display_options['filters']['requestee_id_current']['id'] = 'requestee_id_current';
  $handler->display->display_options['filters']['requestee_id_current']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['requestee_id_current']['field'] = 'requestee_id_current';
  $handler->display->display_options['filters']['requestee_id_current']['value'] = '1';
  /* Filter criterion: Felhasználói kapcsolatok: Kapcsolat állapota */
  $handler->display->display_options['filters']['approved']['id'] = 'approved';
  $handler->display->display_options['filters']['approved']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['approved']['field'] = 'approved';
  $handler->display->display_options['filters']['approved']['operator'] = '!=';
  $handler->display->display_options['filters']['approved']['value'] = '1';

  /* Display: Partners */
  $handler = $view->new_display('panel_pane', 'Partners', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ismerősök';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Kapcsolat: Felhasználói kapcsolatok: Kapcsolattípus azonosító */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['required'] = TRUE;
  /* Kapcsolat: Felhasználói kapcsolatok: Felkérő felhasználó */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['label'] = 'felkérő';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Mező: Felhasználó: Pictures */
  $handler->display->display_options['fields']['field_pictures']['id'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['table'] = 'field_data_field_pictures';
  $handler->display->display_options['fields']['field_pictures']['field'] = 'field_pictures';
  $handler->display->display_options['fields']['field_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_pictures']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pictures']['alter']['path'] = 'user-page/[uid]';
  $handler->display->display_options['fields']['field_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pictures']['settings'] = array(
    'image_style' => 'box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pictures']['separator'] = '';
  /* Mező: Felhasználói kapcsolatok: User relationship add / remove action */
  $handler->display->display_options['fields']['ur_action']['id'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['table'] = 'users';
  $handler->display->display_options['fields']['ur_action']['field'] = 'ur_action';
  $handler->display->display_options['fields']['ur_action']['label'] = '';
  $handler->display->display_options['fields']['ur_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ur_action']['ur-type'] = '1';
  $handler->display->display_options['fields']['ur_action']['ur-actions'] = array(
    'add' => 'add',
    'remove' => 'remove',
    'requested' => 'requested',
    'received' => 'received',
  );
  /* Mező: Felhasználó: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid_1']['label'] = '';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Felhasználó: Aktív */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Felhasználó: Jelenlegi */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '0';
  /* Filter criterion: Felhasználói kapcsolatok: Requester or Requestee is current user */
  $handler->display->display_options['filters']['requester_or_requestee_current_user']['id'] = 'requester_or_requestee_current_user';
  $handler->display->display_options['filters']['requester_or_requestee_current_user']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['requester_or_requestee_current_user']['field'] = 'requester_or_requestee_current_user';
  $handler->display->display_options['filters']['requester_or_requestee_current_user']['value'] = '1';
  /* Filter criterion: Felhasználói kapcsolatok: Kapcsolat állapota */
  $handler->display->display_options['filters']['approved']['id'] = 'approved';
  $handler->display->display_options['filters']['approved']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['approved']['field'] = 'approved';
  $handler->display->display_options['filters']['approved']['value'] = '1';
  $translatables['users'] = array(
    t('Master'),
    t('Új tagok'),
    t('more'),
    t('Apply'),
    t('Alaphelyzet'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('rtid'),
    t('user-page/[uid]'),
    t('Mégsem'),
    t('All user'),
    t('Mind'),
    t('View panes'),
    t('User you on'),
    t('Nekik küldtél meghívót, egyelőre nem hagyták jóvá'),
    t('felkérő'),
    t('Inquiring users'),
    t('Ők szeretnének megismerni téged!'),
    t('Partners'),
    t('Ismerősök'),
  );
  $export['users'] = $view;

  return $export;
}
