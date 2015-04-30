<?php
/**
 * @file
 * feature_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_clients';
  $view->description = 'This contains the view for all clients.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'client-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_client_url']['id'] = 'field_client_url';
  $handler->display->display_options['fields']['field_client_url']['table'] = 'field_data_field_client_url';
  $handler->display->display_options['fields']['field_client_url']['field'] = 'field_client_url';
  $handler->display->display_options['fields']['field_client_url']['label'] = '';
  $handler->display->display_options['fields']['field_client_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_client_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_client_url']['element_default_classes'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_client_logo']['id'] = 'field_client_logo';
  $handler->display->display_options['fields']['field_client_logo']['table'] = 'field_data_field_client_logo';
  $handler->display->display_options['fields']['field_client_logo']['field'] = 'field_client_logo';
  $handler->display->display_options['fields']['field_client_logo']['label'] = '';
  $handler->display->display_options['fields']['field_client_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_client_logo']['alter']['path'] = '[field_client_url]';
  $handler->display->display_options['fields']['field_client_logo']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_client_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_client_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_client_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_logo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_client_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_client_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_logo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_client' => 'ct_client',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: All Clients */
  $handler = $view->new_display('block', 'All Clients', 'block');
  $handler->display->display_options['display_description'] = 'Display all clients.';
  $handler->display->display_options['block_description'] = 'All Clients';

  /* Display: Featured Clients */
  $handler = $view->new_display('block', 'Featured Clients', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Clients';
  $handler->display->display_options['display_description'] = 'Show only featured clients';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_client' => 'ct_client',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Is Featured (field_client_is_featured) */
  $handler->display->display_options['filters']['field_client_is_featured_value']['id'] = 'field_client_is_featured_value';
  $handler->display->display_options['filters']['field_client_is_featured_value']['table'] = 'field_data_field_client_is_featured';
  $handler->display->display_options['filters']['field_client_is_featured_value']['field'] = 'field_client_is_featured_value';
  $handler->display->display_options['filters']['field_client_is_featured_value']['value'] = array(
    1 => '1',
  );
  $export['view_clients'] = $view;

  $view = new view();
  $view->name = 'view_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'product-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_product_tout_image']['id'] = 'field_product_tout_image';
  $handler->display->display_options['fields']['field_product_tout_image']['table'] = 'field_data_field_product_tout_image';
  $handler->display->display_options['fields']['field_product_tout_image']['field'] = 'field_product_tout_image';
  $handler->display->display_options['fields']['field_product_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_tout_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_product_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_tout_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_product_tout_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_tout_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Tout Description */
  $handler->display->display_options['fields']['field_product_tout_description']['id'] = 'field_product_tout_description';
  $handler->display->display_options['fields']['field_product_tout_description']['table'] = 'field_data_field_product_tout_description';
  $handler->display->display_options['fields']['field_product_tout_description']['field'] = 'field_product_tout_description';
  $handler->display->display_options['fields']['field_product_tout_description']['label'] = '';
  $handler->display->display_options['fields']['field_product_tout_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_product_tout_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_tout_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_product_tout_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_product' => 'ct_product',
  );

  /* Display: All Products */
  $handler = $view->new_display('block', 'All Products', 'block');
  $handler->display->display_options['display_description'] = 'Displays all products.';

  /* Display: Featured Products */
  $handler = $view->new_display('block', 'Featured Products', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Products';
  $handler->display->display_options['display_description'] = 'Displays featured products only.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_product' => 'ct_product',
  );
  /* Filter criterion: Content: Is Featured (field_product_is_featured) */
  $handler->display->display_options['filters']['field_product_is_featured_value']['id'] = 'field_product_is_featured_value';
  $handler->display->display_options['filters']['field_product_is_featured_value']['table'] = 'field_data_field_product_is_featured';
  $handler->display->display_options['filters']['field_product_is_featured_value']['field'] = 'field_product_is_featured_value';
  $handler->display->display_options['filters']['field_product_is_featured_value']['value'] = array(
    1 => '1',
  );
  $export['view_products'] = $view;

  $view = new view();
  $view->name = 'view_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'project-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_project_tout_image']['id'] = 'field_project_tout_image';
  $handler->display->display_options['fields']['field_project_tout_image']['table'] = 'field_data_field_project_tout_image';
  $handler->display->display_options['fields']['field_project_tout_image']['field'] = 'field_project_tout_image';
  $handler->display->display_options['fields']['field_project_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_tout_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_tout_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_tout_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_tout_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Tout Description */
  $handler->display->display_options['fields']['field_project_tout_description']['id'] = 'field_project_tout_description';
  $handler->display->display_options['fields']['field_project_tout_description']['table'] = 'field_data_field_project_tout_description';
  $handler->display->display_options['fields']['field_project_tout_description']['field'] = 'field_project_tout_description';
  $handler->display->display_options['fields']['field_project_tout_description']['label'] = '';
  $handler->display->display_options['fields']['field_project_tout_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_project_tout_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_tout_description']['element_default_classes'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_project' => 'ct_project',
  );

  /* Display: All Projects */
  $handler = $view->new_display('block', 'All Projects', 'block');
  $handler->display->display_options['display_description'] = 'Display all projects';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: Featured Project Slides */
  $handler = $view->new_display('block', 'Featured Project Slides', 'view_block_featured_projects_slides');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Projects';
  $handler->display->display_options['display_description'] = 'Displays the project slides';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'project-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Slide Description */
  $handler->display->display_options['fields']['field_slide_description']['id'] = 'field_slide_description';
  $handler->display->display_options['fields']['field_slide_description']['table'] = 'field_data_field_slide_description';
  $handler->display->display_options['fields']['field_slide_description']['field'] = 'field_slide_description';
  $handler->display->display_options['fields']['field_slide_description']['label'] = '';
  $handler->display->display_options['fields']['field_slide_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_slide_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_project' => 'ct_project',
  );
  /* Filter criterion: Content: Is Featured (field_project_is_featured) */
  $handler->display->display_options['filters']['field_project_is_featured_value']['id'] = 'field_project_is_featured_value';
  $handler->display->display_options['filters']['field_project_is_featured_value']['table'] = 'field_data_field_project_is_featured';
  $handler->display->display_options['filters']['field_project_is_featured_value']['field'] = 'field_project_is_featured_value';
  $handler->display->display_options['filters']['field_project_is_featured_value']['value'] = array(
    1 => '1',
  );
  $export['view_projects'] = $view;

  $view = new view();
  $view->name = 'views_services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'service-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_service_tout_image']['id'] = 'field_service_tout_image';
  $handler->display->display_options['fields']['field_service_tout_image']['table'] = 'field_data_field_service_tout_image';
  $handler->display->display_options['fields']['field_service_tout_image']['field'] = 'field_service_tout_image';
  $handler->display->display_options['fields']['field_service_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_service_tout_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_service_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_tout_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_service_tout_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_tout_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Tout Description */
  $handler->display->display_options['fields']['field_service_tout_description']['id'] = 'field_service_tout_description';
  $handler->display->display_options['fields']['field_service_tout_description']['table'] = 'field_data_field_service_tout_description';
  $handler->display->display_options['fields']['field_service_tout_description']['field'] = 'field_service_tout_description';
  $handler->display->display_options['fields']['field_service_tout_description']['label'] = '';
  $handler->display->display_options['fields']['field_service_tout_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_service_tout_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_tout_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_service_tout_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_service' => 'ct_service',
  );

  /* Display: All Services */
  $handler = $view->new_display('block', 'All Services', 'block');
  $handler->display->display_options['display_description'] = 'Get all services.';

  /* Display: Featured Services */
  $handler = $view->new_display('block', 'Featured Services', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Services';
  $handler->display->display_options['display_description'] = 'Displays featured services only.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_service' => 'ct_service',
  );
  /* Filter criterion: Content: Is Featured (field_service_is_featured) */
  $handler->display->display_options['filters']['field_service_is_featured_value']['id'] = 'field_service_is_featured_value';
  $handler->display->display_options['filters']['field_service_is_featured_value']['table'] = 'field_data_field_service_is_featured';
  $handler->display->display_options['filters']['field_service_is_featured_value']['field'] = 'field_service_is_featured_value';
  $handler->display->display_options['filters']['field_service_is_featured_value']['value'] = array(
    1 => '1',
  );
  $export['views_services'] = $view;

  return $export;
}
