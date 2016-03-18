<?php
/**
 * @file
 * paragraphs-item--telephone-number.tpl.php
 */
?>

<div class="paragraphs-item paragraphs-item--telephone-number">
  <div class="row">
    <div class="container">
      <?php if ($field_parapg_phone_number_title = render($content['field_parapg_phone_number_title'])): ?>
        <div class="telephone-with-name">
          <div class="telephone-name col-md-6">
            <h3><?php print $field_parapg_phone_number_title ?></h3>
          </div>

          <div class="telephone-number col-md-6">
            <?php print render($content['field_parapg_phone_number']) ?>
          </div>
        </div>
      <?php else: ?>
        <div class="telephone-without-name">
          <div class="telephone-number col-md-12">
            <?php print render($content['field_parapg_phone_number']) ?>
          </div>
        </div>
      <?php endif ?>
    </div>
  </div>
</div>
