<?php
/**
 * @file
 * paragraphs-item--node-reference.tpl.php
 */
?>

<div class="paragraphs-item paragraphs-item--node-reference">
  <div class="row">
    <div class="<?php print $content['field_parapg_noderef_width']['#items'][0]['value'] ?>">
      <div class="col-md-12">
        <?php foreach (element_children($content['field_page_to_display']) as $node_to_display): ?>
          <?php if ($content['field_parapg_noderef_show_title']['#items'][0]['value'] == 1): ?>
            <?php
            // Show the node title. Note we use #items as it's easier to drill
            // down into the array - the 0, 1, 2 etc arrays at the top of the
            // field_page_to_display array use the node ID as the array key, so
            // we would have to determine that with more code. Ick. ?>
            <h3 class="node-title"><?php print node_load($content['field_page_to_display']['#items'][$node_to_display]['target_id'])->title ?></h3>
          <?php endif ?>

          <?php print render($content['field_page_to_display'][$node_to_display]) ?>
        <?php endforeach ?>
      </div>
    </div>
  </div>
</div>
