<?php
/**
 * @file
 * ca_directory.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_directory_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_directory_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Directory: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-node ca-directory-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'directory' => 'directory',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->title = '%node:title';
  $display->uuid = 'c2be78a3-7c9f-4e6f-9e86-169cd740403f';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f4be8b8c-1c84-4e85-be5a-33541207c045';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_node-ca_directory_node_1';
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
  $pane->uuid = 'f4be8b8c-1c84-4e85-be5a-33541207c045';
  $display->content['new-f4be8b8c-1c84-4e85-be5a-33541207c045'] = $pane;
  $display->panels['center'][0] = 'new-f4be8b8c-1c84-4e85-be5a-33541207c045';
  $pane = new stdClass();
  $pane->pid = 'new-06d8e783-3e76-4b0c-beca-1542f830c5cd';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_owner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '06d8e783-3e76-4b0c-beca-1542f830c5cd';
  $display->content['new-06d8e783-3e76-4b0c-beca-1542f830c5cd'] = $pane;
  $display->panels['center'][1] = 'new-06d8e783-3e76-4b0c-beca-1542f830c5cd';
  $pane = new stdClass();
  $pane->pid = 'new-11992e08-a071-42e9-92ea-89b90c579803';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '11992e08-a071-42e9-92ea-89b90c579803';
  $display->content['new-11992e08-a071-42e9-92ea-89b90c579803'] = $pane;
  $display->panels['center'][2] = 'new-11992e08-a071-42e9-92ea-89b90c579803';
  $pane = new stdClass();
  $pane->pid = 'new-1a378007-515f-441e-b502-9cd056b52b20';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_map';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1a378007-515f-441e-b502-9cd056b52b20';
  $display->content['new-1a378007-515f-441e-b502-9cd056b52b20'] = $pane;
  $display->panels['center'][3] = 'new-1a378007-515f-441e-b502-9cd056b52b20';
  $pane = new stdClass();
  $pane->pid = 'new-938ee6db-23b6-4178-b6a3-99e722325cbe';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_phone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Phone',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '938ee6db-23b6-4178-b6a3-99e722325cbe';
  $display->content['new-938ee6db-23b6-4178-b6a3-99e722325cbe'] = $pane;
  $display->panels['center'][4] = 'new-938ee6db-23b6-4178-b6a3-99e722325cbe';
  $pane = new stdClass();
  $pane->pid = 'new-da35e4b4-da0b-4c41-9e34-2b44e35d7454';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_fax';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'da35e4b4-da0b-4c41-9e34-2b44e35d7454';
  $display->content['new-da35e4b4-da0b-4c41-9e34-2b44e35d7454'] = $pane;
  $display->panels['center'][5] = 'new-da35e4b4-da0b-4c41-9e34-2b44e35d7454';
  $pane = new stdClass();
  $pane->pid = 'new-72e0785b-cc7b-47f9-aa31-28e6b203aed3';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'email_contact',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '72e0785b-cc7b-47f9-aa31-28e6b203aed3';
  $display->content['new-72e0785b-cc7b-47f9-aa31-28e6b203aed3'] = $pane;
  $display->panels['center'][6] = 'new-72e0785b-cc7b-47f9-aa31-28e6b203aed3';
  $pane = new stdClass();
  $pane->pid = 'new-b804b090-01aa-473f-9832-ace367ad0c31';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'b804b090-01aa-473f-9832-ace367ad0c31';
  $display->content['new-b804b090-01aa-473f-9832-ace367ad0c31'] = $pane;
  $display->panels['center'][7] = 'new-b804b090-01aa-473f-9832-ace367ad0c31';
  $pane = new stdClass();
  $pane->pid = 'new-862fb254-7de5-405b-b3b6-c49c4fd05e62';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '862fb254-7de5-405b-b3b6-c49c4fd05e62';
  $display->content['new-862fb254-7de5-405b-b3b6-c49c4fd05e62'] = $pane;
  $display->panels['center'][8] = 'new-862fb254-7de5-405b-b3b6-c49c4fd05e62';
  $pane = new stdClass();
  $pane->pid = 'new-bde4f170-66d3-44f6-afc5-52f29ed36809';
  $pane->panel = 'center';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'bde4f170-66d3-44f6-afc5-52f29ed36809';
  $display->content['new-bde4f170-66d3-44f6-afc5-52f29ed36809'] = $pane;
  $display->panels['center'][9] = 'new-bde4f170-66d3-44f6-afc5-52f29ed36809';
  $pane = new stdClass();
  $pane->pid = 'new-49dd99da-9a82-4813-a7c1-d3449efd6bc7';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '49dd99da-9a82-4813-a7c1-d3449efd6bc7';
  $display->content['new-49dd99da-9a82-4813-a7c1-d3449efd6bc7'] = $pane;
  $display->panels['center'][10] = 'new-49dd99da-9a82-4813-a7c1-d3449efd6bc7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_directory_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_directory_term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Directory: Term List Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-list-term ca-directory-list-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'directory' => 'directory',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'c274b1ec-552d-4aaa-8f63-49e3bcd66b76';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_term-ca_directory_term_list_1';
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
  $pane->uuid = 'fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $display->content['new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656'] = $pane;
  $display->panels['middle'][0] = 'new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $handler->conf['display'] = $display;
  $export['ca_directory_term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_216a32d3-7149-42d5-8338-d3342ac5ce5f';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Directory: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-node ca-directory-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'directory' => 'directory',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c2be78a3-7c9f-4e6f-9e86-169cd740403f';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f4be8b8c-1c84-4e85-be5a-33541207c045';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_node-ca_directory_node_1';
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
  $pane->uuid = 'f4be8b8c-1c84-4e85-be5a-33541207c045';
  $display->content['new-f4be8b8c-1c84-4e85-be5a-33541207c045'] = $pane;
  $display->panels['first-first'][0] = 'new-f4be8b8c-1c84-4e85-be5a-33541207c045';
  $pane = new stdClass();
  $pane->pid = 'new-06d8e783-3e76-4b0c-beca-1542f830c5cd';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_owner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '06d8e783-3e76-4b0c-beca-1542f830c5cd';
  $display->content['new-06d8e783-3e76-4b0c-beca-1542f830c5cd'] = $pane;
  $display->panels['first-first'][1] = 'new-06d8e783-3e76-4b0c-beca-1542f830c5cd';
  $pane = new stdClass();
  $pane->pid = 'new-11992e08-a071-42e9-92ea-89b90c579803';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '11992e08-a071-42e9-92ea-89b90c579803';
  $display->content['new-11992e08-a071-42e9-92ea-89b90c579803'] = $pane;
  $display->panels['first-first'][2] = 'new-11992e08-a071-42e9-92ea-89b90c579803';
  $pane = new stdClass();
  $pane->pid = 'new-1a378007-515f-441e-b502-9cd056b52b20';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_map';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1a378007-515f-441e-b502-9cd056b52b20';
  $display->content['new-1a378007-515f-441e-b502-9cd056b52b20'] = $pane;
  $display->panels['first-first'][3] = 'new-1a378007-515f-441e-b502-9cd056b52b20';
  $pane = new stdClass();
  $pane->pid = 'new-938ee6db-23b6-4178-b6a3-99e722325cbe';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_phone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Phone',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '938ee6db-23b6-4178-b6a3-99e722325cbe';
  $display->content['new-938ee6db-23b6-4178-b6a3-99e722325cbe'] = $pane;
  $display->panels['first-first'][4] = 'new-938ee6db-23b6-4178-b6a3-99e722325cbe';
  $pane = new stdClass();
  $pane->pid = 'new-da35e4b4-da0b-4c41-9e34-2b44e35d7454';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_fax';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'da35e4b4-da0b-4c41-9e34-2b44e35d7454';
  $display->content['new-da35e4b4-da0b-4c41-9e34-2b44e35d7454'] = $pane;
  $display->panels['first-first'][5] = 'new-da35e4b4-da0b-4c41-9e34-2b44e35d7454';
  $pane = new stdClass();
  $pane->pid = 'new-72e0785b-cc7b-47f9-aa31-28e6b203aed3';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'email_contact',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '72e0785b-cc7b-47f9-aa31-28e6b203aed3';
  $display->content['new-72e0785b-cc7b-47f9-aa31-28e6b203aed3'] = $pane;
  $display->panels['first-first'][6] = 'new-72e0785b-cc7b-47f9-aa31-28e6b203aed3';
  $pane = new stdClass();
  $pane->pid = 'new-b804b090-01aa-473f-9832-ace367ad0c31';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'b804b090-01aa-473f-9832-ace367ad0c31';
  $display->content['new-b804b090-01aa-473f-9832-ace367ad0c31'] = $pane;
  $display->panels['first-first'][7] = 'new-b804b090-01aa-473f-9832-ace367ad0c31';
  $pane = new stdClass();
  $pane->pid = 'new-862fb254-7de5-405b-b3b6-c49c4fd05e62';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_directory_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '862fb254-7de5-405b-b3b6-c49c4fd05e62';
  $display->content['new-862fb254-7de5-405b-b3b6-c49c4fd05e62'] = $pane;
  $display->panels['first-first'][8] = 'new-862fb254-7de5-405b-b3b6-c49c4fd05e62';
  $pane = new stdClass();
  $pane->pid = 'new-bde4f170-66d3-44f6-afc5-52f29ed36809';
  $pane->panel = 'first-first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'bde4f170-66d3-44f6-afc5-52f29ed36809';
  $display->content['new-bde4f170-66d3-44f6-afc5-52f29ed36809'] = $pane;
  $display->panels['first-first'][9] = 'new-bde4f170-66d3-44f6-afc5-52f29ed36809';
  $pane = new stdClass();
  $pane->pid = 'new-49dd99da-9a82-4813-a7c1-d3449efd6bc7';
  $pane->panel = 'first-first';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '49dd99da-9a82-4813-a7c1-d3449efd6bc7';
  $display->content['new-49dd99da-9a82-4813-a7c1-d3449efd6bc7'] = $pane;
  $display->panels['first-first'][10] = 'new-49dd99da-9a82-4813-a7c1-d3449efd6bc7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_216a32d3-7149-42d5-8338-d3342ac5ce5f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_9e6d3a61-2282-46a6-96c2-4283ee063d07';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Aurora Directory: Term List Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-list-term ca-directory-list-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'directory' => 'directory',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'c274b1ec-552d-4aaa-8f63-49e3bcd66b76';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_term-ca_directory_term_list_1';
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
  $pane->uuid = 'fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $display->content['new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656'] = $pane;
  $display->panels['first-first'][0] = 'new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fb04fbc1-bdba-4a46-b6e0-b1d86aa12656';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_9e6d3a61-2282-46a6-96c2-4283ee063d07'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_directory_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_directory_add_directory';
  $page->task = 'page';
  $page->admin_title = 'CA Directory: Add Directory';
  $page->admin_description = '';
  $page->path = 'directory/add_directory';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 6915241,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Directory',
    'name' => 'navigation',
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
  $handler->name = 'page_ca_directory_add_directory_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_directory_add_directory';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'directory',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_directory_add_directory'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_directory_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Directory: Administration';
  $page->admin_description = '';
  $page->path = 'directory/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 6915241,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administration',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Admin',
      'name' => 'navigation',
      'weight' => '15',
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
  $handler->name = 'page_ca_directory_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_directory_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Directory: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-directory-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Adminstration';
  $display->uuid = 'ca92a28e-b96f-4a34-b7e3-41ebb8543a1c';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-27cfe0c3-5333-4290-a680-06514d352670';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_admin-ca_directory_admin';
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
  $pane->uuid = '27cfe0c3-5333-4290-a680-06514d352670';
  $display->content['new-27cfe0c3-5333-4290-a680-06514d352670'] = $pane;
  $display->panels['center'][0] = 'new-27cfe0c3-5333-4290-a680-06514d352670';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_directory_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_directory_list';
  $page->task = 'page';
  $page->admin_title = 'CA Directory: List';
  $page->admin_description = '';
  $page->path = 'directory/view';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 6915241,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'main-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Directory',
      'name' => 'main-menu',
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
  $handler->name = 'page_ca_directory_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_directory_list';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA Directory: Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-list ca-directory-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_directory_list_template',
          'settings' => array(
            'ca_directory_list_template' => 'ca_directory_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
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
  $display->uuid = '35f21041-9b9d-4956-b82f-5e30b7635bfb';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aa331e07-bbb8-435c-bb6e-c56503c7f575';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_list-ca_directory_list_1';
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
  $pane->uuid = 'aa331e07-bbb8-435c-bb6e-c56503c7f575';
  $display->content['new-aa331e07-bbb8-435c-bb6e-c56503c7f575'] = $pane;
  $display->panels['center'][0] = 'new-aa331e07-bbb8-435c-bb6e-c56503c7f575';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_directory_list_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_directory_list';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Directory: Flex Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-flex ca-directory-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_directory_list_template',
          'settings' => array(
            'ca_directory_list_template' => 'ca_directory_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
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
  $display->uuid = '35f21041-9b9d-4956-b82f-5e30b7635bfb';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-439b95de-267a-40a7-98b1-2169c03c94d1';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_list-panel_pane_1';
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
  $pane->uuid = '439b95de-267a-40a7-98b1-2169c03c94d1';
  $display->content['new-439b95de-267a-40a7-98b1-2169c03c94d1'] = $pane;
  $display->panels['center'][0] = 'new-439b95de-267a-40a7-98b1-2169c03c94d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_directory_list__panel_context_8e445784-6026-4495-90b7-57aa3c338146';
  $handler->task = 'page';
  $handler->subtask = 'ca_directory_list';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Directory: Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-list ca-directory-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_directory_list_template',
          'settings' => array(
            'ca_directory_list_template' => 'ca_directory_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35f21041-9b9d-4956-b82f-5e30b7635bfb';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aa331e07-bbb8-435c-bb6e-c56503c7f575';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_list-ca_directory_list_1';
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
  $pane->uuid = 'aa331e07-bbb8-435c-bb6e-c56503c7f575';
  $display->content['new-aa331e07-bbb8-435c-bb6e-c56503c7f575'] = $pane;
  $display->panels['first-first'][0] = 'new-aa331e07-bbb8-435c-bb6e-c56503c7f575';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_directory_list__panel_context_a2cf2421-80f1-417a-b31c-b97bddacbbff';
  $handler->task = 'page';
  $handler->subtask = 'ca_directory_list';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Directory: Flex Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-directory-flex ca-directory-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_directory_list_template',
          'settings' => array(
            'ca_directory_list_template' => 'ca_directory_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35f21041-9b9d-4956-b82f-5e30b7635bfb';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-439b95de-267a-40a7-98b1-2169c03c94d1';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_list-panel_pane_1';
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
  $pane->uuid = '439b95de-267a-40a7-98b1-2169c03c94d1';
  $display->content['new-439b95de-267a-40a7-98b1-2169c03c94d1'] = $pane;
  $display->panels['first-first'][0] = 'new-439b95de-267a-40a7-98b1-2169c03c94d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_directory_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_directory_sort_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Directory: Sort Admin';
  $page->admin_description = '';
  $page->path = 'directory/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 6915241,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Admin',
      'name' => 'navigation',
      'weight' => '-10',
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
  $handler->name = 'page_ca_directory_sort_admin__panel_context_42219c91-4789-497f-b200-3c09130c2a70';
  $handler->task = 'page';
  $handler->subtask = 'ca_directory_sort_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA Directory: Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-directory-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->title = 'Adminstration';
  $display->uuid = 'ca92a28e-b96f-4a34-b7e3-41ebb8543a1c';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-52793ae0-26ca-42b0-9d69-1704853fb97e';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_directory_sort-ca_directory_sort';
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
  $pane->uuid = '52793ae0-26ca-42b0-9d69-1704853fb97e';
  $display->content['new-52793ae0-26ca-42b0-9d69-1704853fb97e'] = $pane;
  $display->panels['center'][0] = 'new-52793ae0-26ca-42b0-9d69-1704853fb97e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_directory_sort_admin'] = $page;

  return $pages;

}
