<?php

/**
 * Implementation of hook_views_default_views().
 */
function vuln_views_default_views() {
  $views = array();

  // Exported view: vuln_view
  $view = new view;
  $view->name = 'vuln_view';
  $view->description = '<script type="text/javascript">Alert("Gotcha!");</script>';
  $view->tag = '<script type="text/javascript">Alert("Gotcha!");</script>';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'nothing' => array(
      'label' => 'Custom text',
      'alter' => array(
        'text' => '<script type="text/javascript">Alert("Gotcha!");</script>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '<script type="text/javascript">Alert("Gotcha!");</script>',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '<script type="text/javascript">Alert("Gotcha!");</script>',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'type_op',
        'identifier' => '<script type="text/javascript">Alert("Gotcha!");</script>',
        'label' => '<script type="text/javascript">Alert("Gotcha!");</script>',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', '<script type="text/javascript">Alert("Gotcha!");</script>');
  $handler->override_option('header', '<script type="text/javascript">Alert("Gotcha!");</script>');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('footer', '<script type="text/javascript">Alert("Gotcha!");</script>');
  $handler->override_option('footer_format', '1');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('empty', '<script type="text/javascript">Alert("Gotcha!");</script>');
  $handler->override_option('empty_format', '1');
  $handler->override_option('use_more', 0);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('use_more_text', '<script type="text/javascript">Alert("Gotcha!");</script>');
  $handler = $view->new_display('page', '<script type="text/javascript">Alert("Gotcha!");</script>', 'page_1');
  $handler->override_option('path', 'vuln-view');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => '<script type="text/javascript">Alert("Gotcha!");</script>',
    'description' => '<script type="text/javascript">Alert("Gotcha!");</script>',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', '<script type="text/javascript">Alert("Gotcha!");</script>', 'block_1');
  $handler->override_option('block_description', '<script type="text/javascript">Alert("Gotcha!");</script>');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}