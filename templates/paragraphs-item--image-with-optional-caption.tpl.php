<?php
/**
 * @file
 * paragraphs-item--image-with-optional-caption.tpl.php
 */
?>

<div class="paragraphs-item paragraphs-item--image-with-optional-caption container-fluid">
  <div class="row">
    <div class="image-and-caption">
      <div class="image">
        <?php print render($content['field_parapg_image_w_caption_img']); ?>
      </div>

      <?php if ($field_parapg_image_w_caption_cap = render($content['field_parapg_image_w_caption_cap'])): ?>
        <div class="caption">
          <?php print $field_parapg_image_w_caption_cap; ?>
        </div>
      <?php endif ?>
    </div>
  </div>
</div>
