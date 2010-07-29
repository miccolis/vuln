<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function vuln_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:http://google.com/
  $menu_links['navigation:http://google.com/'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => '<script type="text/javascript">alert("Vuln - menu:link:title");</script>Google',
    'options' => array(
      'attributes' => array(
        'title' => '<script type="text/javascript">alert("Vuln - menu:link:description");</script>Google',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin',
  );
  // Translatables
  array(
    t('<script type="text/javascript">alert("Vuln - menu:link:title");</script>Google'),
  );


  return $menu_links;
}
