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
  $items['rules_email_test'] = entity_import('rules_config', '{ "rules_email_test" : {
      "LABEL" : "Email test",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "mail" : {
            "to" : "vorosborisz@gmail.com",
            "subject" : "hey!\\r\\n\\r\\n",
            "message" : "[account:name] logged in",
            "language" : [ "account:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_new_comment'] = entity_import('rules_config', '{ "rules_new_comment" : {
      "LABEL" : "New comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_post" : { "bundle" : "comment_node_post" } },
      "IF" : [
        { "data_is" : {
            "data" : [ "comment:node:author:uid" ],
            "value" : [ "site:current-user:uid" ]
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "vorosborisz@gmail.com",
            "subject" : "New comment",
            "message" : "Your content commented!",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
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
