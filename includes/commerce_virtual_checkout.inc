<?php

/**
 * @file
 * Administrative callbacks for the settings page of Commerce backend checkout.
 */


/**
 * Builds the virtual checkout page
 */
function commerce_virtual_checkout_form($form, &$form_state) {
  $form['#validate'][] = 'commerce_virtual_checkout_form_validate';

  return $form;
}

/**
 * Form validate handler the virtual checkout page.
 */
function commerce_virtual_checkout_form_validate($form, &$form_state) {

}
