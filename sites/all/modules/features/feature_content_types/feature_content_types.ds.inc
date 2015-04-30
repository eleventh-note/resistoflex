<?php
/**
 * @file
 * feature_content_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_content_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_client|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_client';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ct_client|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_product|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ct_product|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_product|view_mode_project';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_product';
  $ds_fieldsetting->view_mode = 'view_mode_project';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_product_tout_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|ct_product|view_mode_project'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_project|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_project';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ct_project|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_project|view_mode_slide';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_project';
  $ds_fieldsetting->view_mode = 'view_mode_slide';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_slide_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|ct_project|view_mode_slide'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_service|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_service';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ct_service|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_service|view_mode_project';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_service';
  $ds_fieldsetting->view_mode = 'view_mode_project';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_service_tout_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|ct_service|view_mode_project'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_client|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_client';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-client_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'logo' => array(
        0 => 'field_client_logo',
      ),
      'title' => array(
        1 => 'title',
      ),
      'url' => array(
        2 => 'field_client_url',
      ),
      'description' => array(
        3 => 'field_client_description',
      ),
      'is_featured' => array(
        4 => 'field_client_is_featured',
      ),
    ),
    'fields' => array(
      'field_client_logo' => 'logo',
      'title' => 'title',
      'field_client_url' => 'url',
      'field_client_description' => 'description',
      'field_client_is_featured' => 'is_featured',
    ),
    'classes' => array(),
    'wrappers' => array(
      'logo' => 'div',
      'title' => 'div',
      'url' => 'div',
      'description' => 'div',
      'is_featured' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_client|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_client|view_mode_project';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_client';
  $ds_layout->view_mode = 'view_mode_project';
  $ds_layout->layout = 'panels-project_client_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'logo' => array(
        0 => 'field_client_logo',
      ),
    ),
    'fields' => array(
      'field_client_logo' => 'logo',
    ),
    'classes' => array(),
    'wrappers' => array(
      'logo' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_client|view_mode_project'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_product|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-product_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'title' => array(
        0 => 'title',
      ),
      'code' => array(
        1 => 'field_product_code',
      ),
      'description' => array(
        2 => 'field_product_description',
      ),
      'photo' => array(
        3 => 'field_product_photos',
      ),
      'is_featured' => array(
        4 => 'field_product_is_featured',
      ),
      'attachment' => array(
        5 => 'field_product_attachment',
      ),
    ),
    'fields' => array(
      'title' => 'title',
      'field_product_code' => 'code',
      'field_product_description' => 'description',
      'field_product_photos' => 'photo',
      'field_product_is_featured' => 'is_featured',
      'field_product_attachment' => 'attachment',
    ),
    'classes' => array(),
    'wrappers' => array(
      'title' => 'div',
      'code' => 'div',
      'photo' => 'div',
      'description' => 'div',
      'is_featured' => 'div',
      'attachment' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_product|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_product|view_mode_project';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_product';
  $ds_layout->view_mode = 'view_mode_project';
  $ds_layout->layout = 'panels-related_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'photo' => array(
        0 => 'field_product_tout_image',
      ),
      'title' => array(
        1 => 'title',
      ),
      'description' => array(
        2 => 'field_product_tout_description',
      ),
    ),
    'fields' => array(
      'field_product_tout_image' => 'photo',
      'title' => 'title',
      'field_product_tout_description' => 'description',
    ),
    'classes' => array(),
    'wrappers' => array(
      'photo' => 'div',
      'title' => 'div',
      'description' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_product|view_mode_project'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-project_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'code' => array(
        0 => 'field_project_code',
      ),
      'title' => array(
        1 => 'title',
      ),
      'description' => array(
        2 => 'field_project_description',
      ),
      'photo' => array(
        3 => 'field_project_photos',
      ),
      'is_featured' => array(
        4 => 'field_project_is_featured',
      ),
      'client' => array(
        5 => 'field_project_client',
      ),
      'location' => array(
        6 => 'field_project_location',
      ),
      'used_products' => array(
        7 => 'field_project_products',
      ),
      'availed_services' => array(
        8 => 'field_project_services',
      ),
    ),
    'fields' => array(
      'field_project_code' => 'code',
      'title' => 'title',
      'field_project_description' => 'description',
      'field_project_photos' => 'photo',
      'field_project_is_featured' => 'is_featured',
      'field_project_client' => 'client',
      'field_project_location' => 'location',
      'field_project_products' => 'used_products',
      'field_project_services' => 'availed_services',
    ),
    'classes' => array(),
    'wrappers' => array(
      'title' => 'div',
      'code' => 'div',
      'description' => 'div',
      'client' => 'div',
      'location' => 'div',
      'photo' => 'div',
      'used_products' => 'div',
      'availed_services' => 'div',
      'is_featured' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_project|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_project|view_mode_slide';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_project';
  $ds_layout->view_mode = 'view_mode_slide';
  $ds_layout->layout = 'panels-project_slide_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'title' => array(
        0 => 'title',
      ),
      'slide_image' => array(
        1 => 'field_slide_image',
      ),
      'slide_description' => array(
        2 => 'field_slide_description',
      ),
    ),
    'fields' => array(
      'title' => 'title',
      'field_slide_image' => 'slide_image',
      'field_slide_description' => 'slide_description',
    ),
    'classes' => array(),
    'wrappers' => array(
      'title' => 'div',
      'slide_image' => 'div',
      'slide_description' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_project|view_mode_slide'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_service|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_service';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-service_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'title' => array(
        0 => 'title',
      ),
      'code' => array(
        1 => 'field_service_code',
      ),
      'description' => array(
        2 => 'field_service_description',
      ),
      'photo' => array(
        3 => 'field_service_photos',
      ),
      'is_featured' => array(
        4 => 'field_service_is_featured',
      ),
      'attachment' => array(
        5 => 'field_service_attachment',
      ),
    ),
    'fields' => array(
      'title' => 'title',
      'field_service_code' => 'code',
      'field_service_description' => 'description',
      'field_service_photos' => 'photo',
      'field_service_is_featured' => 'is_featured',
      'field_service_attachment' => 'attachment',
    ),
    'classes' => array(),
    'wrappers' => array(
      'title' => 'div',
      'code' => 'div',
      'photo' => 'div',
      'description' => 'div',
      'is_featured' => 'div',
      'attachment' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_service|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_service|view_mode_project';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_service';
  $ds_layout->view_mode = 'view_mode_project';
  $ds_layout->layout = 'panels-related_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'title' => array(
        0 => 'title',
      ),
      'photo' => array(
        1 => 'field_service_tout_image',
      ),
      'description' => array(
        2 => 'field_service_tout_description',
      ),
    ),
    'fields' => array(
      'title' => 'title',
      'field_service_tout_image' => 'photo',
      'field_service_tout_description' => 'description',
    ),
    'classes' => array(),
    'wrappers' => array(
      'photo' => 'div',
      'title' => 'div',
      'description' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_service|view_mode_project'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_content_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'view_mode_project';
  $ds_view_mode->label = 'Project';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['view_mode_project'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'view_mode_slide';
  $ds_view_mode->label = 'Slide';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['view_mode_slide'] = $ds_view_mode;

  return $export;
}
