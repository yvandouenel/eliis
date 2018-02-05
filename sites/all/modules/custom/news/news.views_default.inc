<?php
/**
 * @file
 * news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'evenements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evénements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Evénements au domaine d\'O';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date de parution -  start date (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date de parution - end date (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';

  /* Display: Page-evenement */
  $handler = $view->new_display('page', 'Page-evenement', 'event_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News & Events';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="events-archive">View event\'s archive</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['text'] = 'target="_blank"';
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_window']['empty'] = 'target="_self"';
  $handler->display->display_options['fields']['field_new_window']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date d'événement */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'american',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Registration */
  $handler->display->display_options['fields']['field_registration']['id'] = 'field_registration';
  $handler->display->display_options['fields']['field_registration']['table'] = 'field_data_field_registration';
  $handler->display->display_options['fields']['field_registration']['field'] = 'field_registration';
  $handler->display->display_options['fields']['field_registration']['label'] = '';
  $handler->display->display_options['fields']['field_registration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_registration']['alter']['text'] = '<a href="[path]#event-subscription" class="link-register-view">Register now</a>';
  $handler->display->display_options['fields']['field_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registration']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_registration']['type'] = 'registration_link';
  $handler->display->display_options['fields']['field_registration']['settings'] = array(
    'label' => '',
    'i18n_string_key' => 'ctools:ctools:_custom:field_registration',
  );
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<div class="group-title-date-event">
  <h4 class="h4-event"><a href="[field_news_url_target]">[title]</a></h4>
  <div class="register-link-view">[field_registration]</div>
  <div class="date-event event-page">[field_date]</div>
</div>
';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<div class="group-title-date-event">
  <h4 class="h4-event"><a href="[path]">[title]</a></h4>
  <div class="date-event event-page">[field_date]</div>
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date de parution -  start date (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date de parution - end date (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_value']['id'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_value']['field'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['path'] = 'events';

  /* Display: Page-evenement-draggable */
  $handler = $view->new_display('page', 'Page-evenement-draggable', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Classement des événements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_news_url_target' => 'field_news_url_target',
    'field_new_window' => 'field_new_window',
    'field_scald_image' => 'field_scald_image',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_news_url_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_new_window' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_scald_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['path'] = 'admin/settings/sort-events';

  /* Display: Block home events */
  $handler = $view->new_display('block', 'Block home events', 'block_home_event');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Actualités ';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir tous les événements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/events" class="see-all-events">More news and events</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_window']['empty'] = '_self';
  $handler->display->display_options['fields']['field_new_window']['hide_empty'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'home_event';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'home-news-text';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Date d'événement */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'american',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<div class="col-md-3">
<div class="group-home-event">
<div class="group-title-img ">
<a href="[field_news_url_target]" >[field_scald_image]</a>
  <h3 class="h3-event"><a href="[field_news_url_target]">[title]</a></h3>
  <div class="date-event home-block">[field_date]</div>
</div>
[body]
</div>
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<div class="col-md-3">
<div class="group-home-event">
<div class="group-title-img ">
<a href="[path]">[field_scald_image] </a>
  <h3 class="h3-event"><a href="[path]">[title]</a></h3>
  <div class="date-event home-block">[field_date]</div>
</div>
[body]
</div>
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date de parution -  start date (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date de parution - end date (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Visible bas accueil (field_visible_bas_accueil) */
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['id'] = 'field_visible_bas_accueil_value';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['table'] = 'field_data_field_visible_bas_accueil';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['field'] = 'field_visible_bas_accueil_value';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_value']['id'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_value']['field'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_information_type_value']['value'] = array(
    'release' => 'release',
  );
  $handler->display->display_options['block_description'] = 'block home events';

  /* Display: Attachment home */
  $handler = $view->new_display('attachment', 'Attachment home', 'attachment_release');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home releases';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="home_release">Software Releases</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<div class="group-home-release">
  <h4 class="h4-event"><a href="[field_news_url_target]" target="[field_new_window]">[title]</a></h4>
[body]
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<div class="group-home-release">
  <h4 class="h4-event"><a href="[path]">[title]</a></h4>
  [body]
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date de parution -  start date (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date de parution - end date (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_value']['id'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_value']['field'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['value'] = array(
    'release' => 'release',
  );
  $handler->display->display_options['displays'] = array(
    'block_home_event' => 'block_home_event',
    'default' => 0,
    'event_page' => 0,
    'page_1' => 0,
    'block_zoom' => 0,
    'block_release' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attachment news */
  $handler = $view->new_display('attachment', 'Attachment news', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="h3-news">News</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<div class="group-home-release">
  <h4 class="h4-event"><a href="[field_news_url_target]" target="[field_new_window]">[title]</a></h4>
[body]
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<div class="group-home-release">
  <h4 class="h4-event"><a href="[path]">[title]</a></h4>
  [body]
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date de parution -  start date (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date de parution - end date (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_value']['id'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_value']['field'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['displays'] = array(
    'event_page' => 'event_page',
    'default' => 0,
    'page_1' => 0,
    'block_home_event' => 0,
    'block_zoom' => 0,
  );

  /* Display: Attachment releases */
  $handler = $view->new_display('attachment', 'Attachment releases', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="h3-release">Software Releases</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<div class="group-home-release">
  <h4 class="h4-event"><a href="[field_news_url_target]" target="[field_new_window]">[title]</a></h4>
[body]
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<div class="group-home-release">
  <h4 class="h4-event"><a href="[path]">[title]</a></h4>
  [body]
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date de parution -  start date (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date de parution - end date (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_value']['id'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_value']['field'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['value'] = array(
    'release' => 'release',
  );
  $handler->display->display_options['displays'] = array(
    'event_page' => 'event_page',
    'default' => 0,
    'page_1' => 0,
    'block_home_event' => 0,
    'block_zoom' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Block zoom event */
  $handler = $view->new_display('block', 'Block zoom event', 'block_zoom_event');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Zoom';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir tous les événements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Grande image */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_images']['type'] = 'full';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_window']['empty'] = '_self';
  $handler->display->display_options['fields']['field_new_window']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'home-news-text';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Date d'événement */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'american',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Registration */
  $handler->display->display_options['fields']['field_registration']['id'] = 'field_registration';
  $handler->display->display_options['fields']['field_registration']['table'] = 'field_data_field_registration';
  $handler->display->display_options['fields']['field_registration']['field'] = 'field_registration';
  $handler->display->display_options['fields']['field_registration']['label'] = '';
  $handler->display->display_options['fields']['field_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_registration']['alter']['text'] = '<a href="[path]#event-subscription" class="link-register-view-zoom">Register now</a>';
  $handler->display->display_options['fields']['field_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registration']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_registration']['type'] = 'registration_link';
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<div class="col-md-12 zoom-block-page">
<div class="group-home-event">
<div class="group-title-img-page ">
<a href="[field_news_url_target]" target="[field_new_window]">[field_images]</a>
  <h3 class="h3-event"><a href="[field_news_url_target]" target="[field_new_window]">[title]</a></h3>
  <div class="date-event home-block">[field_date]</div>
  <div class="register-view-zoom">[field_registration]</a>
</div>
[body]
</div>
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<div class="col-md-12 zoom-block-page">
<div class="group-title-img-page ">
<a href="[path]">[field_images]</a>
  <h3 class="h3-event"><a href="[path]">[title]</a></h3>
  <div class="date-event event-page">[field_date]</div>
  <div class="summary-event event-page">[body]</div>
  <div class="register-view-zoom">[field_registration]</a>
</div>
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date de parution -  start date (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date de parution - end date (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_value']['id'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_value']['field'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_information_type_value']['value'] = array(
    'release' => 'release',
  );
  /* Filter criterion: Content: Zoom sur (field_zoom) */
  $handler->display->display_options['filters']['field_zoom_value']['id'] = 'field_zoom_value';
  $handler->display->display_options['filters']['field_zoom_value']['table'] = 'field_data_field_zoom';
  $handler->display->display_options['filters']['field_zoom_value']['field'] = 'field_zoom_value';
  $handler->display->display_options['filters']['field_zoom_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'block zoom event';

  /* Display: Page archive evenement */
  $handler = $view->new_display('page', 'Page archive evenement', 'event_archive');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events Archive';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['alter']['text'] = 'target="_blank"';
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_window']['empty'] = 'target="_self"';
  $handler->display->display_options['fields']['field_new_window']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date d'événement */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'american',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Registration */
  $handler->display->display_options['fields']['field_registration']['id'] = 'field_registration';
  $handler->display->display_options['fields']['field_registration']['table'] = 'field_data_field_registration';
  $handler->display->display_options['fields']['field_registration']['field'] = 'field_registration';
  $handler->display->display_options['fields']['field_registration']['label'] = '';
  $handler->display->display_options['fields']['field_registration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_registration']['alter']['text'] = '<a href="[path]#event-subscription" class="link-register-view">Register now</a>';
  $handler->display->display_options['fields']['field_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registration']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_registration']['type'] = 'registration_link';
  $handler->display->display_options['fields']['field_registration']['settings'] = array(
    'label' => '',
    'i18n_string_key' => 'ctools:ctools:_custom:field_registration',
  );
  /* Field: Content: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<div class="group-title-date-event">
  <h4 class="h4-event"><a href="[field_news_url_target]">[title]</a></h4>
  <div class="register-link-view">[field_registration]</div>
  <div class="date-event event-page">[field_date]</div>
</div>
';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<div class="group-title-date-event">
  <h4 class="h4-event"><a href="[path]">[title]</a></h4>
  <div class="date-event event-page">[field_date]</div>
</div>';
  $handler->display->display_options['fields']['field_news_url_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_value']['id'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_value']['field'] = 'field_information_type_value';
  $handler->display->display_options['filters']['field_information_type_value']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'events-archive';
  $translatables['evenements'] = array(
    t('Master'),
    t('Evénements au domaine d\'O'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Page-evenement'),
    t('News & Events'),
    t('more'),
    t('<a href="events-archive">View event\'s archive</a>'),
    t('target="_blank"'),
    t('target="_self"'),
    t('<a href="[path]#event-subscription" class="link-register-view">Register now</a>'),
    t('<div class="group-title-date-event">
  <h4 class="h4-event"><a href="[field_news_url_target]">[title]</a></h4>
  <div class="register-link-view">[field_registration]</div>
  <div class="date-event event-page">[field_date]</div>
</div>
'),
    t('<div class="group-title-date-event">
  <h4 class="h4-event"><a href="[path]">[title]</a></h4>
  <div class="date-event event-page">[field_date]</div>
</div>'),
    t('Page-evenement-draggable'),
    t('Classement des événements'),
    t('Block home events'),
    t('Actualités '),
    t('Voir tous les événements'),
    t('<a href="/events" class="see-all-events">More news and events</a>'),
    t('_blank'),
    t('_self'),
    t('<div class="col-md-3">
<div class="group-home-event">
<div class="group-title-img ">
<a href="[field_news_url_target]" >[field_scald_image]</a>
  <h3 class="h3-event"><a href="[field_news_url_target]">[title]</a></h3>
  <div class="date-event home-block">[field_date]</div>
</div>
[body]
</div>
</div>'),
    t('<div class="col-md-3">
<div class="group-home-event">
<div class="group-title-img ">
<a href="[path]">[field_scald_image] </a>
  <h3 class="h3-event"><a href="[path]">[title]</a></h3>
  <div class="date-event home-block">[field_date]</div>
</div>
[body]
</div>
</div>'),
    t('block home events'),
    t('Attachment home'),
    t('Home releases'),
    t('<h3 class="home_release">Software Releases</h3>'),
    t('<div class="group-home-release">
  <h4 class="h4-event"><a href="[field_news_url_target]" target="[field_new_window]">[title]</a></h4>
[body]
</div>'),
    t('<div class="group-home-release">
  <h4 class="h4-event"><a href="[path]">[title]</a></h4>
  [body]
</div>'),
    t('Attachment news'),
    t('News'),
    t('<h3 class="h3-news">News</h3>'),
    t('Attachment releases'),
    t('<h3 class="h3-release">Software Releases</h3>'),
    t('Block zoom event'),
    t('Zoom'),
    t('<a href="[path]#event-subscription" class="link-register-view-zoom">Register now</a>'),
    t('<div class="col-md-12 zoom-block-page">
<div class="group-home-event">
<div class="group-title-img-page ">
<a href="[field_news_url_target]" target="[field_new_window]">[field_images]</a>
  <h3 class="h3-event"><a href="[field_news_url_target]" target="[field_new_window]">[title]</a></h3>
  <div class="date-event home-block">[field_date]</div>
  <div class="register-view-zoom">[field_registration]</a>
</div>
[body]
</div>
</div>'),
    t('<div class="col-md-12 zoom-block-page">
<div class="group-title-img-page ">
<a href="[path]">[field_images]</a>
  <h3 class="h3-event"><a href="[path]">[title]</a></h3>
  <div class="date-event event-page">[field_date]</div>
  <div class="summary-event event-page">[body]</div>
  <div class="register-view-zoom">[field_registration]</a>
</div>
</div>'),
    t('block zoom event'),
    t('Page archive evenement'),
    t('Events Archive'),
  );
  $export['evenements'] = $view;

  $view = new view();
  $view->name = 'registration_to_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Registration to events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Registration to events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'title' => 'title',
    'field_company' => 'field_company',
    'field_first_name' => 'field_first_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Registration: Node to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['required'] = TRUE;
  /* Field: Content: Date d'événement */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'american',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title] | [field_date]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  /* Field: Registration: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['relationship'] = 'registration_rel';
  /* Field: Registration: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'registration_rel';
  /* Field: Registration: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'E-mail';
  $handler->display->display_options['fields']['anon_mail']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Event\'s title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'After:';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Date d&#039;événement (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Before :';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'registration-to-events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Export event\'s registrations  ';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date d'événement */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'american',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title] | [field_date]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  /* Field: Registration: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['relationship'] = 'registration_rel';
  /* Field: Registration: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'registration_rel';
  /* Field: Registration: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'E-mail';
  $handler->display->display_options['fields']['anon_mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'registration-to-events/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['registration_to_events'] = array(
    t('Master'),
    t('Registration to events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('node being the Registration'),
    t('<h2>[title] | [field_date]</h2>'),
    t('Registration ID'),
    t('.'),
    t(','),
    t('Company'),
    t('First name'),
    t('Last name'),
    t('E-mail'),
    t('Event\'s title'),
    t('After:'),
    t('Before :'),
    t('Page'),
    t('Data export'),
  );
  $export['registration_to_events'] = $view;

  return $export;
}
