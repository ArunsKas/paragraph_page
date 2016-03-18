/**
 * @file: paragraph_page.js
 *
 * Little JS nips and tucks for the Paragraphs Page feature.
 */

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";

  /**
   * If we have one or more Custom Content Paragraphs on the page, find pager
   * links in the paragraphs and make sure that they have a hashlink appended
   * so the user doesn't have to scroll back down the page when the click to
   * view the next/previous page of results.
   */
  Drupal.behaviors.paragraphsPageUpdatePagerLinks = {
    attach: function(context, settings) {
      // Find elephants with a class of .paragraphs-item-update-pager-links
      $('.paragraphs-item-update-pager-links').each(function(counter) {
        // Get the element's ID = this will be our jump link.
        var elementId = $(this).attr('id');

        // Append a jumplink onto the URLs in this element's pager, if found.
        $(this).find('ul.pager a').each(function () {
          paragraphsPageAddJumpLinkToPagerLink($(this), elementId)
        });

        $(this).find('ul.pagination a').each(function() {
          paragraphsPageAddJumpLinkToPagerLink($(this), elementId)
        });
      });

      function paragraphsPageAddJumpLinkToPagerLink(thisjQueryObject, elementId) {
        thisjQueryObject.attr('href', thisjQueryObject.attr('href') + '#' + elementId);
      }
    }
  };
})(jQuery, Drupal);
