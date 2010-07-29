<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function vuln_user_default_permissions() {
  $permissions = array();

  // Exported permission: create vuln_content content
  $permissions['create vuln_content content'] = array(
    'name' => 'create vuln_content content',
    'roles' => array(
      '0' => '<script type="text/javascript">alert("Gotcha!");</script>Vuln',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
