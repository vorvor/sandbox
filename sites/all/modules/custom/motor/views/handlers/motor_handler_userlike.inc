<?php
/**
 * @file
 * Definition of sono_shop_handler_installment
 */

/**
 * Provides a field describes which intallment the invoice if payment plan.
 */
class motor_handler_userlike extends views_handler_field {

  function init(&$view, &$options) {
    parent::init($view, $options);
      $this->additional_fields['nid'] = 'nid';
  }

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
  }

  function render($values) {
    global $user;
    $nid = $values->nid;

    $query = db_select('flagging', 'f');
    $query->leftJoin('users', 'u', 'u.uid = f.uid');
    $query
      ->fields('f', array('uid'))
      ->fields('u', array('name'))
      ->condition('entity_id', $nid);
    $results = $query
      ->execute()
      ->fetchAll();

    $users = array();
    $loggedin = FALSE;
    foreach ($results as $result) {
      if ($result->uid !== $user->uid) {
        $users[]= l($result->name, 'user-page/' . $result->uid);
      }
      else {
        $loggedin = TRUE;
      }
    }
    if ($loggedin) {
      array_unshift($users, 'You');
    }

    return implode(',', $users);
  }
}
