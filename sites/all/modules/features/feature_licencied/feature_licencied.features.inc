<?php
/**
 * @file
 * feature_licencied.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_licencied_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_licencied_node_info() {
  $items = array(
    'licensed_page' => array(
      'name' => t('Licensed page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
