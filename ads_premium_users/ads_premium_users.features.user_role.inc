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
    'weight' => 12,
  );

  // Exported role: Diamond.
  $roles['Diamond'] = array(
    'name' => 'Diamond',
    'weight' => 16,
  );

  // Exported role: Gold.
  $roles['Gold'] = array(
    'name' => 'Gold',
    'weight' => 14,
  );

  // Exported role: Iron.
  $roles['Iron'] = array(
    'name' => 'Iron',
    'weight' => 11,
  );

  // Exported role: Platinum.
  $roles['Platinum'] = array(
    'name' => 'Platinum',
    'weight' => 15,
  );

  // Exported role: Silver.
  $roles['Silver'] = array(
    'name' => 'Silver',
    'weight' => 13,
  );

  // Exported role: Solitaire.
  $roles['Solitaire'] = array(
    'name' => 'Solitaire',
    'weight' => 17,
  );

  return $roles;
}
