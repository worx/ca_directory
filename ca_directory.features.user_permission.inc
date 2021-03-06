<?php
/**
 * @file
 * ca_directory.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create directory content'.
  $permissions['create directory content'] = array(
    'name' => 'create directory content',
    'roles' => array(
      'administrator' => 'administrator',
      'directory admin' => 'directory admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any directory content'.
  $permissions['delete any directory content'] = array(
    'name' => 'delete any directory content',
    'roles' => array(
      'administrator' => 'administrator',
      'directory admin' => 'directory admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own directory content'.
  $permissions['delete own directory content'] = array(
    'name' => 'delete own directory content',
    'roles' => array(
      'administrator' => 'administrator',
      'directory admin' => 'directory admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in directory'.
  $permissions['delete terms in directory'] = array(
    'name' => 'delete terms in directory',
    'roles' => array(
      'administrator' => 'administrator',
      'directory admin' => 'directory admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any directory content'.
  $permissions['edit any directory content'] = array(
    'name' => 'edit any directory content',
    'roles' => array(
      'administrator' => 'administrator',
      'directory admin' => 'directory admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own directory content'.
  $permissions['edit own directory content'] = array(
    'name' => 'edit own directory content',
    'roles' => array(
      'administrator' => 'administrator',
      'directory admin' => 'directory admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in directory'.
  $permissions['edit terms in directory'] = array(
    'name' => 'edit terms in directory',
    'roles' => array(
      'administrator' => 'administrator',
      'directory admin' => 'directory admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
