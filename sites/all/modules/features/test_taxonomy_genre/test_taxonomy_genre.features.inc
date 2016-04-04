<?php
/**
 * @file
 * test_taxonomy_genre.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function test_taxonomy_genre_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
