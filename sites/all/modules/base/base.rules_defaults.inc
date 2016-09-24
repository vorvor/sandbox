<?php
/**
 * @file
 * base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function base_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_after_post'] = entity_import('rules_config', '{ "rules_redirect_after_post" : {
      "LABEL" : "Redirect after post",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--post" : { "bundle" : "post" },
        "node_update--post" : { "bundle" : "post" }
      },
      "DO" : [ { "redirect" : { "url" : "feed" } } ]
    }
  }');
  $items['rules_redirect_after_save_decide'] = entity_import('rules_config', '{ "rules_redirect_after_save_decide" : {
      "LABEL" : "Redirect after save decide",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--decide" : { "bundle" : "decide" } },
      "DO" : [ { "redirect" : { "url" : "node\\/add\\/decide" } } ]
    }
  }');
  $items['rules_redirect_after_user_edit'] = entity_import('rules_config', '{ "rules_redirect_after_user_edit" : {
      "LABEL" : "Redirect after user edit",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "DO" : [ { "redirect" : { "url" : "dashboard" } } ]
    }
  }');
  return $items;
}
