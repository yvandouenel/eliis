<?php
/**
 * @file
 * feature_coop_user_eliis.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_coop_user_eliis_default_rules_configuration() {
  $items = array();
  $items['rules_send_mail_after_creating_a_user_account'] = entity_import('rules_config', '{ "rules_send_mail_after_creating_a_user_account" : {
      "LABEL" : "Send mail after creating a user account",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "contact@eliis.fr",
            "subject" : "New user account on eliis.fr: [account:field-user-first-name] [account:field_user_last_name] [account:field-user-company]",
            "message" : "A new user account was created on eliis.fr :\\r\\n - email: [account:mail],\\r\\n - name: [account:name]\\r\\n - company: [account:field-user-company]\\r\\n - role: [account:roles]",
            "language" : [ "account:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
