<?php
/**
 * @file
 * paragraphs-item--side-by-side-image-and-text.tpl.php
 */

// Get the column classes.
$image_cols = intval($content['field_parapg_image_width']['#items'][0]['value']);
$image_class = 'col-md-' . $image_cols;
$text_class = 'col-md-' . (12 - $image_cols)

?>

<div class="paragraphs-item paragraphs-item--side-by-side-image-text">
  <div class="row">
    <div class="container">
      <?php
      // Are we showing image on the left?
      if ($content['field_parapg_image_side']['#items'][0]['value'] == 'left'): ?>
        <div class="image <?php print $image_class ?>">
          <?php print render($content['field_parapg_image']) ?>
        </div>
      <?php endif ?>

      <div class="text <?php print $text_class ?>">
        <?php print render($content['field_parapg_text']) ?>
      </div>

      <?php
      // Are we showing image on the right?
      if ($content['field_parapg_image_side']['#items'][0]['value'] == 'right'): ?>
        <div class="image <?php print $image_class ?>">
          <?php print render($content['field_parapg_image']) ?>
        </div>
      <?php endif ?>
    </div>
  </div>
</div>
