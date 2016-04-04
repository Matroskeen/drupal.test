<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function my_subtheme_preprocess_views_view_field(&$variables) {

  $view = $variables['view'];
  if ($view->name == 'posters') {
    if ($view->current_display == 'panel_pane_1') {
      if ('field_image' == $variables['field']->field) {
        $uri = $variables['row']->field_field_image[0]['raw']['uri'];
        $image_url = file_create_url($uri);

        $variables['image_url'] = $image_url;
      }
    }
  }
}
