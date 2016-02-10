<?php
/**
 * @file
 * partners.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function partners_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Customers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1a9e7f0d-66cd-4b79-ade1-8093bdaf3277',
    'vocabulary_machine_name' => 'type_partenaire',
  );
  $terms[] = array(
    'name' => 'Partners',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ace312d2-97e7-4318-9d1b-919d4db6c9a8',
    'vocabulary_machine_name' => 'type_partenaire',
  );
  return $terms;
}
