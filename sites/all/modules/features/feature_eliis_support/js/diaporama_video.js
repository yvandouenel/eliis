/**
 * Created by yvan on 07/12/15.
 */
Drupal.behaviors.feature_eliis_support = {
  attach: function (context, settings) {
    console.log("suis dans diaporama_video.js");
    var numberid;
    jQuery("#big-video").hide();

    if (!jQuery("#close-button").length) {
      jQuery("#big-video").prepend('<i id="close-button"></i>');
      jQuery("#close-button").on("click",function(){
        if (jQuery("#big-video iframe").length) {
          numberid = jQuery("#big-video iframe").attr("class");
          jQuery("#big-video iframe").appendTo("#" + numberid);
          jQuery("#" + numberid).addClass("video-viewed");
        }
        jQuery("#big-video").hide();
      });
      jQuery(".group-video-wrapper .col-md-2 .field-content > div").each(function (index) {
          var cl = jQuery(this).attr("id");
          jQuery("iframe", jQuery(this)).attr("class", cl);
        }
      );
      jQuery(".group-video-wrapper .views-row").on("click",function(){
        jQuery("#big-video").show();
        if (jQuery("#big-video iframe").length) {
          numberid = jQuery("#big-video iframe").attr("class");
          jQuery("#big-video iframe").appendTo("#" + numberid);
          jQuery("#" + numberid).addClass("video-viewed");
        }
        jQuery("iframe", jQuery(this)).appendTo("#big-video");
      });
    }


  }
};

