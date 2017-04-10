<?php
/**
 * @file
 * bos_component_reusable.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bos_component_reusable_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_existing_component'.
  $field_bases['field_existing_component'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_existing_component',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'reusable_paragraphs',
        ),
      ),
      'target_type' => 'paragraphs_item',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
