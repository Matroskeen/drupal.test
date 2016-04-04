(function($) {
  
  Drupal.behaviors.test = {
    attach: function(context) {
      var realText;
      $('textarea', context).on('focus', function() {
        realText = $(this).val();
        $(this).val("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
      });
      $('textarea').on('blur', function() {
        realText = $(this).val(realText);
      });

    }
  };
}(jQuery));
