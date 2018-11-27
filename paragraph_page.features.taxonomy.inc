<?php
/**
 * @file
 * paragraph_page.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function paragraph_page_taxonomy_default_vocabularies() {
  return array(
    'parapg_contentlist_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'parapg_contentlist_tags',
      'description' => 'You can "tag" content with keywords or custom text, for example to build custom content list paragraphs.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
