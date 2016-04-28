<?php
/**
 * @file
 * feature_coop_user_eliis.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_coop_user_eliis_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 6,
  );

  // Exported role: contact.
  $roles['contact'] = array(
    'name' => 'contact',
    'weight' => 5,
  );

  // Exported role: evaluation user.
  $roles['evaluation user'] = array(
    'name' => 'evaluation user',
    'weight' => 2,
  );

  // Exported role: licensed user.
  $roles['licensed user'] = array(
    'name' => 'licensed user',
    'weight' => 3,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 4,
  );

  return $roles;
}
