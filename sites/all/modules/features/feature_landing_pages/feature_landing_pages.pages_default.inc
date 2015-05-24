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
  $page->name = 'lp_clients';
  $page->task = 'page';
  $page->admin_title = 'Clients';
  $page->admin_description = '';
  $page->path = 'clients';
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
  $handler->name = 'page_lp_clients__panel_context_86dc3d23-19fa-424c-9c57-fa12633e28da';
  $handler->task = 'page';
  $handler->subtask = 'lp_clients';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Clients',
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
  $display->layout = 'client_landing_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'all_clients' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Clients';
  $display->uuid = '202c11bc-0ecd-4b2e-83ec-ac034e9da147';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-41a2674d-a0e5-44dd-b8b7-26c02b4d36ee';
    $pane->panel = 'all_clients';
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
      'display' => 'block',
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
    $pane->uuid = '41a2674d-a0e5-44dd-b8b7-26c02b4d36ee';
    $display->content['new-41a2674d-a0e5-44dd-b8b7-26c02b4d36ee'] = $pane;
    $display->panels['all_clients'][0] = 'new-41a2674d-a0e5-44dd-b8b7-26c02b4d36ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-41a2674d-a0e5-44dd-b8b7-26c02b4d36ee';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lp_clients'] = $page;

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
    $pane->pid = 'new-18d77c19-9be3-4413-9ce4-7f1d0aa9ea2a';
    $pane->panel = 'featured_projects';
    $pane->type = 'views';
    $pane->subtype = 'view_projects';
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
      'display' => 'view_block_featured_projects_slides',
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
    $pane->uuid = '18d77c19-9be3-4413-9ce4-7f1d0aa9ea2a';
    $display->content['new-18d77c19-9be3-4413-9ce4-7f1d0aa9ea2a'] = $pane;
    $display->panels['featured_projects'][0] = 'new-18d77c19-9be3-4413-9ce4-7f1d0aa9ea2a';
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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lp_products';
  $page->task = 'page';
  $page->admin_title = 'Products';
  $page->admin_description = '';
  $page->path = 'products';
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
  $handler->name = 'page_lp_products__panel_context_4a08fc01-a218-4e92-abbd-538806f70d0a';
  $handler->task = 'page';
  $handler->subtask = 'lp_products';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'product_landing_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'all_products' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = '3e39f1d5-4565-4302-ab2a-a47df1f6b64d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18f1bf30-dcae-48b9-a3a4-63e420356658';
    $pane->panel = 'all_products';
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
      'display' => 'block',
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
    $pane->uuid = '18f1bf30-dcae-48b9-a3a4-63e420356658';
    $display->content['new-18f1bf30-dcae-48b9-a3a4-63e420356658'] = $pane;
    $display->panels['all_products'][0] = 'new-18f1bf30-dcae-48b9-a3a4-63e420356658';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-18f1bf30-dcae-48b9-a3a4-63e420356658';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lp_products'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lp_projects';
  $page->task = 'page';
  $page->admin_title = 'Projects';
  $page->admin_description = '';
  $page->path = 'projects';
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
  $handler->name = 'page_lp_projects__panel_context_361442c2-1e62-4745-89b0-f1587b603a0f';
  $handler->task = 'page';
  $handler->subtask = 'lp_projects';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Projects',
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
  $display->layout = 'project_landing_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_navbar' => NULL,
      'main_content' => NULL,
      'footer_navbar' => NULL,
      'all_projects' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Projects';
  $display->uuid = '8dcdaaff-a677-4835-bd9c-a63c87f2d20c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae2b6f44-1991-43f6-8859-1f751c54d450';
    $pane->panel = 'all_projects';
    $pane->type = 'views';
    $pane->subtype = 'view_projects';
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
      'display' => 'block',
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
    $pane->uuid = 'ae2b6f44-1991-43f6-8859-1f751c54d450';
    $display->content['new-ae2b6f44-1991-43f6-8859-1f751c54d450'] = $pane;
    $display->panels['all_projects'][0] = 'new-ae2b6f44-1991-43f6-8859-1f751c54d450';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ae2b6f44-1991-43f6-8859-1f751c54d450';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lp_projects'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lp_services';
  $page->task = 'page';
  $page->admin_title = 'Services';
  $page->admin_description = '';
  $page->path = 'services';
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
  $handler->name = 'page_lp_services__panel_context_c30edc09-e871-49fc-ae5d-afddac3a9c49';
  $handler->task = 'page';
  $handler->subtask = 'lp_services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Services',
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
  $display->layout = 'service_landing_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'all_services' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Services';
  $display->uuid = '96bc62a0-ff51-4568-9dda-c35d6b26a91e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a0d4547-4238-4481-b784-5762a488b628';
    $pane->panel = 'all_services';
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
      'display' => 'block',
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
    $pane->uuid = '4a0d4547-4238-4481-b784-5762a488b628';
    $display->content['new-4a0d4547-4238-4481-b784-5762a488b628'] = $pane;
    $display->panels['all_services'][0] = 'new-4a0d4547-4238-4481-b784-5762a488b628';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4a0d4547-4238-4481-b784-5762a488b628';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lp_services'] = $page;

  return $pages;

}
