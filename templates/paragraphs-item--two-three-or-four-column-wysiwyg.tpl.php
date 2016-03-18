<?php
/**
 * @file
 * paragraphs-item--two-three-or-four-column-wysiwyg.tpl.php
 */

// Work out how many columns we need.
$columns = $content['field_parapg_columns']['#items'][0]['value'];

// Set the column class.
$column_class = 'col-md-' . (12 / $columns);

?>

<div class="paragraphs-item paragraphs-item--two-three-or-four-column-wysiwyg">
  <div class="row">
    <div class="container">
      <?php for ($counter = 0; $counter < $columns; $counter++): ?>
        <div class="<?php print $column_class ?> column-<?php print ($counter + 1) ?>-of-<?php print $columns ?>">
          <?php print render($content['field_parapg_col_' . ($counter + 1)]) ?>
        </div>
      <?php endfor ?>
    </div>
  </div>
</div>
