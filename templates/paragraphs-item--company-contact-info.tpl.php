<?php
/**
 * @file
 * paragraphs-item--company-contact-info.tpl.php
 */

// Do we have a logo and GMap? Set the column classes accordingly.
$field_co_cntct_map = render($content['field_co_cntct_map']);
$field_co_cntct_logo = render($content['field_co_cntct_logo']);

// Create a default set of column classes which assumes we only have the middle
// column.
$column_classes = array(NULL, 'col-md-12 col-sm-12', NULL);

if ($field_co_cntct_logo && $field_co_cntct_map) {
  // Logo and map.
  $column_classes = array(
    'col-md-3 col-sm-5',
    'col-md-4 col-sm-7',
    'col-md-5 col-sm-12',
  );
}
elseif (!$field_co_cntct_logo && $field_co_cntct_map) {
  // No logo but we have a map.
  $column_classes = array(NULL, 'col-md-7 col-sm-12', 'col-md-5 col-sm-12');
}
elseif ($field_co_cntct_logo && !$field_co_cntct_map) {
  // Logo but no map.
  $column_classes = array('col-md-4 col-sm-4', 'col-md-8 col-sm-8', NULL);
}

?>

<div class="paragraphs-item paragraphs-item--company-contact-info">
  <div class="row">
    <div class="container">
      <?php if ($field_co_cntct_logo): ?>
        <div class="<?php print $column_classes[0] ?>">
          <?php print $field_co_cntct_logo ?>
        </div>
      <?php endif ?>

      <div class="<?php print $column_classes[1] ?>">
        <?php // Do we have a heading to display? ?>
        <?php if (array_key_exists('field_co_cntct_heading', $content)): ?>
          <h3><?php print $content['field_co_cntct_heading'][0]['#markup'] ?></h3>
        <?php endif ?>

        <?php // Do we have links? (We might not...) ?>
        <?php if (array_key_exists('field_co_cntct_contact_links', $content)): ?>
          <ul class="contact-links">
            <?php foreach (element_children($content['field_co_cntct_contact_links']) as $field_co_cntct_contact_links_element_key): ?>
              <?php // Get the entity. ?>
              <?php $link_entity = reset($content['field_co_cntct_contact_links'][$field_co_cntct_contact_links_element_key]['entity']['field_collection_item']) ?>

              <li class="contact-link contact-link-type-<?php print $link_entity['field_co_cntct_fg_type'][0]['#markup'] ?>">
                <?php // Output the title. ?>
                <span class="contact-link-title"><?php print $link_entity['field_co_cntct_fg_title'][0]['#markup'] ?>:</span>

                <?php // Output the contact detail, linked if necessary. ?>
                <span class="contact-link">
              <?php switch ($link_entity['field_co_cntct_fg_type'][0]['#markup']) {
                case 'email': ?>
                  <?php // For email fields, the HTML has already been created. ?>
                  <?php print $link_entity['field_co_cntct_fg_email'][0]['#markup'] ?>
                  <?php break ?>

                <?php case 'telephone': ?>
                <?php case 'fax': ?>
                  <?php
                  // For telephone/fax fields set to be linked, we need to
                  // render the link. ?>
                  <?php if ($link_entity['field_co_cntct_fg_tel'][0]['#type'] == 'link'): ?>
                    <?php // Get the link options. ?>
                    <?php $link_options = array() ?>
                    <?php if (array_key_exists('#options', $link_entity['field_co_cntct_fg_tel'][0])): ?>
                      <?php $link_options = $link_entity['field_co_cntct_fg_tel'][0]['#options'] ?>
                    <?php endif ?>

                    <?php print l($link_entity['field_co_cntct_fg_tel'][0]['#title'], $link_entity['field_co_cntct_fg_tel'][0]['#href'], $link_options) ?>
                  <?php else: ?>
                    <?php // Just print the link title. ?>
                    <?php print $link_entity['field_co_cntct_fg_tel'][0]['#title'] ?>
                  <?php endif ?>
                  <?php break ?>

                <?php case 'url': ?>
                  <?php // Is this a valid URL? If yes, trim the protocol off it. ?>
                  <?php $url = $link_entity['field_co_cntct_fg_url'][0]['#markup'] ?>
                  <?php if (valid_url($url)): ?>
                    <?php $url_parsed = parse_url($url) ?>
                    <?php $url_friendly = $url_parsed['host'] ?>
                    <?php $url_friendly .= (isset($url_parsed['path']) ? $url_parsed['path'] : '') ?>
                    <?php $url_friendly .= (isset($url_parsed['query']) ? '?' . $url_parsed['query'] : '') ?>
                  <?php endif ?>

                  <?php print l($url_friendly, $link_entity['field_co_cntct_fg_url'][0]['#markup'], array('absolute' => TRUE)) ?>

                  <?php break ?>

                <?php case 'address': ?>
                  <?php // For addresses, we create a link to Google Maps. ?>
                  <?php print l($link_entity['field_co_cntct_fg_address'][0]['#markup'], 'https://maps.google.com?q=' . urlencode($link_entity['field_co_cntct_fg_address'][0]['#markup']), array('absolute' => TRUE)) ?>
                  <?php break ?>

                <?php } // switch ?>
              </span>

              </li>
            <?php endforeach ?>
          </ul>
        <?php endif ?>
      </div>

      <?php if ($field_co_cntct_map): ?>
        <div class="<?php print $column_classes[2] ?>">
          <?php print $field_co_cntct_map ?>
        </div>
      <?php endif ?>
    </div>
  </div>
</div>
