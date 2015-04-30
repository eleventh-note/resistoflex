<?php
/**
 * @file
 * features_resistoflex.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_resistoflex_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function features_resistoflex_image_default_styles() {
  $styles = array();

  // Exported image style: image_style_full_width.
  $styles['image_style_full_width'] = array(
    'name' => 'image_style_full_width',
    'label' => 'Full Width',
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
          'width' => 800,
          'height' => '',
          'keepproportions' => 0,
          'style_name' => 'image_style_full_width',
        ),
        'weight' => 0,
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
          'width' => 990,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      11 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 960,
          'height' => 720,
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}
