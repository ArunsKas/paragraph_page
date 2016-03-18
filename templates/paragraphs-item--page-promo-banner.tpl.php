<?php
/**
 * @file
 * paragraphs-item--page-promo-banner.tpl.php
 */

// Set some variaboos here.
$image_style = $content['field_paragraph_image_ratio']['#items'][0]['value'];

$image_uri = image_style_url($image_style, $content['field_paragraph_promo_image']['#items'][0]['uri']);
$image_alt = $content['field_paragraph_promo_image']['#items'][0]['alt'];
$image_title = $content['field_paragraph_promo_image']['#items'][0]['title'];

/**
 * Loop through each of the field collections and assemble the variables to
 * create our text overlays.
 */
$link_tag_open = $link_tag_close = '';
$field_paragraph_text_overlays = array();

foreach (element_children($content['field_paragraph_text_overlays']) as $field_paragraph_text_overlay) {
  $field_paragraph_text_overlay_element = reset($content['field_paragraph_text_overlays'][$field_paragraph_text_overlay]['entity']['field_collection_item']);

  // Is this text field disabled?
  if ($field_paragraph_text_overlay_element['field_paragraph_text_enabled']['#items'][0]['value'] == 0) {
    continue;
  }

  // Do we have a link?
  if (array_key_exists('field_paragraph_link_to_page', $field_paragraph_text_overlay_element)) {
    $link_tag_open = '<a href="' . url($field_paragraph_text_overlay_element['field_paragraph_link_to_page']['#items'][0]['url']) . '">';
    $link_tag_close = '</a>';
  }

  // Do we have title and/or subtitle?
  $title = $subtitle = NULL;
  if (array_key_exists('field_paragraph_title', $field_paragraph_text_overlay_element)) {
    $title = '<h2 class="title">' . $link_tag_open . $field_paragraph_text_overlay_element['field_paragraph_title']['#items'][0]['safe_value'] . $link_tag_close . '</h2>';
  }

  if (array_key_exists('field_paragraph_subtitle', $field_paragraph_text_overlay_element)) {
    // Disabling subtitle link.
    //$subtitle = '<p class="subtitle">' . $link_tag_open . $field_paragraph_text_overlay_element['field_paragraph_subtitle']['#items'][0]['safe_value'] . $link_tag_close . '</p>';
    $subtitle = '<p class="subtitle">' . $field_paragraph_text_overlay_element['field_paragraph_subtitle']['#items'][0]['safe_value'] . '</p>';
  }

  // Get the text colour class.
  $text_classes = ' text-colour-' . $field_paragraph_text_overlay_element['field_paragraph_text_colour']['#items'][0]['value'];

  $field_paragraph_text_overlays[$field_paragraph_text_overlay] = array(
    'title' => $title,
    'subtitle' => $subtitle,
    'classes' => $text_classes,
  );
}

// Work out the width of the text overlays, if we have any.
$show_overlays = $text_overlay_container_class = NULL;

if (count($field_paragraph_text_overlays) > 0) {
  $show_overlays = TRUE;
  $text_overlay_container_class = 'text-overlay-' . count($field_paragraph_text_overlays) . '-col';
}

?>

<div class="paragraphs-item paragraphs-item--page-promo-banner">
  <div class="paragraphs-item--page-promo-banner-inside">
    <span class="image"><?php print $link_tag_open ?>
      <img src="<?php print $image_uri ?>" alt="<?php print $image_alt ?>" title="<?php print $image_title ?>"/><?php print $link_tag_close ?></span>

    <?php if ($show_overlays): ?>
      <div class="text-overlays-container">
        <?php foreach ($field_paragraph_text_overlays as $overlay_number => $field_paragraph_text_overlay): ?>
          <div class="text-overlay <?php print $text_overlay_container_class ?> overlay-<?php print ($overlay_number + 1) ?>-of-<?php print count($field_paragraph_text_overlays) ?> <?php print $field_paragraph_text_overlay['classes'] ?>">
            <div class="text-overlay-inner">
              <div class="text">
                <?php print $field_paragraph_text_overlay['title'] ?>
                <?php print $field_paragraph_text_overlay['subtitle'] ?>
              </div>
            </div>
          </div>
        <?php endforeach ?>
      </div>
    <?php endif ?>
  </div>
</div>
