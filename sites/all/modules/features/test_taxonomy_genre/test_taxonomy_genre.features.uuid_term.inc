<?php
/**
 * @file
 * test_taxonomy_genre.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function test_taxonomy_genre_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'War',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0056dff0-901e-42fa-af75-76e7fb6b699d',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Drama',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5a17cfc8-d5cd-4aa7-8b31-eb405e027225',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Adventure',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6a432962-203c-4f26-b0c1-8a666d2efda9',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Romance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6c62ad0a-9b48-43b2-8dd3-e2ecff85acbc',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Comedy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '95063c3d-6e43-4fe2-85df-344f8685ceb5',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'History',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9d4ea643-15d9-4d93-a62e-e026612b18ba',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sport',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aea58652-e1e3-482a-b7bd-c2af056b6efc',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Horror',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd926154e-0f52-48cb-9ca6-36bfb0cfd03b',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Western',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fb12ed20-5336-4376-8341-c6397e8b2533',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
