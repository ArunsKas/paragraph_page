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



// Add the backlist navigation item if we are on a backlist page
$args = arg();
if ($args[1] == 'backlist') {
  $current_year = $args[2];

  $prize_year_vocab = array();
  //$prize_year_vocab = taxonomy_get_tree(9);
  $all_years = array();
  $results = array();

  if($args[0] == 'international') {
    $results = views_get_view_result('manbosamjo_prizes', 'entityreference_4');
  } elseif($args[0] == 'fiction') {
    $results = views_get_view_result('manbosamjo_prizes', 'entityreference_3');
  }

  foreach ($results as $result) {
    $prize_year_vocab[] = $result->field_field_prize_prize_year[0]['raw']['taxonomy_term'];
  }

  foreach ($prize_year_vocab as $key => $year) {
    // build options
    if($current_year == $year->name) {
      $next_year = $year->name + 1;
      $prev_year = $year->name - 1;
      $all_years[] = "<option value='/international/backlist/" . $year->name . "' selected>" . $year->name . "</option>";
    } else {
      $all_years[] = "<option value='/international/backlist/" . $year->name . "'>" . $year->name . "</option>";
    }
  }

  $last_year = $prize_year_vocab[0];
  $first_year = end($prize_year_vocab);

  if ($prev_year < $first_year->name) {
    $prev_year = null;
  }

  if ($next_year > $last_year->name) {
    $next_year = null;
  }

  $prev_year;
  $next_year;
  $all_years;
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
                <?php if($args[1] == 'backlist'): ?>
                  <div class="backlist-navigation">
                    <?php if ($prev_year != null): ?>
                      <div class="previous">
                        <a href="/international/backlist/<?php print $prev_year; ?>">
                          <i class="fa fa-long-arrow-left" aria-hidden="true"></i>
                        </a>
                      </div>
                    <?php else: ?>
                      <div class="previous">
                        <span class="disabled">
                          <i class="fa fa-long-arrow-left" aria-hidden="true"></i>
                        </span>
                      </div>
                    <?php endif; ?>

                    <select class="form-control form-select" onChange="window.location.href=this.value">
                      <?php foreach($all_years as $key => $option): ?>
                        <?php print $option; ?>
                      <?php endforeach; ?>
                    </select>

                    <?php if ($next_year != null): ?>
                      <div class="next">
                        <a href="/international/backlist/<?php print $next_year; ?>">
                          <i class="fa fa-long-arrow-right" aria-hidden="true"></i>
                        </a>
                      </div>
                    <?php else: ?>
                      <div class="next">
                        <span class="disabled">
                          <i class="fa fa-long-arrow-right" aria-hidden="true"></i>
                        </span>
                      </div>
                    <?php endif; ?>
                  </div>
                <?php endif; ?>
              </div>
            </div>
          </div>
        <?php endforeach ?>
      </div>
    <?php endif ?>
  </div>
</div>
