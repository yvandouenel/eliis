jQuery(function($){

  if($('.view-id-partenaires').length && $('body.role-webmaster').length){

    var zone_logo_one = $('.view-display-id-block_partner_one');
    var link_rank = $('<a id="link_rank_one" href="/logo-rank">Rank</a>');
    zone_logo_one.css({'position': 'relative'});
    link_rank.css({'position': 'absolute','right': '5px', 'top': '-10px'});
    link_rank.prependTo(zone_logo_one).hide();
    zone_logo_one.hover(function(){
      link_rank.show();
    },function(){
      link_rank.hide();
    });
  }
});