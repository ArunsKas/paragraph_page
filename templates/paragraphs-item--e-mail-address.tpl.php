<?php
/**
 * @file
 * paragraphs-item--e-mail-address.tpl.php
 */
?>

<div class="paragraphs-item paragraphs-item--email-address">
  <div class="row">
    <div class="container">
      <?php if ($field_parapg_email_title = render($content['field_parapg_email_title'])): ?>
        <div class="email-address-with-name">
          <div class="email-address-name col-md-6">
            <h3><?php print $field_parapg_email_title ?></h3>
          </div>

          <div class="email-address-content col-md-6">
            <?php print render($content['field_parapg_email_address']) ?>
          </div>
        </div>
      <?php else: ?>
        <div class="email-address-without-name col-md-12">
          <div class="email-address-content">
            <?php print render($content['field_parapg_email_address']) ?>
          </div>
        </div>
      <?php endif ?>
    </div>
  </div>
</div>
