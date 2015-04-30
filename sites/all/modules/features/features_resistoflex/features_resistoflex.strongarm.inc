<?php
/**
 * @file
 * features_resistoflex.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_resistoflex_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_image_wrap';
  $strongarm->value = 1;
  $export['borealis_image_wrap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_responsive_builds';
  $strongarm->value = array(
    'respondsmall' => 250,
    'respondmedium' => 437.5,
    'respondlarge' => 765.625,
    'respondxl' => 1339.84375,
    'respondxl2' => 2344.7265625,
    'respondxl3' => 4103.271484375,
    'respondxl4' => 7180.72509765625,
  );
  $export['borealis_responsive_builds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_ri_children';
  $strongarm->value = array(
    0 => 'image_style_full_width',
  );
  $export['borealis_ri_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_ri_hidpi';
  $strongarm->value = '1.75';
  $export['borealis_ri_hidpi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_ri_image_wrap';
  $strongarm->value = 1;
  $export['borealis_ri_image_wrap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_ri_lazyload';
  $strongarm->value = '1';
  $export['borealis_ri_lazyload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_ri_min_size';
  $strongarm->value = '250';
  $export['borealis_ri_min_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borealis_ri_parents';
  $strongarm->value = array(
    'image_style_full_width' => array(
      'isid' => '4',
      'name' => 'image_style_full_width',
      'label' => 'Full Width',
      'module' => 'features_resistoflex',
      'storage' => 2,
      'effects' => array(
        7 => array(
          'label' => 'Manual crop',
          'help' => 'Crop a freely user-selected area.',
          'effect callback' => 'manualcrop_crop_effect',
          'dimensions callback' => 'image_resize_dimensions',
          'form callback' => 'manualcrop_crop_form',
          'summary theme' => 'manualcrop_crop_summary',
          'module' => 'manualcrop',
          'name' => 'manualcrop_crop',
          'data' => array(
            'width' => '800',
            'height' => '',
            'keepproportions' => 0,
            'style_name' => 'image_style_full_width',
          ),
          'ieid' => '7',
          'isid' => '4',
          'weight' => '0',
        ),
        8 => array(
          'label' => 'Scale',
          'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
          'effect callback' => 'image_scale_effect',
          'dimensions callback' => 'image_scale_dimensions',
          'form callback' => 'image_scale_form',
          'summary theme' => 'image_scale_summary',
          'module' => 'image',
          'name' => 'image_scale',
          'data' => array(
            'width' => '990',
            'height' => '',
            'upscale' => 1,
          ),
          'ieid' => '8',
          'isid' => '4',
          'weight' => '2',
        ),
      ),
    ),
  );
  $export['borealis_ri_parents'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 1;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'resistoflex';
  $export['theme_default'] = $strongarm;

  return $export;
}
