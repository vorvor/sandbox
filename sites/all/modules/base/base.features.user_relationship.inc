<?php
/**
 * @file
 * base.features.user_relationship.inc
 */

/**
 * Implements hook_user_relationships_default_relationships().
 */
function base_user_relationships_default_relationships() {
  $relationships = array();

  // Exported user_relationship style: partner.
  $relationships['partner'] = array(
    'machine_name' => 'partner',
    'name' => 'Partner',
    'plural_name' => '',
    'is_oneway' => 0,
    'is_reciprocal' => 0,
    'requires_approval' => 1,
    'expires_val' => 0,
    'reverse_name' => '',
    'name_capitalized' => '',
    'plural_name_capitalized' => '',
    'reverse_name_capitalized' => '',
    'reverse_plural_name' => '',
    'reverse_plural_name_capitalized' => '',
  );

  return $relationships;
}
