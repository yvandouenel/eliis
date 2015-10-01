jQuery(function($) {
    //var anchors-top;
    var menu_top_position = 0;


    if ($('a.link-fixed-right-menu').length != 0) {
        // Récupération des liens vers des ancres du menu
        var link_menu = [];
        $('a.link-fixed-right-menu').each(function( index ) {
            link_menu[index] = $(this);
        });

        $(window).scroll(function() {
            clearTimeout($.data(this, 'scrollTimer'));
            $.data(this, 'scrollTimer', setTimeout(function() {
                // Récupération de la position du haut du menu :
                // c'est uniquement elle qui change s'il n'y apas de redimensionnement de la page
                var top_menu_position_offset = $('#fixed-right-menu').offset();
                menu_top_position = top_menu_position_offset.top;
                console.log( "position du haut du menu : " + menu_top_position);

                // Comparaison avec les positions des ancres
                var link_menu_selected = false;
                $('.anchor_product').each(function( index ) {
                    link_menu_selected = false;
                    var position_ancre = $( this ).offset();
                    console.log( "position des ancres : " + position_ancre.top );
                    if(menu_top_position < position_ancre.top){
                        console.log( "Mettre en seletected le lien " + (index-1) + ' du menu.');
                        $('a.link-fixed-right-menu').removeClass( "selected-link" );
                        link_menu[(index-1)].addClass( "selected-link" );
                        link_menu_selected = true;
                        return false;
                    }
                });
                if (!link_menu_selected){
                    console.log( "Mettre en seletected le lien " + (link_menu.length-1) + ' du menu.');
                    $('a.link-fixed-right-menu').removeClass( "selected-link" );
                    link_menu[(link_menu.length-1)].addClass( "selected-link" );
                }
                //console.log("Haven't scrolled in 250ms!");
            }, 250));
        });
    }

    $('a[href^="#"]').click(function(event) {
        console.log("entrée avant test");
        if($(this).attr("class").indexOf("contextual-links-trigger") != 0){
            console.log("après test : "+$(this).attr("class").indexOf("contextual-links-trigger"));
            $('a[href^="#"]').removeClass( "selected-link" );
            $(this).addClass( "selected-link" );
            console.log("source de l'évenement : "+$(this).id);
            var target = $(this.hash);
            if (target.length == 0) target = $('a[name="' + this.hash.substr(1) + '"]');
            if (target.length == 0) target = $('html');
            $('html, body').animate({ scrollTop: target.offset().top }, 500);
            return false;
        }

    });
/*
Login in lightbox
 */
    /*
    teste si l'on se trouve dans une page de type "licenced" et s'il y a un formulaire de login et une zone
    uniquement visible pour les anonymes
     */
    if ( $( "body.node-type-licensed-page" ).length &&  $( "#block-user-login").length) {
        console.log("début du script");

        // construction du div qui sera affiché
        var div_lightbox_login = $('<div id="lightbox_login"></div>');
        div_lightbox_login.css({
            'width':'100%',
            'background-color': 'black',
            'z-index':'1',
            'height':'100%',
            'position':'absolute',
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
            'z-index':'2',
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

        // Désactivation des liens
        $( "a").click(function(e) {
            e.preventDefault();
            console.log("click");
            div_lightbox_login.show();
        });

        $( "body" ).prepend( div_lightbox_login );

        // Mise en place du comportement de la zone pour les anonymes
        $( ".field-name-field-text-only-anonymous").click(function(){
            console.log("Click sur zone pour anonymes");

            div_lightbox_login.show();
        });
        div_lightbox_login.click(function(event){
            if(event.target.id == 'lightbox_login') div_lightbox_login.hide();
        });
        close_icon.click(function(event){
            div_lightbox_login.hide();
        });
    }

});