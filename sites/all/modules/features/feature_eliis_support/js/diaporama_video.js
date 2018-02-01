/**
 * Created by yvan on 07/12/15.
 */
jQuery(function ($) {
  var numberid;
  $("#big-video").hide();

  $("#big-video").prepend('<i id="close-button"></i>');
  $("#close-button").on("click",function(){
    if ($("#big-video iframe").length) {
      numberid = $("#big-video iframe").attr("class");
      $("#big-video iframe").appendTo("#" + numberid).addClass("video-viewed");
    }
    $("#big-video").hide();
  });

  $(".group-video-wrapper .col-md-2 .field-content > div").each(function (index) {
      var cl = $(this).attr("id");
      $("iframe", $(this)).attr("class", cl);
    }
  );
  $(".group-video-wrapper .views-row").on("click",function(){
    $("#big-video").show();
    if ($("#big-video iframe").length) {
      numberid = $("#big-video iframe").attr("class");
      $("#big-video iframe").appendTo("#" + numberid).addClass("video-viewed");;
    }
    $("iframe", $(this)).appendTo("#big-video");
  });

});
