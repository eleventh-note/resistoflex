<?php
/**
 * @file
 * feature_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_ct_project-comment_body'
  $field_instances['comment-comment_node_ct_project-comment_body'] = array(
    'bundle' => 'comment_node_ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_ct_service-comment_body'
  $field_instances['comment-comment_node_ct_service-comment_body'] = array(
    'bundle' => 'comment_node_ct_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-ct_client-field_client_description'
  $field_instances['node-ct_client-field_client_description'] = array(
    'bundle' => 'ct_client',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_client_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ct_client-field_client_is_featured'
  $field_instances['node-ct_client-field_client_is_featured'] = array(
    'bundle' => 'ct_client',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_client_is_featured',
    'label' => 'Is Featured',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ct_client-field_client_logo'
  $field_instances['node-ct_client-field_client_logo'] = array(
    'bundle' => 'ct_client',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_client_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 'large',
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => '',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ct_client-field_client_url'
  $field_instances['node-ct_client-field_client_url'] = array(
    'bundle' => 'ct_client',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_client_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'urlwidget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ct_product-field_product_attachment'
  $field_instances['node-ct_product-field_product_attachment'] = array(
    'bundle' => 'ct_product',
    'deleted' => 0,
    'description' => 'Provide attachment that can be downloaded. PDF file is preferred.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_product_attachment',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'pdf txt zip',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '30 MB',
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ct_product-field_product_code'
  $field_instances['node-ct_product-field_product_code'] = array(
    'bundle' => 'ct_product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_product_code',
    'label' => 'Code',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ct_product-field_product_description'
  $field_instances['node-ct_product-field_product_description'] = array(
    'bundle' => 'ct_product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_product_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ct_product-field_product_is_featured'
  $field_instances['node-ct_product-field_product_is_featured'] = array(
    'bundle' => 'ct_product',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_product_is_featured',
    'label' => 'Is Featured',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-ct_product-field_product_photos'
  $field_instances['node-ct_product-field_product_photos'] = array(
    'bundle' => 'ct_product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_product_photos',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 'large',
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => '',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ct_product-field_product_tout_description'
  $field_instances['node-ct_product-field_product_tout_description'] = array(
    'bundle' => 'ct_product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_product_tout_description',
    'label' => 'Tout Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ct_product-field_product_tout_image'
  $field_instances['node-ct_product-field_product_tout_image'] = array(
    'bundle' => 'ct_product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'large',
          'semantic_field_format' => 0,
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_product_tout_image',
    'label' => 'Tout Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 'large',
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => '',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_client'
  $field_instances['node-ct_project-field_project_client'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'semantic_field_format' => '',
          'view_mode' => 'view_mode_project',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
          'semantic_field_format' => '',
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'view_mode_slide' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_client',
    'label' => 'Client',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_code'
  $field_instances['node-ct_project-field_project_code'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_code',
    'label' => 'Code',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_description'
  $field_instances['node-ct_project-field_project_description'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_is_featured'
  $field_instances['node-ct_project-field_project_is_featured'] = array(
    'bundle' => 'ct_project',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_is_featured',
    'label' => 'Is Featured',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_location'
  $field_instances['node-ct_project-field_project_location'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'view_mode_slide' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_photos'
  $field_instances['node-ct_project-field_project_photos'] = array(
    'bundle' => 'ct_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_photos',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'borealis_medium_respondlarge',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_products'
  $field_instances['node-ct_project-field_project_products'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'semantic_field_format' => '',
          'view_mode' => 'view_mode_project',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'semantic_field_format' => '',
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 6,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_products',
    'label' => 'Used Products',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_services'
  $field_instances['node-ct_project-field_project_services'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'semantic_field_format' => '',
          'view_mode' => 'view_mode_project',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'semantic_field_format' => '',
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 7,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_services',
    'label' => 'Availed Services',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_tout_description'
  $field_instances['node-ct_project-field_project_tout_description'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_tout_description',
    'label' => 'Tout Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_project_tout_image'
  $field_instances['node-ct_project-field_project_tout_image'] = array(
    'bundle' => 'ct_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_project_tout_image',
    'label' => 'Tout Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 'large',
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_slide_description'
  $field_instances['node-ct_project-field_slide_description'] = array(
    'bundle' => 'ct_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_slide' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_slide_description',
    'label' => 'Slide Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ct_project-field_slide_image'
  $field_instances['node-ct_project-field_slide_image'] = array(
    'bundle' => 'ct_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_slide' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => '',
          'semantic_field_format' => 0,
        ),
        'type' => 'image',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_slide_image',
    'label' => 'Slide Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '960x720',
      'semantic_field_format' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 'borealis_image_style_full_width_respondxl',
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'large',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-ct_service-field_service_attachment'
  $field_instances['node-ct_service-field_service_attachment'] = array(
    'bundle' => 'ct_service',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_service_attachment',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'pdf txt zip',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ct_service-field_service_code'
  $field_instances['node-ct_service-field_service_code'] = array(
    'bundle' => 'ct_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_service_code',
    'label' => 'Code',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ct_service-field_service_description'
  $field_instances['node-ct_service-field_service_description'] = array(
    'bundle' => 'ct_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_service_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ct_service-field_service_is_featured'
  $field_instances['node-ct_service-field_service_is_featured'] = array(
    'bundle' => 'ct_service',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_service_is_featured',
    'label' => 'Is Featured',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-ct_service-field_service_photos'
  $field_instances['node-ct_service-field_service_photos'] = array(
    'bundle' => 'ct_service',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'colorbox',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_service_photos',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 'large',
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => '',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ct_service-field_service_tout_description'
  $field_instances['node-ct_service-field_service_tout_description'] = array(
    'bundle' => 'ct_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_service_tout_description',
    'label' => 'Tout Description',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ct_service-field_service_tout_image'
  $field_instances['node-ct_service-field_service_tout_image'] = array(
    'bundle' => 'ct_service',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_project' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'large',
          'semantic_field_format' => 0,
        ),
        'type' => 'image',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_service_tout_image',
    'label' => 'Tout Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 0,
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'borealis_image_style_full_width_respondlarge' => 0,
          'borealis_image_style_full_width_respondmedium' => 0,
          'borealis_image_style_full_width_respondsmall' => 0,
          'borealis_image_style_full_width_respondxl' => 0,
          'borealis_image_style_full_width_respondxl2' => 0,
          'borealis_image_style_full_width_respondxl3' => 0,
          'borealis_image_style_full_width_respondxl4' => 0,
          'image_style_full_width' => 0,
          'large' => 'large',
          'medium' => 0,
          'thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => '',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachment');
  t('Availed Services');
  t('Client');
  t('Code');
  t('Comment');
  t('Description');
  t('Is Featured');
  t('Location');
  t('Logo');
  t('Photo');
  t('Provide attachment that can be downloaded. PDF file is preferred.');
  t('Slide Description');
  t('Slide Image');
  t('Tout Description');
  t('Tout Image');
  t('URL');
  t('Used Products');

  return $field_instances;
}
