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
  $field_group->identifier = 'group_api|node|licensed_page|default';
  $field_group->group_name = 'group_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_same_height';
  $field_group->data = array(
    'label' => 'API',
    'weight' => '17',
    'children' => array(
      0 => 'group_paleoscan_db',
      1 => 'group_paleoscan_geomodel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'API',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-api field-group-div col-md-4 bg-gris-tres-tres-clair col-xs-12',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_api|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_api|node|licensed_page|form';
  $field_group->group_name = 'group_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'API',
    'weight' => '27',
    'children' => array(
      0 => 'group_paleoscan_db',
      1 => 'group_paleoscan_geomodel',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_api|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_configuration|node|licensed_page|form';
  $field_group->group_name = 'group_configuration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'Configuration',
    'weight' => '30',
    'children' => array(
      0 => 'field_configuration',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-configuration field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_configuration|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datalink|node|licensed_page|default';
  $field_group->group_name = 'group_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_same_height';
  $field_group->data = array(
    'label' => 'DATALINK',
    'weight' => '16',
    'children' => array(
      0 => 'group_petrel',
      1 => 'group_decision_space',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'DATALINK',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-datalink field-group-div col-md-4 bg-gris-extrement-clair col-xs-12',
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
    'weight' => '26',
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
  $field_group->identifier = 'group_flexnet_external_drivers|node|licensed_page|form';
  $field_group->group_name = 'group_flexnet_external_drivers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'Flexnet/External Drivers',
    'weight' => '29',
    'children' => array(
      0 => 'field_flexnet',
      1 => 'field_external_drivers',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-flexnet-external-drivers field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_flexnet_external_drivers|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_licence_request|node|licensed_page|form';
  $field_group->group_name = 'group_licence_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'License Request',
    'weight' => '28',
    'children' => array(
      0 => 'field_free_30_days_trial',
      1 => 'field_sofware_demonstration',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-licence-request field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_licence_request|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_license_request|node|licensed_page|default';
  $field_group->group_name = 'group_license_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'License Request',
    'weight' => '8',
    'children' => array(
      0 => 'group_same_height_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'License Request',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-license-request field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_license_request|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan_db|node|licensed_page|default';
  $field_group->group_name = 'group_paleoscan_db';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_api';
  $field_group->data = array(
    'label' => 'Paleoscan Database',
    'weight' => '21',
    'children' => array(
      0 => 'field_paleoscan_database',
      1 => 'field_files_to_download_db',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paleoscan Database',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paleoscan-db field-group-div col-md-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h5',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan_db|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan_db|node|licensed_page|form';
  $field_group->group_name = 'group_paleoscan_db';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_api';
  $field_group->data = array(
    'label' => 'Paleoscan Database',
    'weight' => '18',
    'children' => array(
      0 => 'field_paleoscan_database',
      1 => 'field_files_to_download_db',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paleoscan Database',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-paleoscan-db field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan_db|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan_geomodel|node|licensed_page|default';
  $field_group->group_name = 'group_paleoscan_geomodel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_api';
  $field_group->data = array(
    'label' => 'PaleoScan Geomodel',
    'weight' => '22',
    'children' => array(
      0 => 'field_paleoscan_geomodel_2016',
      1 => 'field_files_to_download_geomodel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PaleoScan Geomodel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paleoscan-geomodel field-group-div col-md-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h5',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan_geomodel|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan_geomodel|node|licensed_page|form';
  $field_group->group_name = 'group_paleoscan_geomodel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_api';
  $field_group->data = array(
    'label' => 'Paleoscan Geomodel',
    'weight' => '19',
    'children' => array(
      0 => 'field_paleoscan_geomodel_2016',
      1 => 'field_files_to_download_geomodel',
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
        'classes' => 'group-paleoscan-geomodel field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_paleoscan_geomodel|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan|node|licensed_page|default';
  $field_group->group_name = 'group_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_same_height';
  $field_group->data = array(
    'label' => 'PaleoScan',
    'weight' => '15',
    'children' => array(
      0 => 'field_paleoscan_tm',
      1 => 'field_files_to_download',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PaleoScan',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paleoscan field-group-div col-md-4 bg-gris-tres-tres-clair col-xs-12',
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
    'weight' => '25',
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
  $field_group->identifier = 'group_same_height_2|node|licensed_page|default';
  $field_group->group_name = 'group_same_height_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_license_request';
  $field_group->data = array(
    'label' => 'same height 2',
    'weight' => '19',
    'children' => array(
      0 => 'field_free_30_days_trial',
      1 => 'field_sofware_demonstration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'same height 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-same-height-2 field-group-div row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_same_height_2|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_same_height_3|node|licensed_page|default';
  $field_group->group_name = 'group_same_height_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'same height 3',
    'weight' => '10',
    'children' => array(
      0 => 'field_flexnet',
      1 => 'field_external_drivers',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'same height 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-same-height-3 field-group-div row row-eq-height bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_same_height_3|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_same_height|node|licensed_page|default';
  $field_group->group_name = 'group_same_height';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'same height',
    'weight' => '14',
    'children' => array(
      0 => 'group_paleoscan',
      1 => 'group_datalink',
      2 => 'group_api',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'same height',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-same-height field-group-div row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_same_height|node|licensed_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sofware|field_collection_item|field_files_to_download|default';
  $field_group->group_name = 'group_sofware';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_files_to_download';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group sofware',
    'weight' => '0',
    'children' => array(
      0 => 'field_sofware',
      1 => 'field_sofware_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group sofware',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sofware field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sofware|field_collection_item|field_files_to_download|default'] = $field_group;

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
    'label' => 'Software',
    'weight' => '6',
    'children' => array(
      0 => 'group_same_height',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Software',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sofware field-group-htabs',
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
    'label' => 'Software',
    'weight' => '3',
    'children' => array(
      0 => 'group_paleoscan',
      1 => 'group_datalink',
      2 => 'group_api',
      3 => 'group_text_intro',
      4 => 'group_licence_request',
      5 => 'group_flexnet_external_drivers',
      6 => 'group_configuration',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Software',
      'instance_settings' => array(
        'classes' => 'group-sofware field-group-htabs',
      ),
    ),
  );
  $export['group_sofware|node|licensed_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_intro|node|licensed_page|form';
  $field_group->group_name = 'group_text_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'licensed_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sofware';
  $field_group->data = array(
    'label' => 'Introduction texts',
    'weight' => '24',
    'children' => array(
      0 => 'body',
      1 => 'field_text_only_licensed',
      2 => 'field_text_only_anonymous',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-text-intro field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_text_intro|node|licensed_page|form'] = $field_group;

  return $export;
}
