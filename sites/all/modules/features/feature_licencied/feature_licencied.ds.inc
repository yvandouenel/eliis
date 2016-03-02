<?php
/**
 * @file
 * feature_licencied.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_licencied_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_files_to_download|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_files_to_download';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_sofware' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'private-file',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_files_to_download|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function feature_licencied_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'anchor_5';
  $ds_field->label = 'anchor-5';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a name="anchor-5" id="anchor-5" class="anchor-link">&nbsp;</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['anchor_5'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'top_licensed_page_anchor';
  $ds_field->label = 'top-licensed-page-anchors';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'licensed_page|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id="licensed-top-anchors">
<a href="#anchor-1" class="licensed-top-anchor">Software</a>
<a href="#anchor-2" class="licensed-top-anchor">License Request</a>
<a href="#anchor-3" class="licensed-top-anchor">Set up</a>
<a href="#anchor-4" class="licensed-top-anchor">External Drivers</a>
<a href="#anchor-5" class="licensed-top-anchor">Configuration</a>
</div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['top_licensed_page_anchor'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_licencied_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_files_to_download_datalink|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_files_to_download_datalink';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sofware',
        1 => 'field_release_notes',
      ),
    ),
    'fields' => array(
      'field_sofware' => 'ds_content',
      'field_release_notes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_files_to_download_datalink|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_files_to_download_decision|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_files_to_download_decision';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sofware',
        1 => 'field_release_notes',
      ),
    ),
    'fields' => array(
      'field_sofware' => 'ds_content',
      'field_release_notes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_files_to_download_decision|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_files_to_download_geomodel|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_files_to_download_geomodel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sofware',
        1 => 'field_release_notes',
      ),
    ),
    'fields' => array(
      'field_sofware' => 'ds_content',
      'field_release_notes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_files_to_download_geomodel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_files_to_download|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_files_to_download';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_sofware',
        1 => 'field_release_notes',
        2 => 'field_color_link_download',
        3 => 'field_sofware',
        4 => 'field_sofware_description',
      ),
    ),
    'fields' => array(
      'group_sofware' => 'ds_content',
      'field_release_notes' => 'ds_content',
      'field_color_link_download' => 'ds_content',
      'field_sofware' => 'ds_content',
      'field_sofware_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_files_to_download|default'] = $ds_layout;

  return $export;
}
