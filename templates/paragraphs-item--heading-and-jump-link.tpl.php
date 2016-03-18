<?php
/**
 * @file
 * paragraphs-item--heading-and-jump-link.tpl.php
 */

// Set some variaboos for ease of programming.
$heading_level = $content['field_paragraph_heading_level']['#items'][0]['value'];
$heading = $content['field_paragraph_heading']['#items'][0]['safe_value'];
$jump_link_slug = '';

if (isset($content['field_paragraph_jump_link_slug'],
  $content['field_paragraph_jump_link_slug']['#items'],
  $content['field_paragraph_jump_link_slug']['#items'][0],
  $content['field_paragraph_jump_link_slug']['#items'][0]['safe_value'])) {
  $jump_link_slug = $content['field_paragraph_jump_link_slug']['#items'][0]['safe_value'];
}
?>

<div class="paragraphs-item paragraphs-item--heading-and-jump-link">
  <div class="row">
    <div class="container">
      <div class="col-md-12">
        <a name="<?php print $jump_link_slug ?>"></a>
        <<?php print $heading_level ?> class="paragraphs-title"><?php print $heading ?></<?php print $heading_level ?>>
    </div>
  </div>
</div>
