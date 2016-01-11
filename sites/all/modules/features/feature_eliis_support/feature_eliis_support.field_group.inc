<?php
/**
 * @file
 * feature_eliis_support.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_eliis_support_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_api_database|node|support|default';
  $field_group->group_name = 'group_api_database';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_api';
  $field_group->data = array(
    'label' => 'group api database',
    'weight' => '69',
    'children' => array(
      0 => 'field__support_paleoscan_db',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group api database',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-api-database field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_api_database|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_api_geomodel|node|support|default';
  $field_group->group_name = 'group_api_geomodel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_api';
  $field_group->data = array(
    'label' => 'group api geomodel',
    'weight' => '71',
    'children' => array(
      0 => 'field_support_paleoscan_geomodel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group api geomodel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-api-geomodel field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_api_geomodel|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_api|node|support|default';
  $field_group->group_name = 'group_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_help_files';
  $field_group->data = array(
    'label' => 'API',
    'weight' => '27',
    'children' => array(
      0 => 'group_api_database',
      1 => 'group_api_geomodel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'API',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-api field-group-div col-md-4 bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_api|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_api|node|support|form';
  $field_group->group_name = 'group_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_guide';
  $field_group->data = array(
    'label' => 'API',
    'weight' => '9',
    'children' => array(
      0 => 'field__support_paleoscan_db',
      1 => 'field_support_paleoscan_geomodel',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-api field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_api|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cols_setup|node|support|default';
  $field_group->group_name = 'group_cols_setup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_setup';
  $field_group->data = array(
    'label' => 'group cols setup',
    'weight' => '4',
    'children' => array(
      0 => 'field_set_up_col1',
      1 => 'field_set_up_col_2',
      2 => 'field_set_up_col_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group cols setup',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cols-setup field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cols_setup|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datalink|node|support|default';
  $field_group->group_name = 'group_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_help_files';
  $field_group->data = array(
    'label' => 'DATALINK',
    'weight' => '26',
    'children' => array(
      0 => 'group_user_guide_petrel',
      1 => 'group_user_guide_decision',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'DATALINK',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-datalink field-group-div col-md-4 bg-gris-extrement-clair',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_datalink|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datalink|node|support|form';
  $field_group->group_name = 'group_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_guide';
  $field_group->data = array(
    'label' => 'Datalink',
    'weight' => '8',
    'children' => array(
      0 => 'field_support_petrel_link',
      1 => 'field_support_decision_space',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-datalink field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_datalink|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_decision_space|field_collection_item|field_help_user_guide_decison_sp|default';
  $field_group->group_name = 'group_decision_space';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_help_user_guide_decison_sp';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Decision Space',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_guide',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Decision Space',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-decision-space field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h6',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_decision_space|field_collection_item|field_help_user_guide_decison_sp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_col_1|node|support|default';
  $field_group->group_name = 'group_global_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_global_wrapper';
  $field_group->data = array(
    'label' => 'groupe global col1',
    'weight' => '54',
    'children' => array(
      0 => 'body',
      1 => 'group_help_files',
      2 => 'group_setup',
      3 => 'group_video_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'groupe global col1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-global-col-1 field-group-div col-md-10',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_global_col_1|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_wrapper|node|support|default';
  $field_group->group_name = 'group_global_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Help Files',
    'weight' => '0',
    'children' => array(
      0 => 'group_help_files',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Help Files',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-global-wrapper field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_global_wrapper|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_help_files|node|support|default';
  $field_group->group_name = 'group_help_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_global_wrapper';
  $field_group->data = array(
    'label' => 'Help Files wrapper',
    'weight' => '56',
    'children' => array(
      0 => 'group_datalink',
      1 => 'group_api',
      2 => 'group_paleoscan',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Help Files wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-help-files field-group-div row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_help_files|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_features|node|support|default';
  $field_group->group_name = 'group_new_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_help_files';
  $field_group->data = array(
    'label' => 'New Features',
    'weight' => '4',
    'children' => array(
      0 => 'group_over_new_features',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'New Features',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-new-features field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_new_features|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_features|node|support|form';
  $field_group->group_name = 'group_new_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'New Features',
    'weight' => '17',
    'children' => array(
      0 => 'group_nf_paleoscan',
      1 => 'group_nf_datalink',
      2 => 'group_nf_api',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-new-features field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_new_features|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nf_api|node|support|default';
  $field_group->group_name = 'group_nf_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_over_new_features';
  $field_group->data = array(
    'label' => 'group nf API',
    'weight' => '37',
    'children' => array(
      0 => 'field_api_new_feature_col1',
      1 => 'field_api_new_feature_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group nf API',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-nf-api field-group-div col-md-4 bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nf_api|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nf_api|node|support|form';
  $field_group->group_name = 'group_nf_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_new_features';
  $field_group->data = array(
    'label' => 'API',
    'weight' => '25',
    'children' => array(
      0 => 'field_api_new_feature_col1',
      1 => 'field_api_new_feature_col2',
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
        'classes' => 'group-nf-api field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_nf_api|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nf_datalink|node|support|default';
  $field_group->group_name = 'group_nf_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_over_new_features';
  $field_group->data = array(
    'label' => 'group nf datalink',
    'weight' => '36',
    'children' => array(
      0 => 'field_datalink_new_feature_col1',
      1 => 'field_datalink_new_feature_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group nf datalink',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-nf-datalink field-group-div col-md-4 bg-gris-extrement-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nf_datalink|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nf_datalink|node|support|form';
  $field_group->group_name = 'group_nf_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_new_features';
  $field_group->data = array(
    'label' => 'Datalink',
    'weight' => '24',
    'children' => array(
      0 => 'field_datalink_new_feature_col1',
      1 => 'field_datalink_new_feature_col2',
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
        'classes' => 'group-nf-datalink field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_nf_datalink|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nf_paleoscan|node|support|default';
  $field_group->group_name = 'group_nf_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_over_new_features';
  $field_group->data = array(
    'label' => 'group nf paleoscan',
    'weight' => '35',
    'children' => array(
      0 => 'field_paleoscan_new_feature_col1',
      1 => 'field_paleoscan_new_feature_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group nf paleoscan',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-nf-paleoscan field-group-div col-md-4 bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nf_paleoscan|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nf_paleoscan|node|support|form';
  $field_group->group_name = 'group_nf_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_new_features';
  $field_group->data = array(
    'label' => 'Paleoscan',
    'weight' => '23',
    'children' => array(
      0 => 'field_paleoscan_new_feature_col1',
      1 => 'field_paleoscan_new_feature_col2',
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
        'classes' => 'group-nf-paleoscan field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_nf_paleoscan|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_over_new_features|node|support|default';
  $field_group->group_name = 'group_over_new_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_new_features';
  $field_group->data = array(
    'label' => 'group over new features',
    'weight' => '34',
    'children' => array(
      0 => 'group_nf_paleoscan',
      1 => 'group_nf_datalink',
      2 => 'group_nf_api',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group over new features',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-over-new-features field-group-div  row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_over_new_features|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_over_rn|node|support|default';
  $field_group->group_name = 'group_over_rn';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_release_note';
  $field_group->data = array(
    'label' => 'group over release note',
    'weight' => '20',
    'children' => array(
      0 => 'group_rn_paleoscan',
      1 => 'group_rn_datalink',
      2 => 'group_rn_api',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group over release note',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-over-rn field-group-div row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_over_rn|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_over_training|node|support|default';
  $field_group->group_name = 'group_over_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_training_doc';
  $field_group->data = array(
    'label' => 'group over training',
    'weight' => '36',
    'children' => array(
      0 => 'group_training_col1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group over training',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-over-training field-group-div row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_over_training|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan_col1|node|support|default';
  $field_group->group_name = 'group_paleoscan_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paleoscan';
  $field_group->data = array(
    'label' => 'group paleoscan col1',
    'weight' => '27',
    'children' => array(
      0 => 'field_support_paleoscan',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group paleoscan col1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paleoscan-col1 field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan_col1|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan_col2|node|support|default';
  $field_group->group_name = 'group_paleoscan_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_paleoscan';
  $field_group->data = array(
    'label' => 'group paleoscan col2',
    'weight' => '29',
    'children' => array(
      0 => 'field_support_viewer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group paleoscan col2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paleoscan-col2 field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan_col2|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan|node|support|default';
  $field_group->group_name = 'group_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_help_files';
  $field_group->data = array(
    'label' => 'Paleoscan',
    'weight' => '25',
    'children' => array(
      0 => 'group_paleoscan_col1',
      1 => 'group_paleoscan_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paleoscan',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-paleoscan field-group-div col-md-4 bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_paleoscan|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paleoscan|node|support|form';
  $field_group->group_name = 'group_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_guide';
  $field_group->data = array(
    'label' => 'Paleoscan',
    'weight' => '7',
    'children' => array(
      0 => 'field_support_paleoscan',
      1 => 'field_support_viewer',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paleoscan field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_paleoscan|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petrel|field_collection_item|field_help_user_guide_petrel|default';
  $field_group->group_name = 'group_petrel';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_help_user_guide_petrel';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Petrel',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_guide',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Petrel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-petrel field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h6',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_petrel|field_collection_item|field_help_user_guide_petrel|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|node|support|form';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '19',
    'children' => array(
      0 => 'field_support_publications',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publications field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_publications|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication|node|support|default';
  $field_group->group_name = 'group_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group publication',
    'weight' => '3',
    'children' => array(
      0 => 'field_support_publications',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group publication',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-publication field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_publication|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_release_note|node|support|default';
  $field_group->group_name = 'group_release_note';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_help_files';
  $field_group->data = array(
    'label' => 'Release Note',
    'weight' => '3',
    'children' => array(
      0 => 'group_over_rn',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Release Note',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-release-note field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_release_note|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_release_note|node|support|form';
  $field_group->group_name = 'group_release_note';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Release Note',
    'weight' => '16',
    'children' => array(
      0 => 'group_rn_paleoscan',
      1 => 'group_rn_datalink',
      2 => 'group_rn_api',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-release-note field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_release_note|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rn_api|node|support|default';
  $field_group->group_name = 'group_rn_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_over_rn';
  $field_group->data = array(
    'label' => 'group rn api',
    'weight' => '23',
    'children' => array(
      0 => 'field_api_release_note',
      1 => 'field_user_guide_api_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group rn api',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-rn-api field-group-div col-md-4 bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_rn_api|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rn_api|node|support|form';
  $field_group->group_name = 'group_rn_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_release_note';
  $field_group->data = array(
    'label' => 'API',
    'weight' => '18',
    'children' => array(
      0 => 'field_api_release_note',
      1 => 'field_user_guide_api_col2',
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
        'classes' => 'group-rn-api field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_rn_api|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rn_datalink|node|support|default';
  $field_group->group_name = 'group_rn_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_over_rn';
  $field_group->data = array(
    'label' => 'group rn datalink',
    'weight' => '22',
    'children' => array(
      0 => 'field_datalink_release_note',
      1 => 'field_user_guide_datalink_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group rn datalink',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-rn-datalink field-group-div col-md-4 bg-gris-extrement-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_rn_datalink|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rn_datalink|node|support|form';
  $field_group->group_name = 'group_rn_datalink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_release_note';
  $field_group->data = array(
    'label' => 'Datalink',
    'weight' => '17',
    'children' => array(
      0 => 'field_datalink_release_note',
      1 => 'field_user_guide_datalink_col2',
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
        'classes' => 'group-rn-datalink field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_rn_datalink|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rn_paleoscan|node|support|default';
  $field_group->group_name = 'group_rn_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_over_rn';
  $field_group->data = array(
    'label' => 'group rn paleoscan',
    'weight' => '21',
    'children' => array(
      0 => 'field_release_notes',
      1 => 'field_user_guide_rn_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group rn paleoscan',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-rn-paleoscan field-group-div col-md-4 bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_rn_paleoscan|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rn_paleoscan|node|support|form';
  $field_group->group_name = 'group_rn_paleoscan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_release_note';
  $field_group->data = array(
    'label' => 'Paleoscan',
    'weight' => '16',
    'children' => array(
      0 => 'field_release_notes',
      1 => 'field_user_guide_rn_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Paleoscan',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-rn-paleoscan field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_rn_paleoscan|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_set_up|node|support|form';
  $field_group->group_name = 'group_set_up';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Set up',
    'weight' => '19',
    'children' => array(
      0 => 'field_text_set_up',
      1 => 'field_set_up_col1',
      2 => 'field_set_up_col_2',
      3 => 'field_set_up_col_3',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-set-up field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_set_up|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_setup|node|support|default';
  $field_group->group_name = 'group_setup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_global_col_1';
  $field_group->data = array(
    'label' => 'Set Up',
    'weight' => '57',
    'children' => array(
      0 => 'field_text_set_up',
      1 => 'group_cols_setup',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Set Up',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-setup field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_setup|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|support|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '5',
    'children' => array(
      0 => 'group_help',
      1 => 'group_training_coc',
      2 => 'group_videos',
      3 => 'group_publications',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_coc|node|support|form';
  $field_group->group_name = 'group_training_coc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Training',
    'weight' => '16',
    'children' => array(
      0 => 'field_support_tutorial',
      1 => 'field_presentation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Training',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-training-coc field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_training_coc|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_col1|node|support|default';
  $field_group->group_name = 'group_training_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_over_training';
  $field_group->data = array(
    'label' => 'group training col1',
    'weight' => '46',
    'children' => array(
      0 => 'group_tuto_col1',
      1 => 'group_tuto_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group training col1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-col1 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_training_col1|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_doc|node|support|default';
  $field_group->group_name = 'group_training_doc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Training',
    'weight' => '1',
    'children' => array(
      0 => 'group_over_training',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Training',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-doc field-group-fieldset',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_training_doc|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tuto_col1|node|support|default';
  $field_group->group_name = 'group_tuto_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_training_col1';
  $field_group->data = array(
    'label' => 'Tutorial',
    'weight' => '47',
    'children' => array(
      0 => 'field_support_tutorial',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tutorial',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tuto-col1 field-group-div col-md-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tuto_col1|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tuto_col2|node|support|default';
  $field_group->group_name = 'group_tuto_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_training_col1';
  $field_group->data = array(
    'label' => 'Presentation',
    'weight' => '48',
    'children' => array(
      0 => 'field_presentation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Presentation',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tuto-col2 field-group-div col-md4',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tuto_col2|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_guide_decision|node|support|default';
  $field_group->group_name = 'group_user_guide_decision';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_datalink';
  $field_group->data = array(
    'label' => 'group user guide decision',
    'weight' => '26',
    'children' => array(
      0 => 'field_support_decision_space',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group user guide decision',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-guide-decision field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_guide_decision|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_guide_over|node|support|default';
  $field_group->group_name = 'group_user_guide_over';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_guide';
  $field_group->data = array(
    'label' => 'group user guide over',
    'weight' => '24',
    'children' => array(
      0 => 'group_datalink',
      1 => 'group_api',
      2 => 'group_paleoscan',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group user guide over',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-guide-over field-group-div row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_guide_over|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_guide_petrel|node|support|default';
  $field_group->group_name = 'group_user_guide_petrel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_datalink';
  $field_group->data = array(
    'label' => 'group user guide petrel',
    'weight' => '25',
    'children' => array(
      0 => 'field_support_petrel_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group user guide petrel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-guide-petrel field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_guide_petrel|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_guide|field_collection_item|field_help_user_guide_paleoscan|default';
  $field_group->group_name = 'group_user_guide';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_help_user_guide_paleoscan';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User\'s guide',
    'weight' => '0',
    'children' => array(
      0 => 'field_file_user_guide',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User\'s guide',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-guide field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h5',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_guide|field_collection_item|field_help_user_guide_paleoscan|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_guide|node|support|default';
  $field_group->group_name = 'group_user_guide';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_help_files';
  $field_group->data = array(
    'label' => 'User\'s guide',
    'weight' => '2',
    'children' => array(
      0 => 'group_user_guide_over',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User\'s guide',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-guide field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h4',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_guide|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_guide|node|support|form';
  $field_group->group_name = 'group_user_guide';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_help';
  $field_group->data = array(
    'label' => 'User\'s guide',
    'weight' => '7',
    'children' => array(
      0 => 'group_paleoscan',
      1 => 'group_datalink',
      2 => 'group_api',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-user-guide field-group-accordion',
      ),
    ),
  );
  $export['group_user_guide|node|support|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_wrapper|node|support|default';
  $field_group->group_name = 'group_video_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group video',
    'weight' => '2',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group video',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-video-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_video_wrapper|node|support|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_videos|node|support|form';
  $field_group->group_name = 'group_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'support';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Videos',
    'weight' => '18',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Videos',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-videos field-group-htab',
        'description' => '<a href="/videos-ranking" target="_blank">Videos ranking</a><br>
<a href="/node/add/video" target="_blank">Create new video</a><br>
<a href="/admin/content" target="_blank">View all videos</a>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_videos|node|support|form'] = $field_group;

  return $export;
}
