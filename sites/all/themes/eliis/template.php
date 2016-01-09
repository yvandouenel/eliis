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

/*function eliis_preprocess_field(&$vars) {

    if($vars['element']['#field_name'] == "field_sofware"){
        dpm("hello field_sofware");
        $vars['classes_array'][] = 'bobobo';
        $classes = &$vars['classes_array'];
        dpm($classes);
        $vars['classes_array'][] = 'bobobo';

    }
}*/
function eliis_preprocess_field(&$vars) {

    if($vars['element']['#field_name'] == "field_files_to_download"
    ){
        $fcs = array();
        foreach (element_children($vars['element']) as $key) {
            $fcs[] = array_pop($vars['element'][$key]['entity']['field_collection_item']);
        }
        // now you have all your fcs pulled out of that nasty array - cf http://dropbucket.org/node/764
        foreach ($fcs as $fc) {
            if (isset($fc['field_color_link_download']['#items'][0]['value']) &&
              $fc['field_color_link_download']['#items'][0]['value'] == 'red'){
                $vars['classes_array'][] = 'red-link-download';
            }else $vars['classes_array'][] = 'blue-link-download';
        }
    }
}