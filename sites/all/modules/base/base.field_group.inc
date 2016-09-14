<?php
/**
 * @file
 * base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function base_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_film|node|post|form';
  $field_group->group_name = 'group_film';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Film',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-film field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_film|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|post|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_image|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|post|form';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_link|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|post|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'media',
    'weight' => '6',
    'children' => array(
      0 => 'group_video',
      1 => 'group_image',
      2 => 'group_link',
      3 => 'group_film',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-media field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_media|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|post|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_video|node|post|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Film');
  t('Image');
  t('Link');
  t('Video');
  t('media');

  return $field_groups;
}
