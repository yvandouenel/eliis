<?php
/**
 * @file
 * feature_coop_user_eliis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_coop_user_eliis_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
