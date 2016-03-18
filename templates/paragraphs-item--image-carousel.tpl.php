<?php
/**
 * @file
 * paragraphs-item--image-carousel.tpl.php
 */

// Get the number of milliseconds to display each slide for; if zero, then the
// slideshow will be paused.
$slide_time_ms = (intval($content['field_parapg_carousel_slide_time']['#items'][0]['value']) * 1000);

// Should we show carousel controls?
$show_controls = (intval($content['field_parapg_carousel_slide_ctrl']['#items'][0]['value']) == 1);

// Should we show slides' pips?
$show_pips = (intval($content['field_parapg_carousel_slide_pips']['#items'][0]['value']) == 1);

// Should the carousel be constrained to the content width, or expand to full
// page width?
$carousel_container_class = $content['field_parapg_carousel_container']['#items'][0]['value'];

// Set a random carousel ID.
$carousel_id = 'paragraphs-carousel-' . substr(md5(rand()), 0, 10);

// Get an array of the child keys.
$field_parapg_carousel_slides_keys = element_children($content['field_parapg_carousel_slides']);
?>

<div class="paragraphs-item paragraphs-item--image-carousel">
  <div class="row">
    <div class="<?php print $carousel_container_class ?>">
      <!-- Attention themers - this carousel ID is regenerated on each page
           load, so don't hang any CSS or JS code off this id, because it
           won't work :o) -->
      <div id="<?php print $carousel_id ?>" class="carousel slide" data-ride="carousel" data-interval="<?php print $slide_time_ms ?>">

        <?php if ($show_pips && (count($field_parapg_carousel_slides_keys) > 1)): ?>
          <!-- Indicators -->
          <ol class="carousel-indicators">
            <?php $counter = 0 ?>
            <?php foreach ($field_parapg_carousel_slides_keys as $field_parapg_carousel_slide_key): ?>
              <li data-target="#<?php print $carousel_id ?>" data-slide-to="<?php print $counter ?>" class="<?php print ($counter == 0 ? 'active' : '') ?>"></li>
              <?php $counter++ ?>
            <?php endforeach ?>
          </ol>
        <?php endif ?>

        <div class="carousel-inner" role="listbox">

          <?php $counter = 0 ?>
          <?php foreach ($field_parapg_carousel_slides_keys as $field_parapg_carousel_slide_key): ?>

            <?php
            // Get the fieldgroup render array.
            $carousel_slide_fieldgroup = reset($content['field_parapg_carousel_slides'][$field_parapg_carousel_slide_key]['entity']['field_collection_item']) ?>

            <?php // @TODO: do all of this with the correct API functions instead of directly addressing render arrays =o) ?>

            <?php // Get image URLs ?>
            <?php $desktop_image_url = image_style_url(
              $carousel_slide_fieldgroup['field_carousel_slide_img_desktop'][0]['#image_style'],
              $carousel_slide_fieldgroup['field_carousel_slide_img_desktop'][0]['#item']['uri']) ?>

            <?php $mobile_image_url = image_style_url(
              $carousel_slide_fieldgroup['field_carousel_slide_img_mobile'][0]['#image_style'],
              $carousel_slide_fieldgroup['field_carousel_slide_img_mobile'][0]['#item']['uri']) ?>

            <?php // Get image alt text ?>
            <?php $desktop_image_alt = $carousel_slide_fieldgroup['field_carousel_slide_img_desktop'][0]['#item']['alt'] ?>
            <?php $mobile_image_alt = $carousel_slide_fieldgroup['field_carousel_slide_img_mobile'][0]['#item']['alt'] ?>

            <?php // Set a default wrapper for when we have no linkidge. ?>
            <?php $link_opener = '<span class="carousel-slide-no-link">' ?>
            <?php $link_closer = '</span>' ?>

            <?php // Do we need to make it clickaboo? ?>
            <?php if (array_key_exists('field_carousel_slide_img_link', $carousel_slide_fieldgroup)): ?>
              <?php $link_opener = '<a href="' . $carousel_slide_fieldgroup['field_carousel_slide_img_link']['#items'][0]['url'] . '" class="carousel-slide-with-link">' ?>
              <?php $link_closer = '</a>' ?>
            <?php endif ?>

            <?php // Do we have a slide title or subtitle? ?>
            <?php $slide_title = $slide_subtitle = NULL ?>
            <?php if (array_key_exists('field_carousel_slide_title', $carousel_slide_fieldgroup)): ?>
              <?php $slide_title = $carousel_slide_fieldgroup['field_carousel_slide_title']['#items'][0]['safe_value'] ?>
            <?php endif ?>

            <?php if (array_key_exists('field_carousel_slide_subtitle', $carousel_slide_fieldgroup)): ?>
              <?php $slide_subtitle = $carousel_slide_fieldgroup['field_carousel_slide_subtitle']['#items'][0]['safe_value'] ?>
            <?php endif ?>

            <?php // Okay, let's actually output some shizzle... ?>
            <div class="item<?php print ($counter == 0 ? ' active' : '') ?>">
              <?php print $link_opener ?>
              <img class="slide-<?php print $counter ?> carousel-desktop-image" src="<?php print $desktop_image_url ?>" alt="<?php print $desktop_image_alt ?>"/>
              <img class="slide-<?php print $counter ?> carousel-mobile-image" src="<?php print $mobile_image_url ?>" alt="<?php print $mobile_image_alt ?>"/>
              <?php print $link_closer ?>

              <?php if ($slide_title || $slide_subtitle): ?>
                <div class="container">
                  <div class="carousel-caption">
                    <?php if ($slide_title): ?>
                      <h2><?php print $link_opener . $slide_title . $link_closer ?></h2><?php endif ?>
                    <?php if ($slide_subtitle): ?>
                      <p><?php print $link_opener . $slide_subtitle . $link_closer ?></p><?php endif ?>
                  </div>
                </div>
              <?php endif ?>
            </div>

            <?php $counter++ ?>
          <?php endforeach ?>
        </div>

        <?php if ($show_controls && (count($field_parapg_carousel_slides_keys) > 1)): ?>
          <a class="left carousel-control" href="#<?php print $carousel_id ?>" role="button" data-slide="prev">
            <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
            <span class="sr-only">Previous</span>
          </a>
          <a class="right carousel-control" href="#<?php print $carousel_id ?>" role="button" data-slide="next">
            <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
            <span class="sr-only">Next</span>
          </a>
        <?php endif ?>
      </div>

    </div>
  </div>
</div>
