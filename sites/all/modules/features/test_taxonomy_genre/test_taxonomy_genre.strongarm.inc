<?php
/**
 * @file
 * test_taxonomy_genre.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function test_taxonomy_genre_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_genre_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_genre_pattern'] = $strongarm;

  return $export;
}
