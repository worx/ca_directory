<?php
/**
 * @file
 * ca_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_directory_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Directory Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: CA Directory: Admin */
  $handler = $view->new_display('panel_pane', 'CA Directory: Admin', 'ca_directory_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_directory_admin'] = $view;

  $view = new view();
  $view->name = 'ca_directory_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Directory List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_ca_directory_owner']['id'] = 'field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['table'] = 'field_data_field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['field'] = 'field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['label'] = '';
  $handler->display->display_options['fields']['field_ca_directory_owner']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_ca_directory_address']['id'] = 'field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['table'] = 'field_data_field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['field'] = 'field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ca_directory_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_directory_address']['empty_zero'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_ca_directory_phone']['id'] = 'field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['table'] = 'field_data_field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['field'] = 'field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ca_directory_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_directory_phone']['empty_zero'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_ca_directory_fax']['id'] = 'field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['table'] = 'field_data_field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['field'] = 'field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ca_directory_fax']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_directory_fax']['empty_zero'] = TRUE;
  /* Field: Content: E-Mail */
  $handler->display->display_options['fields']['field_ca_directory_email']['id'] = 'field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['table'] = 'field_data_field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['field'] = 'field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ca_directory_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_directory_email']['empty_zero'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_ca_directory_website']['id'] = 'field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['table'] = 'field_data_field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['field'] = 'field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ca_directory_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_directory_website']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_directory_website']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Business Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    13007701 => 0,
    6915241 => 0,
  );
  /* Filter criterion: Content: Contact (field_ca_directory_owner) */
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['id'] = 'field_ca_directory_owner_value';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['table'] = 'field_data_field_ca_directory_owner';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['field'] = 'field_ca_directory_owner_value';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['operator_id'] = 'field_ca_directory_owner_value_op';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['label'] = 'Owner';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['operator'] = 'field_ca_directory_owner_value_op';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['identifier'] = 'contact';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    13007701 => 0,
    6915241 => 0,
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    246778053 => 0,
    256820458 => 0,
    227698236 => 0,
    191817721 => 0,
    192508511 => 0,
    95728846 => 0,
    13007701 => 0,
    246307762 => 0,
    39516467 => 0,
    6915241 => 0,
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'directory';

  /* Display: CA Directory: Grid Template One */
  $handler = $view->new_display('panel_pane', 'CA Directory: Grid Template One', 'ca_directory_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Directory Grid Template View';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Directory: Flex Template One */
  $handler = $view->new_display('panel_pane', 'CA Directory: Flex Template One', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Directory: Flex Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'ca_directory_feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'directory/feed';
  $handler->display->display_options['displays'] = array(
    'ca_directory_list_1' => 'ca_directory_list_1',
    'default' => 0,
  );
  $export['ca_directory_list'] = $view;

  $view = new view();
  $view->name = 'ca_directory_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Directory Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_directory_image']['id'] = 'field_ca_directory_image';
  $handler->display->display_options['fields']['field_ca_directory_image']['table'] = 'field_data_field_ca_directory_image';
  $handler->display->display_options['fields']['field_ca_directory_image']['field'] = 'field_ca_directory_image';
  $handler->display->display_options['fields']['field_ca_directory_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_directory_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_directory_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_directory_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_directory_image']['settings'] = array(
    'colorbox_node_style' => 'crop_default_landscape',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_directory_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_directory_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );

  /* Display: CA Directory: Node Template One */
  $handler = $view->new_display('panel_pane', 'CA Directory: Node Template One', 'ca_directory_node_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Directory: Node Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_directory_node'] = $view;

  $view = new view();
  $view->name = 'ca_directory_sort';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Directory Sort';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'weight' => 'weight',
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
    'weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );

  /* Display: CA Directory: Sort View */
  $handler = $view->new_display('panel_pane', 'CA Directory: Sort View', 'ca_directory_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Directory: Sort View';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_directory_sort'] = $view;

  $view = new view();
  $view->name = 'ca_directory_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Directory Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_ca_directory_owner']['id'] = 'field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['table'] = 'field_data_field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['field'] = 'field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['label'] = '';
  $handler->display->display_options['fields']['field_ca_directory_owner']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_ca_directory_address']['id'] = 'field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['table'] = 'field_data_field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['field'] = 'field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['element_label_type'] = 'strong';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_ca_directory_phone']['id'] = 'field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['table'] = 'field_data_field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['field'] = 'field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['element_label_type'] = 'strong';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_ca_directory_fax']['id'] = 'field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['table'] = 'field_data_field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['field'] = 'field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['element_label_type'] = 'strong';
  /* Field: Content: E-Mail */
  $handler->display->display_options['fields']['field_ca_directory_email']['id'] = 'field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['table'] = 'field_data_field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['field'] = 'field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['element_label_type'] = 'strong';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_ca_directory_website']['id'] = 'field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['table'] = 'field_data_field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['field'] = 'field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ca_directory_website']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Business Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    13007701 => 0,
    6915241 => 0,
  );
  /* Filter criterion: Content: Contact (field_ca_directory_owner) */
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['id'] = 'field_ca_directory_owner_value';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['table'] = 'field_data_field_ca_directory_owner';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['field'] = 'field_ca_directory_owner_value';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['operator_id'] = 'field_ca_directory_owner_value_op';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['label'] = 'Owner';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['operator'] = 'field_ca_directory_owner_value_op';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['identifier'] = 'field_ca_directory_owner_value';
  $handler->display->display_options['filters']['field_ca_directory_owner_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    13007701 => 0,
    6915241 => 0,
  );

  /* Display: CA Directory: Term Grid Template One */
  $handler = $view->new_display('panel_pane', 'CA Directory: Term Grid Template One', 'ca_directory_term_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Directory: Term Grid Template View';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'directory/category/%/feed';
  $handler->display->display_options['displays'] = array(
    'ca_directory_term_list_1' => 'ca_directory_term_list_1',
    'default' => 0,
  );
  $export['ca_directory_term'] = $view;

  return $export;
}
