<?php
/**
 * @file
 * test_main_menu_2.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function test_main_menu_2_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/374.
  $menu_links['main-menu_about-us:node/374'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/374',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/374',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 45,
    'customized' => 0,
  );
  // Exported menu link: main-menu_adventure:taxonomy/term/4.
  $menu_links['main-menu_adventure:taxonomy/term/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Adventure',
    'options' => array(
      'attributes' => array(
        'title' => 'Adventure',
      ),
      'identifier' => 'main-menu_adventure:taxonomy/term/4',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_comedy:taxonomy/term/3.
  $menu_links['main-menu_comedy:taxonomy/term/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Comedy',
    'options' => array(
      'attributes' => array(
        'title' => 'Comedy',
      ),
      'identifier' => 'main-menu_comedy:taxonomy/term/3',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_drama:taxonomy/term/6.
  $menu_links['main-menu_drama:taxonomy/term/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Drama',
    'options' => array(
      'attributes' => array(
        'title' => 'Drama',
      ),
      'identifier' => 'main-menu_drama:taxonomy/term/6',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_films:films.
  $menu_links['main-menu_films:films'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'films',
    'router_path' => 'films',
    'link_title' => 'Films',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_films:films',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: main-menu_history:taxonomy/term/9.
  $menu_links['main-menu_history:taxonomy/term/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'History',
    'options' => array(
      'attributes' => array(
        'title' => 'History',
      ),
      'identifier' => 'main-menu_history:taxonomy/term/9',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_horror:taxonomy/term/11.
  $menu_links['main-menu_horror:taxonomy/term/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/11',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Horror',
    'options' => array(
      'attributes' => array(
        'title' => 'Horror',
      ),
      'identifier' => 'main-menu_horror:taxonomy/term/11',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_reviews:reviews.
  $menu_links['main-menu_reviews:reviews'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'reviews',
    'router_path' => 'reviews',
    'link_title' => 'Reviews',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_reviews:reviews',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: main-menu_romance:taxonomy/term/10.
  $menu_links['main-menu_romance:taxonomy/term/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Romance',
    'options' => array(
      'attributes' => array(
        'title' => 'Romance',
      ),
      'identifier' => 'main-menu_romance:taxonomy/term/10',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_sport:taxonomy/term/7.
  $menu_links['main-menu_sport:taxonomy/term/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/7',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Sport',
    'options' => array(
      'attributes' => array(
        'title' => 'Sport',
      ),
      'identifier' => 'main-menu_sport:taxonomy/term/7',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_war:taxonomy/term/8.
  $menu_links['main-menu_war:taxonomy/term/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'War',
    'options' => array(
      'attributes' => array(
        'title' => 'War',
      ),
      'identifier' => 'main-menu_war:taxonomy/term/8',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );
  // Exported menu link: main-menu_western:taxonomy/term/5.
  $menu_links['main-menu_western:taxonomy/term/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Western',
    'options' => array(
      'attributes' => array(
        'title' => 'Western',
      ),
      'identifier' => 'main-menu_western:taxonomy/term/5',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_films:films',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Adventure');
  t('Comedy');
  t('Drama');
  t('Films');
  t('History');
  t('Home');
  t('Horror');
  t('Reviews');
  t('Romance');
  t('Sport');
  t('War');
  t('Western');

  return $menu_links;
}
