<?php
/**
 * @file
 * paragraphs-item--large-quote-intro-text.tpl.php
 */

// Set some variaboos for ease of programming.
$caption = '';
if (array_key_exists('field_paragraphs_caption', $content)) {
  $caption = render($content['field_paragraphs_caption']);
}
?>

<div class="paragraphs-item paragraphs-item--images">
  <div class="row">
    <div class="container">
      <?php //print render($content['field_paragraph_images']) ?>

      <?php foreach (element_children($content['field_paragraph_images']) as $field_paragraph_image) { ?>
        <div class="col-md-3 paragraphs-item--image">
          <?php print render($content['field_paragraph_images'][$field_paragraph_image]) ?>
        </div>
      <?php } ?>

      <?php if (!empty($caption)): ?>
        <div class="col-md-12 paragraphs-item--images-caption">
          <?php print $caption ?>
        </div>
      <?php endif ?>
    </div>
  </div>
</div>
