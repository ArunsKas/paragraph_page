<?php
/**
 * @file
 * paragraph_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paragraph_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function paragraph_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function paragraph_page_image_default_styles() {
  $styles = array();

  // Exported image style: paragraph-company-logo-fit-240x400.
  $styles['paragraph-company-logo-fit-240x400'] = array(
    'label' => 'Paragraph company logo - fit within 240x400',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph-fit-within-1200x1200.
  $styles['paragraph-fit-within-1200x1200'] = array(
    'label' => 'Paragraph - fit within 1200x1200',
    'effects' => array(
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 1200,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph-fit-within-600x600.
  $styles['paragraph-fit-within-600x600'] = array(
    'label' => 'Paragraph - fit within 600x600',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph-promo-image-non-retina.
  $styles['paragraph-promo-image-non-retina'] = array(
    'label' => 'Paragraph promo image - non-retina',
    'effects' => array(
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph-promo-image-retina.
  $styles['paragraph-promo-image-retina'] = array(
    'label' => 'Paragraph promo image - retina',
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2340,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_carousel_1200x600.
  $styles['paragraph_carousel_1200x600'] = array(
    'label' => 'Paragraph carousel - fit within 1200x600',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_carousel_600x600.
  $styles['paragraph_carousel_600x600'] = array(
    'label' => 'Paragraph carousel - fit within 600x600',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_16to9.
  $styles['paragraph_promo_image_16to9'] = array(
    'label' => 'Paragraph promo image - 16:9 ratio',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 900,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_1to1.
  $styles['paragraph_promo_image_1to1'] = array(
    'label' => 'Paragraph promo image - 1:1 ratio',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_22to10.
  $styles['paragraph_promo_image_22to10'] = array(
    'label' => 'Paragraph promo image - 2.2:1 ratio',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 730,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_2to1.
  $styles['paragraph_promo_image_2to1'] = array(
    'label' => 'Paragraph promo image - 2:1 ratio',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_3to1.
  $styles['paragraph_promo_image_3to1'] = array(
    'label' => 'Paragraph promo image - 3:1 ratio',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 530,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_3to4.
  $styles['paragraph_promo_image_3to4'] = array(
    'label' => 'Paragraph promo image - 3:4 ratio',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 1600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_4to1.
  $styles['paragraph_promo_image_4to1'] = array(
    'label' => 'Paragraph promo image - 4:1 ratio',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: paragraph_promo_image_4to3.
  $styles['paragraph_promo_image_4to3'] = array(
    'label' => 'Paragraph promo image - 4:3 ratio',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function paragraph_page_node_info() {
  $items = array(
    'paragraph_page' => array(
      'name' => t('Paragraph page'),
      'base' => 'node_content',
      'description' => t('Paragraph pages are created by adding one or more "paragraph" elements to a page, which stack on top of each other. You can add headings with jump links, WYSIWYG blocks, image galleries, and web forms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Paragraph pages are created by adding one or more "paragraph" elements to a page, which stack on top of each other. You can add headings with jump links, WYSIWYG blocks, image galleries, and web forms.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function paragraph_page_paragraphs_info() {
  $items = array(
    'address' => array(
      'name' => 'Address',
      'bundle' => 'address',
      'locked' => '1',
    ),
    'back_to_top_link' => array(
      'name' => 'Back to top link',
      'bundle' => 'back_to_top_link',
      'locked' => '1',
    ),
    'child_pages_listing' => array(
      'name' => 'Child pages listing',
      'bundle' => 'child_pages_listing',
      'locked' => '1',
    ),
    'company_contact_info' => array(
      'name' => 'Company contact information with logo and map',
      'bundle' => 'company_contact_info',
      'locked' => '1',
    ),
    'customisable_content_listing' => array(
      'name' => 'Customisable content listing',
      'bundle' => 'customisable_content_listing',
      'locked' => '1',
    ),
    'e_mail_address' => array(
      'name' => 'E-mail address',
      'bundle' => 'e_mail_address',
      'locked' => '1',
    ),
    'file_downloads' => array(
      'name' => 'File downloads',
      'bundle' => 'file_downloads',
      'locked' => '1',
    ),
    'google_map' => array(
      'name' => 'Google map',
      'bundle' => 'google_map',
      'locked' => '1',
    ),
    'heading_and_jump_link' => array(
      'name' => 'Heading and jump link',
      'bundle' => 'heading_and_jump_link',
      'locked' => '1',
    ),
    'horizontal_line' => array(
      'name' => 'Horizontal dividing line',
      'bundle' => 'horizontal_line',
      'locked' => '1',
    ),
    'image_carousel' => array(
      'name' => 'Carousel of images with links and left/right controls',
      'bundle' => 'image_carousel',
      'locked' => '1',
    ),
    'images' => array(
      'name' => 'Images',
      'bundle' => 'images',
      'locked' => '1',
    ),
    'large_quote_intro_text' => array(
      'name' => 'Large quote/intro text',
      'bundle' => 'large_quote_intro_text',
      'locked' => '1',
    ),
    'links_list' => array(
      'name' => 'List of links',
      'bundle' => 'links_list',
      'locked' => '1',
    ),
    'node_reference' => array(
      'name' => 'Display another page in a paragraph',
      'bundle' => 'node_reference',
      'locked' => '1',
    ),
    'page_promo_banner' => array(
      'name' => 'Full-width image with one, two or three text boxes overlaid',
      'bundle' => 'page_promo_banner',
      'locked' => '1',
    ),
    'side_by_side_image_and_text' => array(
      'name' => 'Side-by-side image and text',
      'bundle' => 'side_by_side_image_and_text',
      'locked' => '1',
    ),
    'soundcloud_player' => array(
      'name' => 'Soundcloud player',
      'bundle' => 'soundcloud_player',
      'locked' => '1',
    ),
    'telephone_number' => array(
      'name' => 'Telephone number',
      'bundle' => 'telephone_number',
      'locked' => '1',
    ),
    'two_three_or_four_column_wysiwyg' => array(
      'name' => 'Two, three or four column WYSIWYG',
      'bundle' => 'two_three_or_four_column_wysiwyg',
      'locked' => '1',
    ),
    'views_paragraph' => array(
      'name' => 'Insert a View (of content, taxonomy terms, etc)',
      'bundle' => 'views_paragraph',
      'locked' => '1',
    ),
    'wysiwyg' => array(
      'name' => 'WYSIWYG',
      'bundle' => 'wysiwyg',
      'locked' => '1',
    ),
    'youtube_video' => array(
      'name' => 'Youtube video',
      'bundle' => 'youtube_video',
      'locked' => '1',
    ),
  );
  return $items;
}
