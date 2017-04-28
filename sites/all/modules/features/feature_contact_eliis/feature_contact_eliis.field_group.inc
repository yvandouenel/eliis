<?php
/**
 * @file
 * feature_contact_eliis.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_contact_eliis_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_countries|node|contact|full';
  $field_group->group_name = 'group_countries';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group countries',
    'weight' => '0',
    'children' => array(
      0 => 'field_contact_france',
      1 => 'field_contact_usa',
      2 => 'field_contact_china',
      3 => 'field_australia',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group countries',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-countries field-group-div row row-eq-height  bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_countries|node|contact|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first|node|contact|form';
  $field_group->group_name = 'group_first';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizon';
  $field_group->data = array(
    'label' => 'First row',
    'weight' => '5',
    'children' => array(
      0 => 'field_contact_france',
      1 => 'field_contact_usa',
      2 => 'field_contact_china',
      3 => 'field_australia',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'First row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-first field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_first|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizon|node|contact|form';
  $field_group->group_name = 'group_horizon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal',
    'weight' => '4',
    'children' => array(
      0 => 'group_first',
      1 => 'group_second',
      2 => 'group_third',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_horizon|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|contact|full';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group link',
    'weight' => '23',
    'children' => array(
      0 => 'field_contact_link_commercial',
      1 => 'field_contact_training_con',
      2 => 'field_contact_link_support',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group link',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link field-group-div row row-eq-height  bg-gris-tres-tres-clair',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|node|contact|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_over_support|node|contact|full';
  $field_group->group_name = 'group_over_support';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_support';
  $field_group->data = array(
    'label' => 'group support',
    'weight' => '18',
    'children' => array(
      0 => 'field_contact_client_support',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group support',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-over-support field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_over_support|node|contact|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second|node|contact|form';
  $field_group->group_name = 'group_second';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizon';
  $field_group->data = array(
    'label' => 'Second row',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_client_support',
      1 => 'field_contact_social_links',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-second field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_second|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socail|node|contact|full';
  $field_group->group_name = 'group_socail';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_support';
  $field_group->data = array(
    'label' => 'group social',
    'weight' => '19',
    'children' => array(
      0 => 'field_contact_social_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group social',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-socail field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_socail|node|contact|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_support|node|contact|full';
  $field_group->group_name = 'group_support';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group suppor',
    'weight' => '1',
    'children' => array(
      0 => 'group_over_support',
      1 => 'group_socail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group suppor',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-support field-group-div  row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_support|node|contact|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third|node|contact|form';
  $field_group->group_name = 'group_third';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizon';
  $field_group->data = array(
    'label' => 'Third row',
    'weight' => '7',
    'children' => array(
      0 => 'field_contact_link_commercial',
      1 => 'field_contact_training_con',
      2 => 'field_contact_link_support',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-third field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_third|node|contact|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('First row');
  t('Horizontal');
  t('Second row');
  t('Third row');
  t('group countries');
  t('group link');
  t('group social');
  t('group suppor');
  t('group support');

  return $field_groups;
}
