<?php
/**
 * @file
 * paragraphs-item--child-pages-listing.tpl.php
 */
?>

<div class="paragraphs-item paragraphs-item--child-pages-listing">
  <div class="row">
    <div class="container">
      <div class="col-md-12">
        <?php if ($field_parapg_childpages_heading = render($content['field_parapg_childpages_heading'])): ?>
          <h3 class="child-pages-listing-title"><?php print $field_parapg_childpages_heading ?></h3>
        <?php endif ?>

        <?php if ($child_pages_list = greyhead_customisations_get_child_pages()): ?>
          <?php print theme('greyhead_customisations_child_pages', array('child_pages_list' => $child_pages_list)) ?>
        <?php elseif ($field_parapg_childpages_emptytxt = render($content['field_parapg_childpages_emptytxt'])): ?>
          <div class="message"><?php print t('There are no pages in this section.') ?></div>
        <?php endif ?>
      </div>
    </div>
  </div>
</div>
