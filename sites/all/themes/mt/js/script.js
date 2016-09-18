/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document) {

  'use strict';

  // To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.my_custom_behavior = {
    attach: function (context, settings) {

      $('.form-field-name-field-media a.browse').html('Add video');
      $('.form-field-name-field-post-image a.browse').html('Add image');
      $('.form-field-name-field-film a.browse').html('Add film');

      //$('.comments-wrapper').hide();
      $('.open-comments').click(function() {
        $('.comments-wrapper').slideToggle();
      }).css('cursor', 'pointer');


      $('form.comment-form .form-textarea')
        .val('Szóljon hozzá!')
        .click(function() {
          $(this).val('');
        })
        .css('color', '#aaa');

    }
  };

})(jQuery, Drupal, this, this.document);
