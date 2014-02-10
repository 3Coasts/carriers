<?php
/**
 * @file
 * carriers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function carriers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carriers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carriers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_carrier_logo' => 'field_carrier_logo',
    'title' => 'field_carrier_logo',
    'field_carrier_link' => 'field_carrier_link',
    'field_carrier_telephone' => 'field_carrier_telephone',
    'field_carrier_addl_info' => 'field_carrier_addl_info',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_carrier_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_carrier_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_carrier_telephone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_carrier_addl_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_carrier_logo']['id'] = 'field_carrier_logo';
  $handler->display->display_options['fields']['field_carrier_logo']['table'] = 'field_data_field_carrier_logo';
  $handler->display->display_options['fields']['field_carrier_logo']['field'] = 'field_carrier_logo';
  $handler->display->display_options['fields']['field_carrier_logo']['label'] = '';
  $handler->display->display_options['fields']['field_carrier_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carrier_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carrier_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Claims Link */
  $handler->display->display_options['fields']['field_carrier_link']['id'] = 'field_carrier_link';
  $handler->display->display_options['fields']['field_carrier_link']['table'] = 'field_data_field_carrier_link';
  $handler->display->display_options['fields']['field_carrier_link']['field'] = 'field_carrier_link';
  $handler->display->display_options['fields']['field_carrier_link']['label'] = '';
  $handler->display->display_options['fields']['field_carrier_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carrier_link']['click_sort_column'] = 'url';
  /* Field: Content: Telephone Numbers */
  $handler->display->display_options['fields']['field_carrier_telephone']['id'] = 'field_carrier_telephone';
  $handler->display->display_options['fields']['field_carrier_telephone']['table'] = 'field_data_field_carrier_telephone';
  $handler->display->display_options['fields']['field_carrier_telephone']['field'] = 'field_carrier_telephone';
  $handler->display->display_options['fields']['field_carrier_telephone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_carrier_telephone']['multi_type'] = 'ul';
  /* Field: Content: Additional Info */
  $handler->display->display_options['fields']['field_carrier_addl_info']['id'] = 'field_carrier_addl_info';
  $handler->display->display_options['fields']['field_carrier_addl_info']['table'] = 'field_data_field_carrier_addl_info';
  $handler->display->display_options['fields']['field_carrier_addl_info']['field'] = 'field_carrier_addl_info';
  $handler->display->display_options['fields']['field_carrier_addl_info']['label'] = '';
  $handler->display->display_options['fields']['field_carrier_addl_info']['element_type'] = '0';
  $handler->display->display_options['fields']['field_carrier_addl_info']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_carrier_addl_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carrier_addl_info']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_carrier_addl_info']['element_wrapper_class'] = 'additionalinfo';
  $handler->display->display_options['fields']['field_carrier_addl_info']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'carrier' => 'carrier',
  );
  /* Filter criterion: Content: Carrier Type(s) (field_carrier_type) */
  $handler->display->display_options['filters']['field_carrier_type_value']['id'] = 'field_carrier_type_value';
  $handler->display->display_options['filters']['field_carrier_type_value']['table'] = 'field_data_field_carrier_type';
  $handler->display->display_options['filters']['field_carrier_type_value']['field'] = 'field_carrier_type_value';
  $handler->display->display_options['filters']['field_carrier_type_value']['value'] = array(
    'Commercial' => 'Commercial',
  );

  /* Display: Commercial Carriers Content pane */
  $handler = $view->new_display('panel_pane', 'Commercial Carriers Content pane', 'panel_pane_1');

  /* Display: Personal Carriers Content pane */
  $handler = $view->new_display('panel_pane', 'Personal Carriers Content pane', 'panel_pane_2');
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
    'carrier' => 'carrier',
  );
  /* Filter criterion: Content: Carrier Type(s) (field_carrier_type) */
  $handler->display->display_options['filters']['field_carrier_type_value']['id'] = 'field_carrier_type_value';
  $handler->display->display_options['filters']['field_carrier_type_value']['table'] = 'field_data_field_carrier_type';
  $handler->display->display_options['filters']['field_carrier_type_value']['field'] = 'field_carrier_type_value';
  $handler->display->display_options['filters']['field_carrier_type_value']['value'] = array(
    'Personal' => 'Personal',
  );
  $export['carriers'] = $view;

  return $export;
}
