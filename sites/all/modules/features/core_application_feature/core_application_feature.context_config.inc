<?php
/**
 * @file
 * core_application_feature.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function core_application_feature_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'product_representation';
  $context_config->transcoder = array(
    'file' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-medium_image_landscape',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'file' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'galleria',
      'settings' => array(
        'width' => '100%',
        'height' => '300px',
        'fullscreen_link' => 0,
        'thumb_style' => 'thumbnail',
        'normal_style' => 'medium_image_landscape',
        'big_style' => 'original',
        'theme' => 'classic',
        'options' => ' {"showInfo": true,"idleMode": false,"lightbox": true, "responsive":true}',
      ),
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['product_representation'] = $context_config;

  return $export;
}
