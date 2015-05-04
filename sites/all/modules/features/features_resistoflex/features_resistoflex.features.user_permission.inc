<?php
/**
 * @file
 * features_resistoflex.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_resistoflex_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer block semantics'.
  $permissions['administer block semantics'] = array(
    'name' => 'administer block semantics',
    'roles' => array(),
    'module' => 'borealis_sb',
  );

  // Exported permission: 'administer responsive image settings'.
  $permissions['administer responsive image settings'] = array(
    'name' => 'administer responsive image settings',
    'roles' => array(),
    'module' => 'borealis_ri',
  );

  // Exported permission: 'administer responsive image styles'.
  $permissions['administer responsive image styles'] = array(
    'name' => 'administer responsive image styles',
    'roles' => array(),
    'module' => 'borealis_ri',
  );

  return $permissions;
}
