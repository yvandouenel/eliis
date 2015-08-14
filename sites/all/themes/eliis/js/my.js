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
        $('a[href^="#"]').removeClass( "selected-link" );
        $(this).addClass( "selected-link" );
        console.log("source de l'évenement : "+$(this).id);
        var target = $(this.hash);
        if (target.length == 0) target = $('a[name="' + this.hash.substr(1) + '"]');
        if (target.length == 0) target = $('html');
        $('html, body').animate({ scrollTop: target.offset().top }, 500);
        return false;
    });


});