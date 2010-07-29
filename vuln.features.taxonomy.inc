<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function vuln_taxonomy_default_vocabularies() {
  return array(
    'vuln' => array(
      'name' => '<script type="text/javascript">Alert("Gotcha!");</script>Vulnerabilities',
      'description' => '<script type="text/javascript">Alert("Gotcha!");</script>Vulnerabilities to test for.',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_vuln',
      'weight' => '0',
      'nodes' => array(
        'vuln_content' => 'vuln_content',
      ),
    ),
  );
}