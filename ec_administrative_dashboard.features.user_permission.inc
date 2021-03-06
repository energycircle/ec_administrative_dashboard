<?php
/**
 * @file
 * ec_administrative_dashboard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_administrative_dashboard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer total control'.
  $permissions['administer total control'] = array(
    'name' => 'administer total control',
    'roles' => array(),
    'module' => 'total_control',
  );

  // Exported permission: 'have total control'.
  $permissions['have total control'] = array(
    'name' => 'have total control',
    'roles' => array(),
    'module' => 'total_control',
  );

  return $permissions;
}
