<?php
/**
 * @file
 * test_entity_review.features.inc
 */

/**
 * Implements hook_eck_entity_type_info().
 */
function test_entity_review_eck_entity_type_info() {
  $items = array(
    'review' => array(
      'name' => 'review',
      'label' => 'Review',
      'properties' => array(
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
      ),
    ),
  );
  return $items;
}
