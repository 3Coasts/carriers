<?php
/**
 * @file
 * carriers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carriers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function carriers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function carriers_node_info() {
  $items = array(
    'carrier' => array(
      'name' => t('Carrier'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
