jQuery(function($) {
    /*
    Comportement des ancres
     */
    var menu_top_position = 0;
    if ($('a.link-fixed-right-menu').length != 0) {
        // Récupération des liens vers des ancres du menu qui sont placés dans le tableau link_menu
        var link_menu = [];
        $('a.link-fixed-right-menu').each(function( index ) {
            link_menu[index] = $(this);
        });

        $(window).scroll(function() {
            clearTimeout($.data(this, 'scrollTimer'));
            $.data(this, 'scrollTimer', setTimeout(function() {
                // Récupération de la position du haut du menu :
                // c'est uniquement elle qui change s'il n'y a pas de redimensionnement de la page
                var top_menu_position_offset = $('#fixed-right-menu').offset();
                menu_top_position = top_menu_position_offset.top;
                console.log( "position du haut du menu : " + menu_top_position);

                // Comparaison avec les positions des ancres
              /**
               * Plutôt que de comparer les positions des éléments, if faudrait
               * que je sache qui doit être sélectionné et que je modifie la
               * position du block des ancres et que je donne la class "selected-link"
               * au lien concerné
               */
                var link_menu_selected = false;
                $('.anchor_product').each(function( index ) {
                    link_menu_selected = false;
                    var position_ancre = $( this ).offset();
                    console.log( "position des ancres aaa : " + position_ancre.top );


                    if(menu_top_position < position_ancre.top){
                        //console.log( "Mettre en selected le lien " + (index-1) + ' du menu.');
                        $('a.link-fixed-right-menu').removeClass( "selected-link" );
                        link_menu[(index-1)].addClass( "selected-link" );
                        link_menu_selected = true;
                        return false;
                    }
                });
                if (!link_menu_selected){
                    //console.log( "Mettre en selected le lien " + (link_menu.length-1) + ' du menu.');
                    $('a.link-fixed-right-menu').removeClass( "selected-link" );
                    link_menu[(link_menu.length-1)].addClass( "selected-link" );
                }
                //console.log("Haven't scrolled in 250ms!");
            }, 250));
        });
    }

    $('a[href^="#"]').click(function(event) {
        //console.log("entrée sur click d'ancre");
        if($(this).attr("class").indexOf("contextual-links-trigger") != 0){
            //console.log("après test : "+$(this).attr("class").indexOf("contextual-links-trigger"));
            $('a[href^="#"]').removeClass( "selected-link" );
            $(this).addClass( "selected-link" );
            //console.log("source de l'évenement : "+$(this).id);
            var target = $(this.hash);
            if (target.length == 0) target = $('a[name="' + this.hash.substr(1) + '"]');
            if (target.length == 0) target = $('html');


            $('html, body').animate({ scrollTop: target.offset().top }, 500);
            return false;
        }

    });

    /**
     * Remplacement des attributs hrefs des liens comportant le chemin /private/
     */
    $( "a[href*='/private/']" ).each(function(){
        var url = $(this).attr('href');
        var re = /sites\/default\/files\/private/;
        var new_url = url.replace(re, "system/files");
        $(this).attr('href', new_url);
    });
/*
Login in lightbox
 */
    /*
    teste si l'on se trouve dans une page de type "licenced" ou "support"
    et s'il y a un formulaire de login
     */

    if ( ($( "body.node-type-licensed-page" ).length ||
      $( "body.node-type-support" ).length)
      &&  $( "#block-user-login").length) {
        //console.log("début du script");

        // construction du div qui sera affiché
        var div_lightbox_login = $('<div id="lightbox_login"></div>');
        div_lightbox_login.css({
            'width':'100%',
            'background-color': 'black',
            'z-index':'4',
            'height':'100%',
            'position':'fixed',
            'left':'0',
            'top':'100px'});
        // création de la croix pour fermer
        var close_icon = $('<div class="icon-close" id="icon-close"><span class="sr-only">Close</span></div>');
        close_icon.css({
            'position': 'absolute',
            'top': '5px',
            'right': '5px'
            });

        // Envoi de la croix dans la zone de login
        close_icon.prependTo("#block-user-login");

        // habillage de la zone de login
        $( "#block-user-login").css({
            'z-index':'5',
            'padding':'25px ',
            'background-color': 'white',
            'opacity': '1',
            'width':'250px',
            'position': 'relative',
            'margin':'50px auto'
        });
        // Envoi de la zone de login dans la lightbox
        div_lightbox_login.hide();
        $( "#block-user-login").appendTo(div_lightbox_login);

        // Désactivation des liens qui appartiennent à la classe private-file
        $( ".private-file a").click(function(e) {
            e.preventDefault();
            //console.log("click");
            div_lightbox_login.show();
        });
        // Désactivation des liens qui ont dans leur chemin /system/file/
        $( "a[href*='/system/files/']" ).click(function(e) {
            e.preventDefault();
            //console.log("click");
            div_lightbox_login.show();
        });

        $( "body" ).prepend( div_lightbox_login );

        // Mise en place du comportement de la zone pour les anonymes
        /*$( ".field-name-field-text-only-anonymous").click(function(){
            //console.log("Click sur zone pour anonymes");

            div_lightbox_login.show();
        });*/

        // on cache la zone de login sur click dans la zone noire ou sur la croix
        div_lightbox_login.click(function(event){
            if(event.target.id == 'lightbox_login') div_lightbox_login.hide();
        });
        close_icon.click(function(event){
            div_lightbox_login.hide();
        });
    }
    /*
    menu ancres sur la page de download
     */
    if ( $( "body.node-type-licensed-page" ).length &&  $( "#licensed-top-anchors" ).length) {
        var count = 0;
        $(window).scroll(function() {

            clearTimeout($.data(this, 'scrollTimer'));
            $.data(this, 'scrollTimer', setTimeout(function() {
                if (count && !$( "#licensed-top-anchors").hasClass("top-fixed-anchors")){
                  console.log('hello');
                   $( "#licensed-top-anchors" ).animate({
                        'top': "120px",
                        'z-index': '1'
                    },500);
                    // Ajout de la classe top-fixed-anchors
                    $( "#licensed-top-anchors").addClass("top-fixed-anchors");

                    // si le menu admin existe, on ajoute une classe supplémentaire
                    if($( "#admin-menu" ).length) {
                        $( "#licensed-top-anchors" ).addClass("width-admin-menu");
                    }
                }
                //console.log("Haven't scrolled in 250ms! " + count);
                count ++;
            }, 250));
        });
    }
  /*
   menu ancres sur la page de support
   */
  if ( $( "body.node-type-support" ).length &&  $( "#support-top-anchors" ).length) {

    var count = 0;
    $(window).scroll(function() {

      clearTimeout($.data(this, 'scrollTimer'));
      // si le menu admin existe, on ajoute une classe supplémentaire
      if($( "#admin-menu" ).length) {
        $( "#support-top-anchors" ).addClass("width-admin-menu");
      }
      $.data(this, 'scrollTimer', setTimeout(function() {
        if (count && !$( "#support-top-anchors").hasClass("top-fixed-anchors")){
          console.log('hello');
          $( "#support-top-anchors" ).animate({
            'top': "120px",
            'z-index': '1'
          },500);
          // Ajout de la classe top-fixed-anchors
          $( "#licensed-top-anchors").addClass("top-fixed-anchors");

        }
        //console.log("Haven't scrolled in 250ms! " + count);
        count ++;
      }, 250));
    });
  }

  /**
   * Gestion du survol des images sur la page Paleoscan overview
   */
  if($('.os-link-anchor').length){
    var target_id, final_target, timer;
    displayFirstImage();

    $('.os-link-anchor').hover(function(){
      target_id = $(this).attr('href');
      clearTimeout(timer);
      timer = setTimeout(function(){
        $(".os-main-image").hide();
        $(target_id).show();
      },20)

    },function(){
      clearTimeout(timer);
      timer = setTimeout(function(){
        displayFirstImage();
      },500)

    });

    $('.os-link-anchor').click(function(){
      target_id = $(this).attr('href');
      final_target = $(target_id).attr("href");
      location.href = final_target;
      return false;
    });
    function displayFirstImage(){
      $(".os-main-image").hide();
      $("#os-main-image").show();
    }
  }

});