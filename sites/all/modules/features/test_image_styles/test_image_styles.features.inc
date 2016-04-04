<?php
/**
 * @file
 * test_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function test_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 220x300sc.
  $styles['220x300sc'] = array(
    'label' => '220x300sc',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
