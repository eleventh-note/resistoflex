<?php
/**
 * @file
 * feature_landing_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function feature_landing_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__default_layout';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default Layout',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default_layout',
  );
  $display = new panels_display();
  $display->layout = 'default_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'main_content' => NULL,
      'footer' => NULL,
      'navbar' => NULL,
      'header_navbar' => NULL,
      'footer_navbar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e3a95195-5db2-423e-8de2-413c3912d17c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f559752-bc4b-4aba-a3d1-db7324630607';
    $pane->panel = 'footer_navbar';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f559752-bc4b-4aba-a3d1-db7324630607';
    $display->content['new-8f559752-bc4b-4aba-a3d1-db7324630607'] = $pane;
    $display->panels['footer_navbar'][0] = 'new-8f559752-bc4b-4aba-a3d1-db7324630607';
    $pane = new stdClass();
    $pane->pid = 'new-d658068a-8195-4872-a51b-9285bd9383e6';
    $pane->panel = 'header_navbar';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd658068a-8195-4872-a51b-9285bd9383e6';
    $display->content['new-d658068a-8195-4872-a51b-9285bd9383e6'] = $pane;
    $display->panels['header_navbar'][0] = 'new-d658068a-8195-4872-a51b-9285bd9383e6';
    $pane = new stdClass();
    $pane->pid = 'new-5e47cd2a-7108-442b-a3dd-595569b00b01';
    $pane->panel = 'main_content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5e47cd2a-7108-442b-a3dd-595569b00b01';
    $display->content['new-5e47cd2a-7108-442b-a3dd-595569b00b01'] = $pane;
    $display->panels['main_content'][0] = 'new-5e47cd2a-7108-442b-a3dd-595569b00b01';
    $pane = new stdClass();
    $pane->pid = 'new-7b98e0d9-72b4-4125-9701-0a582ae83e1a';
    $pane->panel = 'main_content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b98e0d9-72b4-4125-9701-0a582ae83e1a';
    $display->content['new-7b98e0d9-72b4-4125-9701-0a582ae83e1a'] = $pane;
    $display->panels['main_content'][1] = 'new-7b98e0d9-72b4-4125-9701-0a582ae83e1a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__default_layout'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_landing_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lp_home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lp_home_page__panel_context_3d026e4a-7bb3-494b-8afd-e0e2a986838c';
  $handler->task = 'page';
  $handler->subtask = 'lp_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'home_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured_projects' => NULL,
      'featured_services' => NULL,
      'featured_products' => NULL,
      'featured_clients' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b3e704a8-a4e9-42bd-8baa-8a60a2270d35';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b701e978-2f00-4b62-ac6d-9a288326838e';
    $pane->panel = 'featured_clients';
    $pane->type = 'views';
    $pane->subtype = 'view_clients';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b701e978-2f00-4b62-ac6d-9a288326838e';
    $display->content['new-b701e978-2f00-4b62-ac6d-9a288326838e'] = $pane;
    $display->panels['featured_clients'][0] = 'new-b701e978-2f00-4b62-ac6d-9a288326838e';
    $pane = new stdClass();
    $pane->pid = 'new-3e8487db-b292-4ff2-b704-137c008d0f3d';
    $pane->panel = 'featured_products';
    $pane->type = 'views';
    $pane->subtype = 'view_products';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e8487db-b292-4ff2-b704-137c008d0f3d';
    $display->content['new-3e8487db-b292-4ff2-b704-137c008d0f3d'] = $pane;
    $display->panels['featured_products'][0] = 'new-3e8487db-b292-4ff2-b704-137c008d0f3d';
    $pane = new stdClass();
    $pane->pid = 'new-83040c0c-e065-4acf-9f63-f24504718dcf';
    $pane->panel = 'featured_services';
    $pane->type = 'views';
    $pane->subtype = 'views_services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '83040c0c-e065-4acf-9f63-f24504718dcf';
    $display->content['new-83040c0c-e065-4acf-9f63-f24504718dcf'] = $pane;
    $display->panels['featured_services'][0] = 'new-83040c0c-e065-4acf-9f63-f24504718dcf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-83040c0c-e065-4acf-9f63-f24504718dcf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lp_home_page'] = $page;

  return $pages;

}
