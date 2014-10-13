<?php
/**
 * @file
 * ads_premium_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ads_premium_users_user_default_roles() {
  $roles = array();

  // Exported role: Bronze.
  $roles['Bronze'] = array(
    'name' => 'Bronze',
    'weight' => 3,
  );

  // Exported role: Diamond.
  $roles['Diamond'] = array(
    'name' => 'Diamond',
    'weight' => 9,
  );

  // Exported role: Gold.
  $roles['Gold'] = array(
    'name' => 'Gold',
    'weight' => 5,
  );

  // Exported role: Iron.
  $roles['Iron'] = array(
    'name' => 'Iron',
    'weight' => 8,
  );

  // Exported role: Platinum.
  $roles['Platinum'] = array(
    'name' => 'Platinum',
    'weight' => 6,
  );

  // Exported role: Silver.
  $roles['Silver'] = array(
    'name' => 'Silver',
    'weight' => 4,
  );

  return $roles;
}
