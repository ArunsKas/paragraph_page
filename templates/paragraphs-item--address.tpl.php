<?php
/**
 * @file
 * paragraphs-item--address.tpl.php
 */
?>

<div class="paragraphs-item paragraphs-item--address">
  <div class="row">
    <div class="container">
      <?php if ($field_parapg_address_name = render($content['field_parapg_address_name'])): ?>
        <div class="address-with-name">
          <div class="address-name col-md-6">
            <h3><?php print $field_parapg_address_name ?></h3>
          </div>

          <div class="address-content col-md-6">
            <?php print render($content['field_parapg_address']) ?>
          </div>
        </div>
      <?php else: ?>
        <div class="address-without-name">
          <div class="address-content col-md-12">
            <?php print render($content['field_parapg_address']) ?>
          </div>
        </div>
      <?php endif ?>
    </div>
  </div>
</div>
