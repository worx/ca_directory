<?php
/**
 * @file
 * ca_directory.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_directory_user_default_roles() {
  $roles = array();

  // Exported role: directory admin.
  $roles['directory admin'] = array(
    'name' => 'directory admin',
    'weight' => '7',
    'machine_name' => 'directory_admin',
  );

  return $roles;
}
