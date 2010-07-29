<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function vuln_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_node_info().
 */
function vuln_node_info() {
  $items = array(
    'vuln_content' => array(
      'name' => t('<script type="text/javascript">Alert("Gotcha!");</script>'),
      'module' => 'features',
      'description' => t('<script type="text/javascript">Alert("Gotcha!");</script>'),
      'has_title' => '1',
      'title_label' => t('<script type="text/javascript">Alert("Gotcha!");</script>Title'),
      'has_body' => '1',
      'body_label' => t('<script type="text/javascript">Alert("Gotcha!");</script>Body'),
      'min_word_count' => '0',
      'help' => t('<script type="text/javascript">Alert("Gotcha!");</script>'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function vuln_views_api() {
  return array(
    'api' => '2',
  );
}
