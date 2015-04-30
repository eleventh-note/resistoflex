<?php
/**
 * @file
 * feature_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_client_details|node|ct_client|form';
  $field_group->group_name = 'group_client_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_client';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Client Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_client_logo',
      1 => 'field_client_description',
      2 => 'field_client_is_featured',
      3 => 'field_client_url',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-client-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_client_details|node|ct_client|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_details|node|ct_product|form';
  $field_group->group_name = 'group_product_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_product_code',
      1 => 'field_product_description',
      2 => 'field_product_photos',
      3 => 'field_product_is_featured',
      4 => 'field_product_attachment',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Product Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-product-details field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_product_details|node|ct_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_tout|node|ct_product|form';
  $field_group->group_name = 'group_product_tout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tout Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_product_tout_image',
      1 => 'field_product_tout_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tout Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-product-tout field-group-tab',
        'description' => 'This will be displayed in product thumbnails.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_product_tout|node|ct_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|ct_project|form';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_project_code',
      1 => 'field_project_description',
      2 => 'field_project_photos',
      3 => 'field_project_is_featured',
      4 => 'field_project_location',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_details|node|ct_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_relations|node|ct_project|form';
  $field_group->group_name = 'group_project_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Relations',
    'weight' => '1',
    'children' => array(
      0 => 'field_project_client',
      1 => 'field_project_products',
      2 => 'field_project_services',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-relations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_relations|node|ct_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_slide|node|ct_project|form';
  $field_group->group_name = 'group_project_slide';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide',
    'weight' => '3',
    'children' => array(
      0 => 'field_slide_image',
      1 => 'field_slide_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-slide field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_slide|node|ct_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_tout|node|ct_project|form';
  $field_group->group_name = 'group_project_tout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tout Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_project_tout_image',
      1 => 'field_project_tout_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-tout field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_tout|node|ct_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_details|node|ct_service|form';
  $field_group->group_name = 'group_service_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_service_code',
      1 => 'field_service_description',
      2 => 'field_service_photos',
      3 => 'field_service_is_featured',
      4 => 'field_service_attachment',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_service_details|node|ct_service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_tout|node|ct_service|form';
  $field_group->group_name = 'group_service_tout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tout Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_service_tout_image',
      1 => 'field_service_tout_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-tout field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_service_tout|node|ct_service|form'] = $field_group;

  return $export;
}
