<?php
/**
 * @file
 * ca_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_directory_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_directory_node_info() {
  $items = array(
    'directory' => array(
      'name' => t('Directory'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Business Name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_directory_weight_features_default_settings() {
  $settings = array();

  $settings['directory'] = array(
    'enabled' => 1,
    'range' => 100,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
