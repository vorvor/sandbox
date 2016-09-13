(function($) {
  Drupal.behaviors.myBehavior = {
    attach: function (context, settings) {

      //code starts
      $('.decide-option').click(function() {
        nid1 = $(this).attr('data-nid');
        nid2 = $(this).attr('data-other-nid');
        $('.decide-option:nth-child(1)').html('<img src="sites/all/modules/custom/motor/img/balls.gif">');
        console.log(1);
        $.ajax({
          url: '/decide/ajax/' + nid1 + '/' + nid2,
          success: function(data) {
            console.log(2);

            if (data == null) {
              $('.decide-wrapper').html('kipörgetted');
              return;
            }
            nid = data[0]['nid'];
            img = data[0]['img'];
            nid_ = data[1]['nid'];
            img_ = data[1]['img'];
            $('.decide-option:nth-child(1)')
              .attr('data-nid', nid)
              .attr('data-other-nid', nid_)
              .html(img);

            $('.decide-option:nth-child(2)')
              .attr('data-nid', nid_)
              .attr('data-other-nid', nid)
              .html(img_);

          },
          error: function() {
            $('#notification-bar').text('An error occurred');
          }
        });

      });
      //code ends

    }
  };
})(jQuery);
