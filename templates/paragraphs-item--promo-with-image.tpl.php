<?php
/**
 * @file
 * paragraphs-item--side-by-side-image-and-text.tpl.php
 */

/**
 * Loop through each of the field collections and assemble the variables to
 * create our text overlays.
 */
$link_tag_open = $link_tag_close = '';

foreach (element_children($content['field_parapragh_promo_block']) as $field_paragraph_promo_block) {

  $field_paragraph_promo_block_element = reset($content['field_parapragh_promo_block'][$field_paragraph_promo_block]['entity']['field_collection_item']);

  // Do we have a link?
  if (array_key_exists('field_paragraph_link_to_page', $field_paragraph_promo_block_element)) {
    $link_tag_open = '<a href="' . url($field_paragraph_promo_block_element['field_paragraph_promo_link']['#items'][0]['url']) . '">';
    $link_tag_close = '</a>';
  }

  $category = NULL;
  if (array_key_exists('field_paragraph_promo_category', $field_paragraph_promo_block_element)) {
    $category = '<span class="category">' . $field_paragraph_promo_block_element['field_paragraph_promo_category']['#items'][0]['safe_value'] . '</span>';
  }

  // Do we have title and/or subtitle?
  $title = NULL;
  if (array_key_exists('field_paragraph_title', $field_paragraph_promo_block_element)) {
    $title = '<h2 class="title">' . $link_tag_open . $field_paragraph_promo_block_element['field_paragraph_title']['#items'][0]['safe_value'] . $link_tag_close . '</h2>';
  }

  // Do we have an image
  $image_src = NULL;
  if (array_key_exists('field_paragraph_promo_image', $field_paragraph_promo_block_element)) {
    $img_url = $field_paragraph_promo_block_element['field_paragraph_promo_image']['#items'][0]['uri'];
    $image_src = image_style_url("paragraph_promo_image_16to9", $img_url);
  }

  // Do we have a promo text
  $text = NULL;
  if (array_key_exists('field_paragraph_promo_text', $field_paragraph_promo_block_element)) {
    $text = '<p class="text">' . $field_paragraph_promo_block_element['field_paragraph_promo_text']['#items'][0]['safe_value'] . '</p>';
  }


  $field_paragraph_promo_blocks[$field_paragraph_promo_block] = array(
    'title' => $title,
    'category' => $category,
    'image_src' => $image_src,
    'text' => $text,
  );

}

?>

<div class="container pg-label">
  <h6><?php print t('You may also like:') ?></h6>
</div>

<div class="paragraphs-item paragraphs-item--promo-with-image">
  <div class="row">
    <div class="container">
      <?php foreach ($field_paragraph_promo_blocks as $field_paragraph_promo_block): ?>
        <div class="promo-block col-xs-12 col-sm-4">
          <?php print $field_paragraph_promo_block['category']; ?>
          <?php print $field_paragraph_promo_block['title']; ?>
          <img src="<?php print $field_paragraph_promo_block['image_src']; ?>">
          <?php print $field_paragraph_promo_block['text']; ?>
        </div>
      <?php endforeach ?>
    </div>
  </div>
</div>
