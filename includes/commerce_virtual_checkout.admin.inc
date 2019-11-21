<?php

/**
 * @file
 * Administrative callbacks for the settings page of Commerce virtual checkout.
 */


/**
 * Builds the virtual checkout settings page
 */
function commerce_virtual_checkout_admin_form($form, &$form_state) {
  $form['#validate'][] = 'commerce_virtual_checkout_admin_form_validate';

  return system_settings_form($form);
}

/**
 * Form validate handler for the virtual checkout admin form
 */
function commerce_virtual_checkout_admin_form_validate($form, &$form_state) {

}
