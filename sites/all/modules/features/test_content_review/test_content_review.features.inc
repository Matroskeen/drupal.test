<?php
/**
 * @file
 * test_content_review.features.inc
 */

/**
 * Implements hook_node_info().
 */
function test_content_review_node_info() {
  $items = array(
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => t('Short review for the film.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
