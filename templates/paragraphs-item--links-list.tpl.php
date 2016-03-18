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

// Work out how many items per column.
$items_per_column = ceil(count($parapg_links_children) / $columns);

?>

<div class="paragraphs-item paragraphs-item--links-list">
  <div class="row">
    <div class="container">
      <div class="<?php print $column_class ?>">
        <?php $counter = 0 ?>

        <?php foreach ($parapg_links_children as $field_parapg_link_key): ?>
        <div class="links-list-item">
          <?php print render($content['field_parapg_links'][$field_parapg_link_key]) ?>
        </div>

        <?php
        // If this is the last item which should be in a column, and we're not
        // at the end of the list, add a column class.
        if (((($counter + 1) % $items_per_column) == 0) && (($counter + 1) < count($parapg_links_children))): ?>
      </div>
      <div class="<?php print $column_class ?>">
        <?php endif ?>

        <?php
        // Increment our counter.
        $counter++ ?>
        <?php endforeach ?>
      </div>
    </div>
  </div>
</div>
