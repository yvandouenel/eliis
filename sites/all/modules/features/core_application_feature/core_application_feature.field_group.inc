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
  $field_group->identifier = 'group_3_columns|node|add_on_module|form';
  $field_group->group_name = 'group_3_columns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'add_on_module';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '3 columns',
    'weight' => '9',
    'children' => array(
      0 => 'field_col_1_title_gallery_text',
      1 => 'field_col_2_title_gallery_text',
      2 => 'field_col_3_title_gallery_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-3-columns field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_3_columns|node|add_on_module|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_on_menu|node|paleoscan_overview|default';
  $field_group->group_name = 'group_add_on_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paleoscan_overview';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_add_on';
  $field_group->data = array(
    'label' => 'Add-on Modules',
    'weight' => '16',
    'children' => array(
      0 => 'extra_field_menu_addon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Add-on Modules',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-add-on-menu field-group-div glyphicon-h3-a icon-right-open-h3-a',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_add_on_menu|node|paleoscan_overview|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_on|node|paleoscan_overview|default';
  $field_group->group_name = 'group_add_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paleoscan_overview';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_introductions';
  $field_group->data = array(
    'label' => 'group add-on',
    'weight' => '11',
    'children' => array(
      0 => 'field_add_on_module_intro',
      1 => 'group_add_on_menu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group add-on',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-add-on field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_add_on|node|paleoscan_overview|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_3|node|add_on_module|teaser';
  $field_group->group_name = 'group_col_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'add_on_module';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group col 3',
    'weight' => '5',
    'children' => array(
      0 => 'field_col_1_title_gallery_text',
      1 => 'field_col_2_title_gallery_text',
      2 => 'field_col_3_title_gallery_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group col 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-3 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_col_3|node|add_on_module|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_application_menu|node|paleoscan_overview|default';
  $field_group->group_name = 'group_core_application_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paleoscan_overview';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_core_application';
  $field_group->data = array(
    'label' => 'Core Application',
    'weight' => '21',
    'children' => array(
      0 => 'extra_field_menu_core',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Core Application',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-core-application-menu field-group-div glyphicon-h3-a icon-right-open-h3-a',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_core_application_menu|node|paleoscan_overview|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_application|node|paleoscan_overview|default';
  $field_group->group_name = 'group_core_application';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paleoscan_overview';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_introductions';
  $field_group->data = array(
    'label' => 'group core application',
    'weight' => '10',
    'children' => array(
      0 => 'field_core_application_intro',
      1 => 'group_core_application_menu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group core application',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-core-application field-group-div  col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_core_application|node|paleoscan_overview|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_left_text_right|node|core_application_feature|form';
  $field_group->group_name = 'group_gallery_left_text_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'core_application_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_text_position';
  $field_group->data = array(
    'label' => 'Gallery left - Text right',
    'weight' => '5',
    'children' => array(
      0 => 'field_right_text',
      1 => 'field_left_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery-left-text-right field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_gallery_left_text_right|node|core_application_feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_introductions|node|paleoscan_overview|default';
  $field_group->group_name = 'group_introductions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paleoscan_overview';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group introductions',
    'weight' => '1',
    'children' => array(
      0 => 'group_core_application',
      1 => 'group_add_on',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group introductions',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-introductions field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_introductions|node|paleoscan_overview|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_text_right_gallery|node|add_on_module|form';
  $field_group->group_name = 'group_left_text_right_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'add_on_module';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Left text - right gallery',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-text-right-gallery field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_left_text_right_gallery|node|add_on_module|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menus_products|node|paleoscan_overview|form';
  $field_group->group_name = 'group_menus_products';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paleoscan_overview';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_menus_sofware';
  $field_group->data = array(
    'label' => 'Menus',
    'weight' => '47',
    'children' => array(
      0 => 'field_core_application_menu',
      1 => 'field_add_on_menu',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-menus-products field-group-tabs',
      ),
    ),
  );
  $export['group_menus_products|node|paleoscan_overview|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menus_sofware|node|paleoscan_overview|form';
  $field_group->group_name = 'group_menus_sofware';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paleoscan_overview';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Menus software',
    'weight' => '47',
    'children' => array(
      0 => 'group_menus_products',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-menus-sofware field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_menus_sofware|node|paleoscan_overview|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|add_on_module|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'add_on_module';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '4',
    'children' => array(
      0 => 'group_left_text_right_gallery',
      1 => 'group_3_columns',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|node|add_on_module|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_left_gallery_right|node|core_application_feature|form';
  $field_group->group_name = 'group_text_left_gallery_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'core_application_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_text_position';
  $field_group->data = array(
    'label' => 'Text left - Gallery right',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-text-left-gallery-right field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_text_left_gallery_right|node|core_application_feature|form'] = $field_group;

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
    'weight' => '4',
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
    'weight' => '0',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_position|node|core_application_feature|form';
  $field_group->group_name = 'group_text_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'core_application_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text position',
    'weight' => '3',
    'children' => array(
      0 => 'group_text_left_gallery_right',
      1 => 'group_gallery_left_text_right',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-text-position field-group-htabs',
      ),
    ),
  );
  $export['group_text_position|node|core_application_feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_right|node|core_application_feature|default';
  $field_group->group_name = 'group_text_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'core_application_feature';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group text right',
    'weight' => '1',
    'children' => array(
      0 => 'field_right_text',
      1 => 'field_left_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group text right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-right field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text_right|node|core_application_feature|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_right|node|core_application_feature|teaser';
  $field_group->group_name = 'group_text_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'core_application_feature';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group text right',
    'weight' => '3',
    'children' => array(
      0 => 'field_right_text',
      1 => 'field_left_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group text right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-right field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text_right|node|core_application_feature|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_intro|node|add_on_module|teaser';
  $field_group->group_name = 'group_title_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'add_on_module';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group title intro',
    'weight' => '1',
    'children' => array(
      0 => 'field_introduction_text',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group title intro',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-intro field-group-div col-md-10',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_intro|node|add_on_module|teaser'] = $field_group;

  return $export;
}
