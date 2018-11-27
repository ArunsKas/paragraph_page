/**
 * @file: paragraph_page.js
 *
 * Little JS nips and tucks for the Paragraphs Page feature.
 */

var Drupal = Drupal || {};

(function ($, Drupal) {
  "use strict";

  /**
   * If we have one or more Custom Content Paragraphs on the page, find pager
   * links in the paragraphs and make sure that they have a hashlink appended
   * so the user doesn't have to scroll back down the page when they click to
   * view the next/previous page of results.
   */
  Drupal.behaviors.paragraphsPageUpdatePagerLinks = {
    attach: function (context, settings) {
      // Find elephants with a class of .paragraphs-item-update-pager-links
      $('.paragraphs-item-update-pager-links').each(function (counter) {
        // Get the element's ID = this will be our jump link.
        var elementId = $(this).attr('id');

        // Append a jumplink onto the URLs in this element's pager, if found.
        $(this).find('ul.pager a').each(function () {
          paragraphsPageAddJumpLinkToPagerLink($(this), elementId)
        });

        $(this).find('ul.pagination a').each(function () {
          paragraphsPageAddJumpLinkToPagerLink($(this), elementId)
        });
      });

      function paragraphsPageAddJumpLinkToPagerLink(thisjQueryObject, elementId) {
        thisjQueryObject.attr('href', thisjQueryObject.attr('href') + '#' + elementId);
      }
    }
  };

  /**
   * If we have jump-links on the page, make them "stick" to the top of the
   * page beneath the header navigation when the user scrolls down the page.
   */
  Drupal.behaviors.paragraphsStickyScrollJumpLinks = {
    attach: function (context, settings) {
      function moveScroller() {
        $('.stickyscroll-element').each(function () {

          // Find the stickyscroll anchor element which should be immediately
          // before this element.
          var $anchor = $(this).prev('.stickyscroll-anchor');
          var $scroller = $(this);

          // Copy the $scroller element into the $anchor and hide it until
          // we want to fix it to the top of the page. (Is this an awful
          // idea...?)
          var $scrollerClone = $scroller.clone();
          $scrollerClone.appendTo($anchor).hide();

          var move = function () {
            var windowScrollPosition = $(window).scrollTop();

            // Note we use the unary + operator to convert these values to
            // numerics.
            var scrollerMarginTop = parseInt($scroller.css('marginTop'));
            var anchorScrollPosition = parseInt($anchor.offset().top);
            anchorScrollPosition = anchorScrollPosition - scrollerMarginTop;

            var offsetFromTop = 0;
            var belowElementSelector = $scroller.data('below-element');

            if (belowElementSelector.length > 0) {
              console.log(belowElementSelector, 'belowElementSelector');
              var $belowElement = $(belowElementSelector);

              // Get the bottom position of the belowElement relative to the
              // _viewport_, rather than the page.
              if ($belowElement.length) {
                console.log($belowElement, '$belowElement');
                var belowElementBottom = $belowElement[0].getBoundingClientRect().bottom;

                offsetFromTop = offsetFromTop + belowElementBottom;
              }
            }

            $scrollerClone.css({
              position: 'fixed',
              top: offsetFromTop + 'px',
              left: 0,
              right: 0
            });

            if (windowScrollPosition > (anchorScrollPosition - offsetFromTop)) {
              $scrollerClone.show();
              $scroller.css('visibility', 'hidden');
            }
            else {
              if (windowScrollPosition <= (anchorScrollPosition - offsetFromTop)) {
                $scrollerClone.hide();
                $scroller.css('visibility', 'visible');
              }
            }
          };

          $(window).scroll(move);
          move();
        });
      }

      moveScroller();
    }
  };
})(jQuery, Drupal);
