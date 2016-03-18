<?php
/**
 * @file
 * paragraph_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function paragraph_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_address'.
  $field_instances['field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_address'] = array(
    'bundle' => 'field_co_cntct_contact_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_fg_address',
    'label' => 'Postal address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_email'.
  $field_instances['field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_email'] = array(
    'bundle' => 'field_co_cntct_contact_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_fg_email',
    'label' => 'E-mail address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_tel'.
  $field_instances['field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_tel'] = array(
    'bundle' => 'field_co_cntct_contact_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'telephone',
        'settings' => array(
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_fg_tel',
    'label' => 'Telephone/fax number',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_title'.
  $field_instances['field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_title'] = array(
    'bundle' => 'field_co_cntct_contact_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a title to identify this contact. For example, if this is a telephone number for the company\\\'s main switchboard, you might enter, "Main switchboard". Or, for the customer services e-mail address, you might enter "Customer services". You don\'t need to specify that this is an e-mail address, telephone number, etc, here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_fg_title',
    'label' => 'Title of contact',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_type'.
  $field_instances['field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_type'] = array(
    'bundle' => 'field_co_cntct_contact_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose what kind of contact information this is.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_fg_type',
    'label' => 'Type of contact',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_url'.
  $field_instances['field_collection_item-field_co_cntct_contact_links-field_co_cntct_fg_url'] = array(
    'bundle' => 'field_co_cntct_contact_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please make sure that you provide a full, working URL, beginning with http:// or https://',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_fg_url',
    'label' => 'Web address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_paragraph_text_overlays-field_paragraph_link_to_page'.
  $field_instances['field_collection_item-field_paragraph_text_overlays-field_paragraph_link_to_page'] = array(
    'bundle' => 'field_paragraph_text_overlays',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_paragraph_link_to_page',
    'label' => 'Link to page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_paragraph_text_overlays-field_paragraph_subtitle'.
  $field_instances['field_collection_item-field_paragraph_text_overlays-field_paragraph_subtitle'] = array(
    'bundle' => 'field_paragraph_text_overlays',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'p',
    'field_name' => 'field_paragraph_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_paragraph_text_overlays-field_paragraph_text_colour'.
  $field_instances['field_collection_item-field_paragraph_text_overlays-field_paragraph_text_colour'] = array(
    'bundle' => 'field_paragraph_text_overlays',
    'default_value' => array(
      0 => array(
        'value' => 'black',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_paragraph_text_colour',
    'label' => 'Text and background colours',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_paragraph_text_overlays-field_paragraph_text_enabled'.
  $field_instances['field_collection_item-field_paragraph_text_overlays-field_paragraph_text_enabled'] = array(
    'bundle' => 'field_paragraph_text_overlays',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Un-tick this checkbox to hide this text overlay.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_paragraph_text_enabled',
    'label' => 'Show this text overlay?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_paragraph_text_overlays-field_paragraph_title'.
  $field_instances['field_collection_item-field_paragraph_text_overlays-field_paragraph_title'] = array(
    'bundle' => 'field_paragraph_text_overlays',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'h3',
    'field_name' => 'field_paragraph_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_parapg_carousel_slides-field_carousel_slide_img_desktop'.
  $field_instances['field_collection_item-field_parapg_carousel_slides-field_carousel_slide_img_desktop'] = array(
    'bundle' => 'field_parapg_carousel_slides',
    'deleted' => 0,
    'description' => 'Upload the image which should be shown on larger displays. Typically, this image will be in landscape format. The image will be displayed scaled to fit within 1200px by 600px.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'paragraph_carousel_1200x600',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_carousel_slide_img_desktop',
    'label' => 'Desktop-sized image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'paragraph-pages/carousel-images/desktop',
      'file_extensions' => 'png gif jpg jpeg',
      'imagecrop' => array(
        'news_article_image' => 0,
        'page_banner' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'paragraph_carousel_1200x600',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_parapg_carousel_slides-field_carousel_slide_img_link'.
  $field_instances['field_collection_item-field_parapg_carousel_slides-field_carousel_slide_img_link'] = array(
    'bundle' => 'field_parapg_carousel_slides',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optionally, link this carousel slide to another page in this site.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_carousel_slide_img_link',
    'label' => 'Link this slide to another page?',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'internal',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_parapg_carousel_slides-field_carousel_slide_img_mobile'.
  $field_instances['field_collection_item-field_parapg_carousel_slides-field_carousel_slide_img_mobile'] = array(
    'bundle' => 'field_parapg_carousel_slides',
    'deleted' => 0,
    'description' => 'Upload an image to be displayed on smaller screens. The image will be scaled down to fit within 600x600 pixels. If you don\'t have a mobile-specific image, you can re-upload the desktop image, but note that the scaling process may make the image appear too small.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'paragraph_carousel_600x600',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_carousel_slide_img_mobile',
    'label' => 'Mobile image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'paragraph-pages/carousel-images/mobile',
      'file_extensions' => 'png gif jpg jpeg',
      'imagecrop' => array(
        'news_article_image' => 0,
        'page_banner' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'paragraph_carousel_600x600',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_parapg_carousel_slides-field_carousel_slide_subtitle'.
  $field_instances['field_collection_item-field_parapg_carousel_slides-field_carousel_slide_subtitle'] = array(
    'bundle' => 'field_parapg_carousel_slides',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can add an optional sub-title which will be shown bottom-centre on your slide, below any slide title, if entered.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_carousel_slide_subtitle',
    'label' => 'Slide sub-title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_parapg_carousel_slides-field_carousel_slide_title'.
  $field_instances['field_collection_item-field_parapg_carousel_slides-field_carousel_slide_title'] = array(
    'bundle' => 'field_parapg_carousel_slides',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can add an optional title which will be shown in the bottom-centre of the slide. Be careful not to enter a title which will be too large to fit inside the carousel image on mobile and desktop displays.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_carousel_slide_title',
    'label' => 'Slide title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-paragraph_page-field_parapg_paragraphs'.
  $field_instances['node-paragraph_page-field_parapg_paragraphs'] = array(
    'bundle' => 'paragraph_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'node_tab_about' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_tab_about-bijou' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_tab_accommodation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_tab_area' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_tab_events' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_tab_facilities' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_tab_gallery' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parapg_paragraphs',
    'label' => 'Paragraphs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'heading_and_jump_link' => -1,
        'images' => -1,
        'wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'heading_and_jump_link' => 2,
        'images' => 3,
        'wysiwyg' => 4,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-paragraph_page-field_parapg_summary'.
  $field_instances['node-paragraph_page-field_parapg_summary'] = array(
    'bundle' => 'paragraph_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a summary of this page\'s content. This will be displayed in teaser views, search results and landing pages.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parapg_summary',
    'label' => 'Page summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 90,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-paragraph_page-field_parapg_url_slug'.
  $field_instances['node-paragraph_page-field_parapg_url_slug'] = array(
    'bundle' => 'paragraph_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p><strong>Provide the last part of this page\'s URL - the part after the last slash. Do not use hyphens, underscores, slashes, punctuation, spaces, or uppercase, and do not start with a number.</strong></p>
<p>Examples:</p>
<ul>
<li>myawesomepage</li>
<li>helpandinformation</li>
<li>monkeysandbananas</li>
</ul>',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parapg_url_slug',
    'label' => 'URL Slug',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-address-field_parapg_address'.
  $field_instances['paragraphs_item-address-field_parapg_address'] = array(
    'bundle' => 'address',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'organisation' => 'organisation',
          'name-oneline' => 'name-oneline',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'name-full' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-address-field_parapg_address_name'.
  $field_instances['paragraphs_item-address-field_parapg_address_name'] = array(
    'bundle' => 'address',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of this address to be displayed alongside the address, for example "Main office".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_address_name',
    'label' => 'Name of address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-child_pages_listing-field_parapg_childpages_about'.
  $field_instances['paragraphs_item-child_pages_listing-field_parapg_childpages_about'] = array(
    'bundle' => 'child_pages_listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_childpages_about',
    'label' => 'About Child Pages Listing paragraphs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-child_pages_listing-field_parapg_childpages_emptytxt'.
  $field_instances['paragraphs_item-child_pages_listing-field_parapg_childpages_emptytxt'] = array(
    'bundle' => 'child_pages_listing',
    'default_value' => array(
      0 => array(
        'value' => 'There are no pages in this section.',
      ),
    ),
    'deleted' => 0,
    'description' => 'Provide the text to show if there are no child pages beneath this page. If you leave this blank, no text will be shown.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_childpages_emptytxt',
    'label' => 'Text to show if there are no child pages',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-child_pages_listing-field_parapg_childpages_heading'.
  $field_instances['paragraphs_item-child_pages_listing-field_parapg_childpages_heading'] = array(
    'bundle' => 'child_pages_listing',
    'default_value' => array(
      0 => array(
        'value' => 'Pages in this section',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter the text to be shown as a heading above any child pages.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_childpages_heading',
    'label' => 'Heading',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-company_contact_info-field_co_cntct_contact_links'.
  $field_instances['paragraphs_item-company_contact_info-field_co_cntct_contact_links'] = array(
    'bundle' => 'company_contact_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter contact information here. For each item, choose whether it is a telephone number, e-mail address, web address, or a postal address. Web addresses and e-mail addresses will be displayed as links; telephone numbers will be displayed as links on mobile devices to allow click-to-call. Postal addresses can be linked to a Google Maps search page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_contact_links',
    'label' => 'Contact information',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-company_contact_info-field_co_cntct_heading'.
  $field_instances['paragraphs_item-company_contact_info-field_co_cntct_heading'] = array(
    'bundle' => 'company_contact_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can provide a heading to be displayed in larger text above this contact information, for example to show that the contact information shown here is for a particular division or team.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_heading',
    'label' => 'Heading text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-company_contact_info-field_co_cntct_logo'.
  $field_instances['paragraphs_item-company_contact_info-field_co_cntct_logo'] = array(
    'bundle' => 'company_contact_info',
    'deleted' => 0,
    'description' => 'Upload a logo to be shown alongside this contact information. Use a high-quality image which is at least 200 pixels wide and high.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'paragraph-company-logo-fit-240x400',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_logo',
    'label' => 'Company Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/paragraphs/company-contact-info',
      'file_extensions' => 'png gif jpg jpeg',
      'imagecrop' => array(
        'job_vacancy_image' => 0,
        'news_article_image' => 0,
        'page_banner' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '200x200',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 'media_browser_plus--media_browser_my_files',
          'media_browser_plus--media_browser_thumbnails' => 'media_browser_plus--media_browser_thumbnails',
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-company_contact_info-field_co_cntct_map'.
  $field_instances['paragraphs_item-company_contact_info-field_co_cntct_map'] = array(
    'bundle' => 'company_contact_info',
    'default_value' => array(
      0 => array(
        'name' => '',
        'lat' => '51.65466549035967',
        'lon' => '-0.3207039765822661',
        'zoom' => 8,
        'enter_defaults' => 'Defaults',
        'clear_fields' => 'Clear Fields',
        'open_map' => 'Set Map Marker',
      ),
    ),
    'deleted' => 0,
    'description' => 'Optionally, click the "Set map marker" button to display a map centred on an address or a location of your choosing.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'google_map_field',
        'settings' => array(),
        'type' => 'google_map_field_formatter_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_co_cntct_map',
    'label' => 'Map',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'google_map_field',
      'settings' => array(),
      'type' => 'google_map_field_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-customisable_content_listing-field_parapg_count'.
  $field_instances['paragraphs_item-customisable_content_listing-field_parapg_count'] = array(
    'bundle' => 'customisable_content_listing',
    'default_value' => array(
      0 => array(
        'value' => 6,
      ),
    ),
    'deleted' => 0,
    'description' => 'Show up to how many items? If more than this number of items are found, you can show a pager with links to allow the user to load subsequent pages of results.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_count',
    'label' => 'Show how many items?',
    'required' => 1,
    'settings' => array(
      'max' => 50,
      'min' => 1,
      'prefix' => '',
      'suffix' => 'items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-customisable_content_listing-field_parapg_node_type'.
  $field_instances['paragraphs_item-customisable_content_listing-field_parapg_node_type'] = array(
    'bundle' => 'customisable_content_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the content type which you wish to display.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_node_type',
    'label' => 'Show content of type',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-customisable_content_listing-field_parapg_pager'.
  $field_instances['paragraphs_item-customisable_content_listing-field_parapg_pager'] = array(
    'bundle' => 'customisable_content_listing',
    'default_value' => array(
      0 => array(
        'value' => 'mini',
      ),
    ),
    'deleted' => 0,
    'description' => 'If more items of content are found than the total number you wish to display, you can show links below the content to allow site users to view more results.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_pager',
    'label' => 'Show a pager?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-customisable_content_listing-field_parapg_sort'.
  $field_instances['paragraphs_item-customisable_content_listing-field_parapg_sort'] = array(
    'bundle' => 'customisable_content_listing',
    'default_value' => array(
      0 => array(
        'value' => 'updateddesc',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_sort',
    'label' => 'Sort content',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-e_mail_address-field_parapg_email_address'.
  $field_instances['paragraphs_item-e_mail_address-field_parapg_email_address'] = array(
    'bundle' => 'e_mail_address',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the e-mail address. This will be shown as a "mailto" link which will try to open the visitor\'s e-mail client.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_email_address',
    'label' => 'E-mail address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-e_mail_address-field_parapg_email_title'.
  $field_instances['paragraphs_item-e_mail_address-field_parapg_email_title'] = array(
    'bundle' => 'e_mail_address',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the title of this e-mail address, for example "Enquiries", "Personal", etc.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_email_title',
    'label' => 'E-mail title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-file_downloads-field_parapg_files'.
  $field_instances['paragraphs_item-file_downloads-field_parapg_files'] = array(
    'bundle' => 'file_downloads',
    'deleted' => 0,
    'description' => 'Upload one or more files. You can upload most types of document, images, and Zip archives, which can be used to upload other types of file which aren\'t explicitly allowed here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_files',
    'label' => 'Files',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'paragraph-pages/file-downloads',
      'file_extensions' => 'txt pdf ppt pps doc docx dot dotx xls xlsx xlt csv rtf text zip gz png gif bmp tif tiff jpg jpeg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-google_map-field_parapg_map'.
  $field_instances['paragraphs_item-google_map-field_parapg_map'] = array(
    'bundle' => 'google_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'google_map_field',
        'settings' => array(),
        'type' => 'google_map_field_formatter_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_map',
    'label' => 'Map',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'google_map_field',
      'settings' => array(),
      'type' => 'google_map_field_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heading_and_jump_link-field_paragraph_heading'.
  $field_instances['paragraphs_item-heading_and_jump_link-field_paragraph_heading'] = array(
    'bundle' => 'heading_and_jump_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide the heading to be displayed',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_heading',
    'label' => 'Heading text',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heading_and_jump_link-field_paragraph_heading_level'.
  $field_instances['paragraphs_item-heading_and_jump_link-field_paragraph_heading_level'] = array(
    'bundle' => 'heading_and_jump_link',
    'default_value' => array(
      0 => array(
        'value' => 'h2',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose the heading level - i.e. its size. Heading 2 is the largest available - heading 1 is reserved by the content management system for SEO purposes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_heading_level',
    'label' => 'Heading level',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heading_and_jump_link-field_paragraph_jump_link_shown'.
  $field_instances['paragraphs_item-heading_and_jump_link-field_paragraph_jump_link_shown'] = array(
    'bundle' => 'heading_and_jump_link',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you want to create a jump link but not show it at the top of the page, un-tick this box.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_jump_link_shown',
    'label' => 'Show jump link at top of page?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heading_and_jump_link-field_paragraph_jump_link_slug'.
  $field_instances['paragraphs_item-heading_and_jump_link-field_paragraph_jump_link_slug'] = array(
    'bundle' => 'heading_and_jump_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optionally, you can create a "jump link" anchor, and visitors to this page will be able to add the following to the URL (for example) to jump to this heading: #jump-link-slug. So it you enter <em>pink-monkey</em> here, you can jump to this heading by adding #pink-monkey to the page URL. For the best URLs, use only lowercase letters, numbers and hyphens.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_jump_link_slug',
    'label' => 'Jump link slug',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-horizontal_line-field_parapg_hr_about'.
  $field_instances['paragraphs_item-horizontal_line-field_parapg_hr_about'] = array(
    'bundle' => 'horizontal_line',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_hr_about',
    'label' => 'About this paragraph',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-image_carousel-field_parapg_carousel_container'.
  $field_instances['paragraphs_item-image_carousel-field_parapg_carousel_container'] = array(
    'bundle' => 'image_carousel',
    'default_value' => array(
      0 => array(
        'value' => 'container',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose whether this carousel should be the same width as the page content, or the full width of the window?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_carousel_container',
    'label' => 'Carousel width',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-image_carousel-field_parapg_carousel_slide_ctrl'.
  $field_instances['paragraphs_item-image_carousel-field_parapg_carousel_slide_ctrl'] = array(
    'bundle' => 'image_carousel',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Un-tick to hide the left/right controls which let a visitor switch to the next or previous slide.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_carousel_slide_ctrl',
    'label' => 'Show forward/back controls?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-image_carousel-field_parapg_carousel_slide_pips'.
  $field_instances['paragraphs_item-image_carousel-field_parapg_carousel_slide_pips'] = array(
    'bundle' => 'image_carousel',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Un-tick to hide the row of "dots" which represent the carousel\'s slides. Visitors can jump to a particular slide by clicking its corresponding dot.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_carousel_slide_pips',
    'label' => 'Show slide "pips"?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-image_carousel-field_parapg_carousel_slide_time'.
  $field_instances['paragraphs_item-image_carousel-field_parapg_carousel_slide_time'] = array(
    'bundle' => 'image_carousel',
    'default_value' => array(
      0 => array(
        'value' => 10,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_carousel_slide_time',
    'label' => 'Show each slide for how many seconds?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-image_carousel-field_parapg_carousel_slides'.
  $field_instances['paragraphs_item-image_carousel-field_parapg_carousel_slides'] = array(
    'bundle' => 'image_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add one or more slides to this carousel. Each slide should contain an image to be shown on desktop-sized screens, an image for mobile screens (typically in portrait orientation), and an optional URL to another page on this site to link the images to. Images will be scaled to fit within a pre-defined size, so for consistency, you should ensure all desktop-sized images are the same dimensions, and that all mobile-sized images have equal dimensions, too.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_carousel_slides',
    'label' => 'Carousel slides',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-images-field_paragraph_images'.
  $field_instances['paragraphs_item-images-field_paragraph_images'] = array(
    'bundle' => 'images',
    'deleted' => 0,
    'description' => 'Upload one or more images. Note that only the first two images are shown; to access further images, you must click an image and use the left or right cursor keys to navigate through the popup gallery. If you wish to display more than two images, create a new images paragraph below this one.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => 'paragraph-fit-within-1200x1200',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'paragraph-fit-within-600x600',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => 'paragraph-fit-within-1200x1200',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'paragraph-fit-within-600x600',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/paragraphs',
      'file_extensions' => 'png gif jpg jpeg',
      'imagecrop' => array(
        'headline' => 0,
        'icon-large' => 'icon-large',
        'real-weddings-landscape' => 0,
        'real-weddings-portrait' => 0,
        'venue-image' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-images-field_paragraphs_caption'.
  $field_instances['paragraphs_item-images-field_paragraphs_caption'] = array(
    'bundle' => 'images',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide an optional caption to display below the images.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraphs_caption',
    'label' => 'Below-images caption',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-large_quote_intro_text-field_paragraph_style'.
  $field_instances['paragraphs_item-large_quote_intro_text-field_paragraph_style'] = array(
    'bundle' => 'large_quote_intro_text',
    'default_value' => array(
      0 => array(
        'value' => 'intro-text',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose what font style should be applied to this paragraph; you can choose either "intro text" style, which is a non-italicised serif font, or "quote style", which is a serif font such as Times in italics.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_style',
    'label' => 'Style',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-large_quote_intro_text-field_paragraph_text'.
  $field_instances['paragraphs_item-large_quote_intro_text-field_paragraph_text'] = array(
    'bundle' => 'large_quote_intro_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_text',
    'label' => 'Text',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'php_code' => 0,
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-links_list-field_parapg_links'.
  $field_instances['paragraphs_item-links_list-field_parapg_links'] = array(
    'bundle' => 'links_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add one or more links. You can enter internal links - links which point to pages on this website - or external links which point to another website. Please check that your links are correct and don\'t lead to a "page not found" error.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_parapg_links',
    'label' => 'Links',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 1,
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-links_list-field_parapg_links_columns'.
  $field_instances['paragraphs_item-links_list-field_parapg_links_columns'] = array(
    'bundle' => 'links_list',
    'default_value' => array(
      0 => array(
        'value' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => 'You can display links in columns (as long as you have more than one link, of course).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_links_columns',
    'label' => 'Divide links into columns',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-node_reference-field_page_to_display'.
  $field_instances['paragraphs_item-node_reference-field_page_to_display'] = array(
    'bundle' => 'node_reference',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type the name of an existing page to display it in this paragraph - <a href="/node/add" target="_blank">create a new page here first</a> if necessary. You can show any kind of content here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'full',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_page_to_display',
    'label' => 'Page to display',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-node_reference-field_parapg_noderef_show_title'.
  $field_instances['paragraphs_item-node_reference-field_parapg_noderef_show_title'] = array(
    'bundle' => 'node_reference',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_noderef_show_title',
    'label' => 'Show page title?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-node_reference-field_parapg_noderef_width'.
  $field_instances['paragraphs_item-node_reference-field_parapg_noderef_width'] = array(
    'bundle' => 'node_reference',
    'default_value' => array(
      0 => array(
        'value' => 'container',
      ),
    ),
    'deleted' => 0,
    'description' => 'Should this node always be allowed to expand to the full page width, or should it be limited to the normal content width on larger screens, with left and right margins?',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_noderef_width',
    'label' => 'Full-width or normal width?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-page_promo_banner-field_paragraph_image_ratio'.
  $field_instances['paragraphs_item-page_promo_banner-field_paragraph_image_ratio'] = array(
    'bundle' => 'page_promo_banner',
    'default_value' => array(
      0 => array(
        'value' => 'paragraph_promo_image_4to1',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose what ratio this image should be cropped to. Images will scale up to the window\'s width, or the image\'s full width if smaller than the window width.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_image_ratio',
    'label' => 'Image ratio',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-page_promo_banner-field_paragraph_promo_image'.
  $field_instances['paragraphs_item-page_promo_banner-field_paragraph_promo_image'] = array(
    'bundle' => 'page_promo_banner',
    'deleted' => 0,
    'description' => 'Promo banners show a full-width letter-box shaped image. Upload a high resolution, high quality image for the best impact.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'paragraph-promo-image-retina',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_promo_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/paragraphs/hero-images',
      'file_extensions' => 'png gif jpg jpeg',
      'imagecrop' => array(
        'headline' => 0,
        'icon-large' => 0,
        'real-weddings-landscape' => 0,
        'real-weddings-portrait' => 0,
        'venue-image' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '2340x800',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'paragraph-promo-image-non-retina',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-page_promo_banner-field_paragraph_text_overlays'.
  $field_instances['paragraphs_item-page_promo_banner-field_paragraph_text_overlays'] = array(
    'bundle' => 'page_promo_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can configure up to three text overlays. If you have more than one overlay, each overlay is full-height and occupies either half or one-third of the promo box\'s width. The position of the text overlay is relative to the position of its part of the promo box, so if you set the second of three text overlays to be bottom-right positioned, it will sit in the bottom-right of the middle third of the promo box.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_paragraph_text_overlays',
    'label' => 'Text overlays',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-side_by_side_image_and_text-field_parapg_image'.
  $field_instances['paragraphs_item-side_by_side_image_and_text-field_parapg_image'] = array(
    'bundle' => 'side_by_side_image_and_text',
    'deleted' => 0,
    'description' => 'Upload a high-quality image which will be shown alongside the text paragraph.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'paragraph-fit-within-1200x1200',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/paragraphs/side-by-side',
      'file_extensions' => 'png gif jpg jpeg',
      'imagecrop' => array(
        'page_banner' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'paragraph-fit-within-600x600',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-side_by_side_image_and_text-field_parapg_image_side'.
  $field_instances['paragraphs_item-side_by_side_image_and_text-field_parapg_image_side'] = array(
    'bundle' => 'side_by_side_image_and_text',
    'default_value' => array(
      0 => array(
        'value' => 'left',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose which side the image should be shown on.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_image_side',
    'label' => 'Image side',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-side_by_side_image_and_text-field_parapg_image_width'.
  $field_instances['paragraphs_item-side_by_side_image_and_text-field_parapg_image_width'] = array(
    'bundle' => 'side_by_side_image_and_text',
    'default_value' => array(
      0 => array(
        'value' => 6,
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose how wide the image should be in relation to the full-width of the page. Note that the image will be placed above or below the text on smaller screens such as mobile phones.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_image_width',
    'label' => 'Image width',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-side_by_side_image_and_text-field_parapg_text'.
  $field_instances['paragraphs_item-side_by_side_image_and_text-field_parapg_text'] = array(
    'bundle' => 'side_by_side_image_and_text',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter the text to be shown alongside the image.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_text',
    'label' => 'Text',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-soundcloud_player-field_soundcloud_url'.
  $field_instances['paragraphs_item-soundcloud_player-field_soundcloud_url'] = array(
    'bundle' => 'soundcloud_player',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or more URLs which point to a Soundcloud audio page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'soundcloudfield',
        'settings' => array(
          'player_type' => 'visual',
        ),
        'type' => 'soundcloud_html5',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_soundcloud_url',
    'label' => 'Soundcloud URL',
    'required' => 1,
    'settings' => array(
      'autoplay' => FALSE,
      'color' => 'ff7700',
      'height' => 81,
      'height_sets' => 305,
      'html5_player_height' => 166,
      'html5_player_height_sets' => 450,
      'showartwork' => FALSE,
      'showcomments' => FALSE,
      'showplaycount' => FALSE,
      'soundcloudplayer' => array(
        'autoplay' => 0,
        'color' => 'ff7700',
        'flash_player' => array(
          'height' => 81,
          'height_sets' => 305,
          'showcomments' => 0,
        ),
        'html5_player' => array(
          'html5_player_height' => 166,
          'html5_player_height_sets' => 450,
        ),
        'showartwork' => 1,
        'showplaycount' => 0,
        'visual_player' => array(
          'visual_player_height' => 450,
        ),
        'width' => 100,
      ),
      'user_register_form' => FALSE,
      'visual_player_height' => 450,
      'width' => 100,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'soundcloudfield',
      'settings' => array(),
      'type' => 'soundcloud_url',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-telephone_number-field_parapg_phone_number'.
  $field_instances['paragraphs_item-telephone_number-field_parapg_phone_number'] = array(
    'bundle' => 'telephone_number',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the phone number. Be careful to ensure it is formatted correctly - this field will not check that you have formatted the number correctly because of the wide variety of ways in which numbers can be displayed.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_phone_number',
    'label' => 'Phone number',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-telephone_number-field_parapg_phone_number_title'.
  $field_instances['paragraphs_item-telephone_number-field_parapg_phone_number_title'] = array(
    'bundle' => 'telephone_number',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide the title for this phone number, for example "Main office" or "Fax".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_phone_number_title',
    'label' => 'Phone number title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_1'.
  $field_instances['paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_1'] = array(
    'bundle' => 'two_three_or_four_column_wysiwyg',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_col_1',
    'label' => 'Column 1 content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_2'.
  $field_instances['paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_2'] = array(
    'bundle' => 'two_three_or_four_column_wysiwyg',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_col_2',
    'label' => 'Column 2 content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_3'.
  $field_instances['paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_3'] = array(
    'bundle' => 'two_three_or_four_column_wysiwyg',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '(Note that this field will be ignored if the number of columns, above, is set to two.)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_col_3',
    'label' => 'Column 3 content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_4'.
  $field_instances['paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_col_4'] = array(
    'bundle' => 'two_three_or_four_column_wysiwyg',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '(Note that this field will be ignored if the number of columns, above, is set to two or three.)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_col_4',
    'label' => 'Column 4 content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_columns'.
  $field_instances['paragraphs_item-two_three_or_four_column_wysiwyg-field_parapg_columns'] = array(
    'bundle' => 'two_three_or_four_column_wysiwyg',
    'default_value' => array(
      0 => array(
        'value' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_columns',
    'label' => 'Number of columns',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-views_paragraph-field_parapg_views_view'.
  $field_instances['paragraphs_item-views_paragraph-field_parapg_views_view'] = array(
    'bundle' => 'views_paragraph',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the view and display which you want to show.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_parapg_views_view',
    'label' => 'View to display',
    'required' => 1,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'list_node_page_titles' => 0,
        'manbo_backlist' => 0,
        'manbosamjo_backlist' => 0,
        'manbosamjo_books' => 0,
        'manbosamjo_people' => 0,
        'manbosamjo_people_in_prize' => 0,
        'manbosamjo_prizes' => 0,
        'page_images_block' => 0,
        'photo_galleries' => 0,
        'press_releases' => 0,
        'test_content_nodes' => 0,
        'webform_analysis' => 0,
        'webform_results' => 0,
        'webform_submissions' => 0,
        'webform_webforms' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-wysiwyg-field_paragraph_wysiwyg'.
  $field_instances['paragraphs_item-wysiwyg-field_paragraph_wysiwyg'] = array(
    'bundle' => 'wysiwyg',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_wysiwyg',
    'label' => 'WYSIWYG',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-youtube_video-field_parapg_youtube_video_url'.
  $field_instances['paragraphs_item-youtube_video-field_parapg_youtube_video_url'] = array(
    'bundle' => 'youtube_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide the URL of a YouTube or Vimeo video. The video must be set to be publicly visible.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_parapg_youtube_video_url',
    'label' => 'YouTube/Vimeo video URL',
    'required' => 1,
    'settings' => array(
      'allowed_providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 1,
      'description_length' => 128,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(Note that this field will be ignored if the number of columns, above, is set to two or three.)');
  t('(Note that this field will be ignored if the number of columns, above, is set to two.)');
  t('<p><strong>Provide the last part of this page\'s URL - the part after the last slash. Do not use hyphens, underscores, slashes, punctuation, spaces, or uppercase, and do not start with a number.</strong></p>
<p>Examples:</p>
<ul>
<li>myawesomepage</li>
<li>helpandinformation</li>
<li>monkeysandbananas</li>
</ul>');
  t('About Child Pages Listing paragraphs');
  t('About this paragraph');
  t('Add one or more links. You can enter internal links - links which point to pages on this website - or external links which point to another website. Please check that your links are correct and don\'t lead to a "page not found" error.');
  t('Add one or more slides to this carousel. Each slide should contain an image to be shown on desktop-sized screens, an image for mobile screens (typically in portrait orientation), and an optional URL to another page on this site to link the images to. Images will be scaled to fit within a pre-defined size, so for consistency, you should ensure all desktop-sized images are the same dimensions, and that all mobile-sized images have equal dimensions, too.');
  t('Address');
  t('Below-images caption');
  t('Carousel slides');
  t('Carousel width');
  t('Choose how wide the image should be in relation to the full-width of the page. Note that the image will be placed above or below the text on smaller screens such as mobile phones.');
  t('Choose the heading level - i.e. its size. Heading 2 is the largest available - heading 1 is reserved by the content management system for SEO purposes.');
  t('Choose the view and display which you want to show.');
  t('Choose what font style should be applied to this paragraph; you can choose either "intro text" style, which is a non-italicised serif font, or "quote style", which is a serif font such as Times in italics.');
  t('Choose what kind of contact information this is.');
  t('Choose what ratio this image should be cropped to. Images will scale up to the window\'s width, or the image\'s full width if smaller than the window width.');
  t('Choose whether this carousel should be the same width as the page content, or the full width of the window?');
  t('Choose which side the image should be shown on.');
  t('Column 1 content');
  t('Column 2 content');
  t('Column 3 content');
  t('Column 4 content');
  t('Company Logo');
  t('Contact information');
  t('Desktop-sized image');
  t('Divide links into columns');
  t('E-mail address');
  t('E-mail title');
  t('Enter contact information here. For each item, choose whether it is a telephone number, e-mail address, web address, or a postal address. Web addresses and e-mail addresses will be displayed as links; telephone numbers will be displayed as links on mobile devices to allow click-to-call. Postal addresses can be linked to a Google Maps search page.');
  t('Enter one or more URLs which point to a Soundcloud audio page.');
  t('Enter the content type which you wish to display.');
  t('Enter the e-mail address. This will be shown as a "mailto" link which will try to open the visitor\'s e-mail client.');
  t('Enter the name of this address to be displayed alongside the address, for example "Main office".');
  t('Enter the phone number. Be careful to ensure it is formatted correctly - this field will not check that you have formatted the number correctly because of the wide variety of ways in which numbers can be displayed.');
  t('Enter the text to be shown alongside the image.');
  t('Enter the text to be shown as a heading above any child pages.');
  t('Enter the title of this e-mail address, for example "Enquiries", "Personal", etc.');
  t('Files');
  t('Full-width or normal width?');
  t('Heading');
  t('Heading level');
  t('Heading text');
  t('If more items of content are found than the total number you wish to display, you can show links below the content to allow site users to view more results.');
  t('If you want to create a jump link but not show it at the top of the page, un-tick this box.');
  t('Image');
  t('Image ratio');
  t('Image side');
  t('Image width');
  t('Images');
  t('Jump link slug');
  t('Link this slide to another page?');
  t('Link to page');
  t('Links');
  t('Map');
  t('Mobile image');
  t('Name of address');
  t('Number of columns');
  t('Optionally, click the "Set map marker" button to display a map centred on an address or a location of your choosing.');
  t('Optionally, link this carousel slide to another page in this site.');
  t('Optionally, you can create a "jump link" anchor, and visitors to this page will be able to add the following to the URL (for example) to jump to this heading: #jump-link-slug. So it you enter <em>pink-monkey</em> here, you can jump to this heading by adding #pink-monkey to the page URL. For the best URLs, use only lowercase letters, numbers and hyphens.');
  t('Page summary');
  t('Page to display');
  t('Paragraphs');
  t('Phone number');
  t('Phone number title');
  t('Please make sure that you provide a full, working URL, beginning with http:// or https://');
  t('Postal address');
  t('Promo banners show a full-width letter-box shaped image. Upload a high resolution, high quality image for the best impact.');
  t('Provide a summary of this page\'s content. This will be displayed in teaser views, search results and landing pages.');
  t('Provide a title to identify this contact. For example, if this is a telephone number for the company\\\'s main switchboard, you might enter, "Main switchboard". Or, for the customer services e-mail address, you might enter "Customer services". You don\'t need to specify that this is an e-mail address, telephone number, etc, here.');
  t('Provide an optional caption to display below the images.');
  t('Provide the URL of a YouTube or Vimeo video. The video must be set to be publicly visible.');
  t('Provide the heading to be displayed');
  t('Provide the text to show if there are no child pages beneath this page. If you leave this blank, no text will be shown.');
  t('Provide the title for this phone number, for example "Main office" or "Fax".');
  t('Should this node always be allowed to expand to the full page width, or should it be limited to the normal content width on larger screens, with left and right margins?');
  t('Show a pager?');
  t('Show content of type');
  t('Show each slide for how many seconds?');
  t('Show forward/back controls?');
  t('Show how many items?');
  t('Show jump link at top of page?');
  t('Show page title?');
  t('Show slide "pips"?');
  t('Show this text overlay?');
  t('Show up to how many items? If more than this number of items are found, you can show a pager with links to allow the user to load subsequent pages of results.');
  t('Slide sub-title');
  t('Slide title');
  t('Sort content');
  t('Soundcloud URL');
  t('Style');
  t('Subtitle');
  t('Telephone/fax number');
  t('Text');
  t('Text and background colours');
  t('Text overlays');
  t('Text to show if there are no child pages');
  t('Title');
  t('Title of contact');
  t('Type of contact');
  t('Type the name of an existing page to display it in this paragraph - <a href="/node/add" target="_blank">create a new page here first</a> if necessary. You can show any kind of content here.');
  t('URL Slug');
  t('Un-tick this checkbox to hide this text overlay.');
  t('Un-tick to hide the left/right controls which let a visitor switch to the next or previous slide.');
  t('Un-tick to hide the row of "dots" which represent the carousel\'s slides. Visitors can jump to a particular slide by clicking its corresponding dot.');
  t('Upload a high-quality image which will be shown alongside the text paragraph.');
  t('Upload a logo to be shown alongside this contact information. Use a high-quality image which is at least 200 pixels wide and high.');
  t('Upload an image to be displayed on smaller screens. The image will be scaled down to fit within 600x600 pixels. If you don\'t have a mobile-specific image, you can re-upload the desktop image, but note that the scaling process may make the image appear too small.');
  t('Upload one or more files. You can upload most types of document, images, and Zip archives, which can be used to upload other types of file which aren\'t explicitly allowed here.');
  t('Upload one or more images. Note that only the first two images are shown; to access further images, you must click an image and use the left or right cursor keys to navigate through the popup gallery. If you wish to display more than two images, create a new images paragraph below this one.');
  t('Upload the image which should be shown on larger displays. Typically, this image will be in landscape format. The image will be displayed scaled to fit within 1200px by 600px.');
  t('View to display');
  t('WYSIWYG');
  t('Web address');
  t('You can add an optional sub-title which will be shown bottom-centre on your slide, below any slide title, if entered.');
  t('You can add an optional title which will be shown in the bottom-centre of the slide. Be careful not to enter a title which will be too large to fit inside the carousel image on mobile and desktop displays.');
  t('You can configure up to three text overlays. If you have more than one overlay, each overlay is full-height and occupies either half or one-third of the promo box\'s width. The position of the text overlay is relative to the position of its part of the promo box, so if you set the second of three text overlays to be bottom-right positioned, it will sit in the bottom-right of the middle third of the promo box.');
  t('You can display links in columns (as long as you have more than one link, of course).');
  t('You can provide a heading to be displayed in larger text above this contact information, for example to show that the contact information shown here is for a particular division or team.');
  t('YouTube/Vimeo video URL');

  return $field_instances;
}
