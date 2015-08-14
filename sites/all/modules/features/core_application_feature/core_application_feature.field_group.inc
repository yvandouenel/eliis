<?php
/**
 * @file
 * core_application_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function core_application_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_left|node|add_on_module|teaser';
  $field_group->group_name = 'group_text_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'add_on_module';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group text left',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group text left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-left field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text_left|node|add_on_module|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_left|node|core_application_feature|default';
  $field_group->group_name = 'group_text_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'core_application_feature';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group text left',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group text left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-left field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text_left|node|core_application_feature|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_left|node|core_application_feature|teaser';
  $field_group->group_name = 'group_text_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'core_application_feature';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group text left ',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group text left ',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-left field-group-fieldset row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text_left|node|core_application_feature|teaser'] = $field_group;

  return $export;
}
