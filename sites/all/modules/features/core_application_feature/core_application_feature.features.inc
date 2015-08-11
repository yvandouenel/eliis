<?php
/**
 * @file
 * core_application_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function core_application_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function core_application_feature_image_default_styles() {
  $styles = array();

  // Exported image style: medium_image_landscape.
  $styles['medium_image_landscape'] = array(
    'label' => 'medium_image_landscape (680x230)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 680,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function core_application_feature_node_info() {
  $items = array(
    'core_application_feature' => array(
      'name' => t('Core Application Feature'),
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
