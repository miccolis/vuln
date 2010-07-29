<?php

/**
 * Implementation of hook_strongarm().
 */
function vuln_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_footer';
  $strongarm->value = '<script type="text/javascript">alert("Vuln - strongarm:site_footer");</script>';

  $export['site_footer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mission';
  $strongarm->value = '<script type="text/javascript">alert("Vuln - strongarm:site_mission");</script>';

  $export['site_mission'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = '<script type="text/javascript">alert("Vuln - strongarm:site_name");</script>Drupal';

  $export['site_name'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '<script type="text/javascript">alert("Vuln - strongarm:site_slogan");</script>Don\'t get p0wned';

  $export['site_slogan'] = $strongarm;
  return $export;
}
