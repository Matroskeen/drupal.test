<?php
/**
 * @file
 * test_content_film.features.inc
 */

/**
 * Implements hook_node_info().
 */
function test_content_film_node_info() {
  $items = array(
    'film' => array(
      'name' => t('Film'),
      'base' => 'node_content',
      'description' => t('Nothing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
