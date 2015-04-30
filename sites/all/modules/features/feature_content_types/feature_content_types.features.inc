<?php
/**
 * @file
 * feature_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_content_types_node_info() {
  $items = array(
    'ct_client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => t('Create content for client information.'),
      'has_title' => '1',
      'title_label' => t('Client Name'),
      'help' => '',
    ),
    'ct_product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('Product information.'),
      'has_title' => '1',
      'title_label' => t('Product Name'),
      'help' => '',
    ),
    'ct_project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Create content for project information.'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
    'ct_service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('Create content for service information.'),
      'has_title' => '1',
      'title_label' => t('Service Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
