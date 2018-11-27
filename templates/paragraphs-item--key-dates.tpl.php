<?php
/**
 * @file
 * paragraphs-item--side-by-side-image-and-text.tpl.php
 */

/**
 * Loop through each of the field collections and assemble the variables to
 * create our key date blocks
 */

foreach (element_children($content['field_paragraph_key_date']) as $field_paragraph_key_date) {

  $field_paragraph_key_date_element = reset($content['field_paragraph_key_date'][$field_paragraph_key_date]['entity']['field_collection_item']);

  // Do we have title
  $title = NULL;
  if (array_key_exists('field_event_title', $field_paragraph_key_date_element)) {
    $title = '<h4 class="title">' . $field_paragraph_key_date_element['field_event_title']['#items'][0]['safe_value'] . '</h4>';
  }

  // Do we have an icon selected
  $icon = NULL;
  if (array_key_exists('field_event_icon', $field_paragraph_key_date_element)) {
    $icon = $field_paragraph_key_date_element['field_event_icon']['#items'][0]['value'];
    $icon = '<i class="fa fa-' . $icon . '"></i>';
  }

  // Do we have a date
  $date = NULL;
  if (array_key_exists('field_key_date', $field_paragraph_key_date_element)) {
    $date = new DateTime($field_paragraph_key_date_element['field_key_date']['#items'][0]['value']);
    $date = $date->format('d.m.y');
    $date = '<span class="key-date">' . $date . '</span>';
  }

  $field_paragraph_key_dates[$field_paragraph_key_date] = [
    'title' => $title,
    'icon' => $icon,
    'date' => $date,
  ];
}

?>

<div class="paragraphs-item paragraphs-item--key-dates container">
  <div class="row">
    <div class="intro">
      <?php if (!empty($content['field_paragraph_title']['#items'])): ?>
        <div class="strikethrough-container">
          <h2 class="title"><?php print $content['field_paragraph_title']['#items'][0]['safe_value']; ?></h2>
        </div>
      <?php endif; ?>

      <?php if (!empty($content['field_paragraph_text']['#items'])): ?>
        <?php print $content['field_paragraph_text']['#items'][0]['safe_value']; ?>
      <?php endif; ?>
    </div>
    <ol>
      <?php foreach ($field_paragraph_key_dates as $field_paragraph_key_date): ?>
        <li class="key-date">
          <?php print $field_paragraph_key_date['icon']; ?>
          <div>
            <?php print $field_paragraph_key_date['title']; ?>
            <?php print $field_paragraph_key_date['date']; ?>
          </div>
        </li>
      <?php endforeach ?>
    </ol>
  </div>
</div>
