<?php
/**
 * @file
 * test_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function test_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_f690a22b-9b5e-499d-90f5-f100a232e43f';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Film Node',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Genre',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_genre-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'film' => 'film',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '27e41c57-0bd4-4fbb-b67a-6b1bd735114b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b61d257-1ec1-4f74-9f44-64e32cdc4f02';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6b61d257-1ec1-4f74-9f44-64e32cdc4f02';
    $display->content['new-6b61d257-1ec1-4f74-9f44-64e32cdc4f02'] = $pane;
    $display->panels['middle'][0] = 'new-6b61d257-1ec1-4f74-9f44-64e32cdc4f02';
    $pane = new stdClass();
    $pane->pid = 'new-8a10c131-6a55-463e-8f24-7fcf8d7ec54b';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a10c131-6a55-463e-8f24-7fcf8d7ec54b';
    $display->content['new-8a10c131-6a55-463e-8f24-7fcf8d7ec54b'] = $pane;
    $display->panels['middle'][1] = 'new-8a10c131-6a55-463e-8f24-7fcf8d7ec54b';
    $pane = new stdClass();
    $pane->pid = 'new-253140ac-eafb-4d07-a9bb-922180b4d154';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_genre';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Genres',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '253140ac-eafb-4d07-a9bb-922180b4d154';
    $display->content['new-253140ac-eafb-4d07-a9bb-922180b4d154'] = $pane;
    $display->panels['middle'][2] = 'new-253140ac-eafb-4d07-a9bb-922180b4d154';
    $pane = new stdClass();
    $pane->pid = 'new-94332656-b481-4882-98e5-60721ad21a06';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'reviews-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
      'offset' => '0',
      'path' => 'reviews',
      'fields_override' => array(
        'title' => 1,
        'field_rating' => 1,
        'body' => 1,
        'title_1' => 1,
      ),
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '94332656-b481-4882-98e5-60721ad21a06';
    $display->content['new-94332656-b481-4882-98e5-60721ad21a06'] = $pane;
    $display->panels['middle'][3] = 'new-94332656-b481-4882-98e5-60721ad21a06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_f690a22b-9b5e-499d-90f5-f100a232e43f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_a8035b58-24cf-4cb0-a3f5-74aec12b5299';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Genre',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Current term',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a73d222-df1a-4850-ba46-6bbab1f1e58a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1e2f0d67-58fa-4fcb-a177-a96192f24102';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'genre-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1e2f0d67-58fa-4fcb-a177-a96192f24102';
    $display->content['new-1e2f0d67-58fa-4fcb-a177-a96192f24102'] = $pane;
    $display->panels['left'][0] = 'new-1e2f0d67-58fa-4fcb-a177-a96192f24102';
    $pane = new stdClass();
    $pane->pid = 'new-53c60ec5-2f63-4ea0-8f94-4eaa5ca77a18';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'films-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '53c60ec5-2f63-4ea0-8f94-4eaa5ca77a18';
    $display->content['new-53c60ec5-2f63-4ea0-8f94-4eaa5ca77a18'] = $pane;
    $display->panels['right'][0] = 'new-53c60ec5-2f63-4ea0-8f94-4eaa5ca77a18';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_a8035b58-24cf-4cb0-a3f5-74aec12b5299'] = $handler;

  return $export;
}
