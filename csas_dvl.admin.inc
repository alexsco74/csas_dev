<?php
/**
 * @file
 * Admin page callbacks for the csas_il.
 */

function csas_dvl_admin_config_form() {
  $form['csas_dvl_dev_mode'] = array(
    '#type' => 'checkbox',
    '#title' => t('Devel mode enable'),
    '#default_value' => variable_get('csas_dvl_dev_mode', FALSE),
  );

  $form['csas_dvl_clear_js_css'] = array(
    '#type' => 'checkbox',
    '#title' => t('Clear js & css every page'),
    '#default_value' => variable_get('csas_dvl_clear_js_css', FALSE),
  );
  return system_settings_form($form);
}