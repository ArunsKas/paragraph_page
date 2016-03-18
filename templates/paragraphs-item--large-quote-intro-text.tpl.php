<?php
/**
 * @file
 * paragraphs-item--large-quote-intro-text.tpl.php
 */

// Set some variaboos for ease of programming.
$text = $content['field_paragraph_text']['#items'][0]['safe_value'];
$style = $content['field_paragraph_style']['#items'][0]['value'];
?>

<div class="paragraphs-item paragraphs-item--large-quote-intro-text paragraphs-item--large-quote-intro-text-style-<?php print $style ?>">
  <div class="row">
    <div class="container">
      <div class="col-md-12">
        <?php print $text ?>
      </div>
    </div>
  </div>
</div>
