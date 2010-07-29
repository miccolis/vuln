<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function vuln_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vuln_context';
  $context->description = '<script type="text/javascript">alert("Vuln - context:description");</script>';
  $context->tag = '<script type="text/javascript">alert("Vuln - context:tag");</script>';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'vuln_content' => 'vuln_content',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'vuln_view' => 'vuln_view',
      ),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => '<script type="text/javascript">alert("Vuln - context:reactions:theme:title");</script>',
      'subtitle' => '<script type="text/javascript">alert("Vuln - context:reactions:theme:title");</script>',
      'class' => '<script type="text/javascript">alert("Vuln - context:reactions:theme:title");</script>',
    ),
  );
  $context->condition_mode = 0;

  $export['vuln_context'] = $context;
  return $export;
}
