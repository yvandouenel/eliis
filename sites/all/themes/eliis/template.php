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