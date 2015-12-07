/**
 * Created by yvan on 07/12/15.
 */
jQuery(function($) {
  $(".video-support-right").hide();
  $(".views-row-first .video-support-right").show();
  $(".video-list-left:first").addClass('video-controler-selected');
  /*
   <div id="video-link-31" class="video-list-left">
   Sequence Stratigraphy
   </div>
   */
  // gestion du click sur les titres
  $(".video-list-left").each(function(){
    $(this).click(function(){
      //var re = ///\w+/;
      var id_number = $(this).attr('id').match(/-([0-9]+)$/);
      if(id_number){
        $(".video-support-right").hide();
        $('#video' + id_number[0]).show('slide');
        $(".video-list-left").removeClass('video-controler-selected');
        $(this).addClass('video-controler-selected');
      }
      /*console.log(id_number[0]);*/
    });
  });
});
