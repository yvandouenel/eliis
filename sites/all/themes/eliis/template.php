<?php

/**
 * @file
 * template.php
 */
function eliis_preprocess_image(&$variables) {
    foreach (array('width', 'height') as $key) {

        unset($variables[$key]);
        unset($variables[$key]);
    }
}
function eliis_preprocess_html(&$vars, $hook) {
    if ($vars['user']) {
        foreach($vars['user']->roles as $key => $role){
            $role_class = 'role-' . drupal_clean_css_identifier($role);
            $vars['classes_array'][] = $role_class;
        }
    }
}