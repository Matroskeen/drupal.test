<?php
/**
 * @file
 * test_custom_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function test_custom_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
