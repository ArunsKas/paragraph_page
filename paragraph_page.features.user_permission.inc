<?php
/**
 * @file
 * paragraph_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function paragraph_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'administrator' => 'administrator',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'create paragraph_page content'.
  $permissions['create paragraph_page content'] = array(
    'name' => 'create paragraph_page content',
    'roles' => array(
      'client administrator' => 'client administrator',
      'editor' => 'editor',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any paragraph_page content'.
  $permissions['delete any paragraph_page content'] = array(
    'name' => 'delete any paragraph_page content',
    'roles' => array(
      'client administrator' => 'client administrator',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own paragraph_page content'.
  $permissions['delete own paragraph_page content'] = array(
    'name' => 'delete own paragraph_page content',
    'roles' => array(
      'editor' => 'editor',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any paragraph_page content'.
  $permissions['edit any paragraph_page content'] = array(
    'name' => 'edit any paragraph_page content',
    'roles' => array(
      'client administrator' => 'client administrator',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own paragraph_page content'.
  $permissions['edit own paragraph_page content'] = array(
    'name' => 'edit own paragraph_page content',
    'roles' => array(
      'editor' => 'editor',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search paragraph_page content'.
  $permissions['search paragraph_page content'] = array(
    'name' => 'search paragraph_page content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'show format selection for paragraphs_item'.
  $permissions['show format selection for paragraphs_item'] = array(
    'name' => 'show format selection for paragraphs_item',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'client administrator' => 'client administrator',
      'editor' => 'editor',
      'super-administrator' => 'super-administrator',
    ),
    'module' => 'better_formats',
  );

  return $permissions;
}
