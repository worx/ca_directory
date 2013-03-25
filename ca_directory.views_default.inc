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
  $view->name = 'ca_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Directory';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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

  /* Display: CA Directory: Grid Template One */
  $handler = $view->new_display('panel_pane', 'CA Directory: Grid Template One', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Owner */
  $handler->display->display_options['fields']['field_ca_directory_owner']['id'] = 'field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['table'] = 'field_data_field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['field'] = 'field_ca_directory_owner';
  $handler->display->display_options['fields']['field_ca_directory_owner']['label'] = '';
  $handler->display->display_options['fields']['field_ca_directory_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_directory_owner']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_ca_directory_owner']['hide_empty'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_ca_directory_address']['id'] = 'field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['table'] = 'field_data_field_ca_directory_address';
  $handler->display->display_options['fields']['field_ca_directory_address']['field'] = 'field_ca_directory_address';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_ca_directory_phone']['id'] = 'field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['table'] = 'field_data_field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['field'] = 'field_ca_directory_phone';
  $handler->display->display_options['fields']['field_ca_directory_phone']['empty'] = 'N/A';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_ca_directory_fax']['id'] = 'field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['table'] = 'field_data_field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['field'] = 'field_ca_directory_fax';
  $handler->display->display_options['fields']['field_ca_directory_fax']['empty'] = 'N/A';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_ca_directory_email']['id'] = 'field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['table'] = 'field_data_field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['field'] = 'field_ca_directory_email';
  $handler->display->display_options['fields']['field_ca_directory_email']['label'] = 'Email:';
  $handler->display->display_options['fields']['field_ca_directory_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_directory_email']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_ca_directory_email']['type'] = 'email_contact';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_ca_directory_website']['id'] = 'field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['table'] = 'field_data_field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['field'] = 'field_ca_directory_website';
  $handler->display->display_options['fields']['field_ca_directory_website']['label'] = '';
  $handler->display->display_options['fields']['field_ca_directory_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_directory_website']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_ca_directory_website']['click_sort_column'] = 'url';
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
    246778053 => 0,
    13007701 => 0,
    246307762 => 0,
    6915241 => 0,
  );
  /* Filter criterion: Content: Owner (field_ca_directory_owner) */
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
    246778053 => 0,
    13007701 => 0,
    246307762 => 0,
    6915241 => 0,
  );
  $handler->display->display_options['pane_title'] = 'CA Directory Grid Template View';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Directory: Admin */
  $handler = $view->new_display('panel_pane', 'CA Directory: Admin', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'status' => 'status',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
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
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directory' => 'directory',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Directory: Sort View */
  $handler = $view->new_display('panel_pane', 'CA Directory: Sort View', 'panel_pane_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Directory: Sort View';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Directory: Node Template One Main Image */
  $handler = $view->new_display('panel_pane', 'CA Directory: Node Template One Main Image', 'panel_pane_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_directory_image']['id'] = 'field_ca_directory_image';
  $handler->display->display_options['fields']['field_ca_directory_image']['table'] = 'field_data_field_ca_directory_image';
  $handler->display->display_options['fields']['field_ca_directory_image']['field'] = 'field_ca_directory_image';
  $handler->display->display_options['fields']['field_ca_directory_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_directory_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_directory_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_directory_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_directory_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_directory_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_directory_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Directory: Node View Main Image';
  $export['ca_directory'] = $view;

  return $export;
}
