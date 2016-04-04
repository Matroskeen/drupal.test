<?php
/**
 * @file
 * test_basic_page.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function test_basic_page_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'About Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '10756528-aa4b-4793-835d-b2b4eecd000d',
  'type' => 'page',
  'language' => 'und',
  'created' => 1459770965,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e707cfcf-b7ae-473a-8918-ac495194c4c7',
  'revision_uid' => 1,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-04-04 14:56:05 +0300',
);
  return $nodes;
}
