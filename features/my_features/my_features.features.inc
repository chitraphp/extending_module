<?php
/**
 * @file
 * my_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function my_features_node_info() {
  $items = array(
    'recipe_name' => array(
      'name' => t('Recipe Name'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
