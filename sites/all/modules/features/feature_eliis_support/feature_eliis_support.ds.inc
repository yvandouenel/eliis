<?php
/**
 * @file
 * feature_eliis_support.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_eliis_support_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_help_user_guide_paleoscan|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_help_user_guide_paleoscan';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user_guide',
      ),
    ),
    'fields' => array(
      'field_user_guide' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_help_user_guide_paleoscan|default'] = $ds_layout;

  return $export;
}
