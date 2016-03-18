<?php
/**
 * @file
 * paragraphs-item--large-quote-intro-text.tpl.php
 */

// Set some variaboos for ease of programming.
$caption = '';
if (array_key_exists('field_paragraphs_caption', $content)) {
  $caption = $content['field_paragraphs_caption'][0]['#markup'];
}
?>

<div class="paragraphs-item paragraphs-item--images">
  <div class="row">
    <div class="container">
      <div class="col-md-12">
        <?php print render($content['field_paragraph_images']) ?>

        <?php if (!empty($caption)): ?>
          <div class="paragraphs-item paragraphs-item--images-caption"><?php print $caption ?></div>
        <?php endif ?>
      </div>
    </div>
  </div>
</div>
