<?php
/**
 * @file
 * feature_eliis_support.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_eliis_support_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Well tie',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6017ea3e-23dd-4db4-8b3b-4d085c4f2e91',
    'vocabulary_machine_name' => 'video_type',
    'parent' => array(
      0 => 'b9240559-d778-4ed7-81fc-fed3ed09b896',
    ),
  );
  $terms[] = array(
    'name' => 'Data link',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '89da79b6-2111-453e-b674-7f575b4949ec',
    'vocabulary_machine_name' => 'video_type',
    'parent' => array(
      0 => 'b9240559-d778-4ed7-81fc-fed3ed09b896',
    ),
  );
  $terms[] = array(
    'name' => 'Add-on Modules',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b9240559-d778-4ed7-81fc-fed3ed09b896',
    'vocabulary_machine_name' => 'video_type',
  );
  $terms[] = array(
    'name' => 'Advanced interpretation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cbd44d2e-8ef9-4e4f-b5d1-8d4d1872c4f8',
    'vocabulary_machine_name' => 'video_type',
    'parent' => array(
      0 => 'b9240559-d778-4ed7-81fc-fed3ed09b896',
    ),
  );
  $terms[] = array(
    'name' => 'Properties modeling',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cf32654c-042d-40d7-a516-f447d809c102',
    'vocabulary_machine_name' => 'video_type',
    'parent' => array(
      0 => 'b9240559-d778-4ed7-81fc-fed3ed09b896',
    ),
  );
  $terms[] = array(
    'name' => 'Core Application',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fa63e38d-476a-4957-8e6e-e331b0cd533f',
    'vocabulary_machine_name' => 'video_type',
  );
  return $terms;
}
