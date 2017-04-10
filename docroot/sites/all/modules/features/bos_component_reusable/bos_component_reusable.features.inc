<?php
/**
 * @file
 * bos_component_reusable.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function bos_component_reusable_paragraphs_info() {
  $items = array(
    'reusable_component' => array(
      'name' => 'Reusable Component',
      'bundle' => 'reusable_component',
      'locked' => '1',
    ),
  );
  return $items;
}
