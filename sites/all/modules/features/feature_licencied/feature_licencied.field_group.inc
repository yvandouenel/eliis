<?php
/**
 * @file
 * feature_licencied.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_licencied_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datalink|node|licensed_page|default';
  $field_group->group_name = 'group_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'DATALINK',
    'weight' => '9',
    'children' => array(
      0 => 'group_petrel',
      1 => 'group_decision_space',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'DATALINK',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-datalink field-group-div col-md-4',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_datalink|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datalink|node|licensed_page|form';
  $field_group->group_name = 'group_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'DATALINK',
    'weight' => '9',
    'children' => array(
      0 => 'group_petrel',
      1 => 'group_decision_space',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-datalink field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_datalink|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_decision_space|node|licensed_page|default';
  $field_group->group_name = 'group_decision_space';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_datalink';
  $field_group->data = array(
    'label' => 'DecisionSpace',
    'weight' => '18',
    'children' => array(
      0 => 'field_decisionspace',
      1 => 'field_files_to_download_decision',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'DecisionSpace',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-decision-space field-group-div col-md-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h5',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_decision_space|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_decision_space|node|licensed_page|form';
  $field_group->group_name = 'group_decision_space';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_datalink';
  $field_group->data = array(
    'label' => 'DecisionSpace',
    'weight' => '12',
    'children' => array(
      0 => 'field_decisionspace',
      1 => 'field_files_to_download_decision',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-decision-space field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_decision_space|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan|node|licensed_page|default';
  $field_group->group_name = 'group_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'PaleoScan',
    'weight' => '8',
    'children' => array(
      0 => 'field_paleoscan_tm',
      1 => 'field_files_to_download',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PaleoScan',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paleoscan field-group-div col-md-4',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan|node|licensed_page|form';
  $field_group->group_name = 'group_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'Paleoscan',
    'weight' => '8',
    'children' => array(
      0 => 'field_paleoscan_tm',
      1 => 'field_files_to_download',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Paleoscan',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petrel|node|licensed_page|default';
  $field_group->group_name = 'group_petrel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_datalink';
  $field_group->data = array(
    'label' => 'Petrel',
    'weight' => '17',
    'children' => array(
      0 => 'field_petrel',
      1 => 'field_files_to_download_datalink',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Petrel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-petrel field-group-div col-md-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h5',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_petrel|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petrel|node|licensed_page|form';
  $field_group->group_name = 'group_petrel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_datalink';
  $field_group->data = array(
    'label' => 'Petrel',
    'weight' => '11',
    'children' => array(
      0 => 'field_petrel',
      1 => 'field_files_to_download_datalink',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-petrel field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_petrel|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sofware|node|licensed_page|default';
  $field_group->group_name = 'group_sofware';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sofware',
    'weight' => '8',
    'children' => array(
      0 => 'group_paleoscan',
      1 => 'group_datalink',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sofware',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sofware field-group-htabs ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sofware|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sofware|node|licensed_page|form';
  $field_group->group_name = 'group_sofware';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sofware',
    'weight' => '7',
    'children' => array(
      0 => 'group_paleoscan',
      1 => 'group_datalink',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-sofware field-group-htabs',
      ),
    ),
  );
  $export['group_sofware|node|licensed_page|form'] = $field_group;

  return $export;
}
