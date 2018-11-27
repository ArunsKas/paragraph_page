<?php
/**
 * @file
 * paragraphs-item--links-list.tpl.php
 */

// How many columns?
$columns = intval($content['field_parapg_links_columns']['#items'][0]['value']);

// Create the columns class.
$column_class = 'col-sm-' . (12 / $columns);

// Get the list of link array keys.
$parapg_links_children = element_children($content['field_parapg_links']);

// Create a counter.
$counter = 0;
?>

<div class="paragraphs-item paragraphs-item--links-list container">
  <div class="row">
    <?php
    // Hey, phpstorm, why the hell are you splitting this foreach?!
    foreach ($parapg_links_children

    as $field_parapg_link_key): ?>

    <div class="<?php print $column_class ?>">
      <div class="links-list-item">
        <?php print render($content['field_parapg_links'][$field_parapg_link_key]) ?>
      </div>
    </div>

    <?php
    // If this is the last item in the row, and we have further items to
    // display, start a new row.
    $counter++;

    if ((($counter % $columns) == 0) && ($counter < count($parapg_links_children))): ?>
  </div>
  <div class="row">
    <?php endif; ?>

    <?php endforeach; ?>
  </div>
</div>
