<?php

/**
 * @file
 * Enables modules and site configuration for the site installation.
 *
 * @{
 */

/**
 * Implements hook_install_tasks().
 *
 * Returns an array of tasks to be performed.
 * @see: http://api.drupal.org/api/drupal/modules--system--system.api.php/function/hook_install_tasks/7
 *
 * Each task should follow this structure:
 * 'machine_name' => array(
 *    'display_name' => st('Human-readable task name'),
 *    'display' => TRUE,
 *    'type' => 'normal',
 *    'run' => INSTALL_TASK_RUN_IF_REACHED,
 *    'function' => 'function_to_execute',
 *  ),
 */
function resistoflex_install_tasks($install_state) {
  $tasks = array(
    'resistoflex_enable_modules' => array(
      'display_name' => st('Enable Modules'),
      'display' => TRUE,
      'type' => 'batch',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'resistoflex_task_enable_modules',
    ),
    'resistoflex_enable_themes' => array(
      'function' => 'resistoflex_enable_themes',
    ),
  );
}

/**
 * Return the Modules array.
 */
function resistoflex_modules_array() {

  // Modules to enable.
  $module_list = array(
    'master',
  );

  return $module_list;
}

function resistoflex_enable_themes() {
  variable_set('admin_theme');
}


/**
 * Installation task.
 * Enables all the modules that we need for the site.
 */
function resistoflex_task_enable_modules(&$install_state, $finished = '_resistoflex_module_batch_finished') {
  $batch = array();
  $operations = array();

  // Modules to enable.
  $module_list = resistoflex_modules_array();

  foreach ($module_list as $module) {
    $operations[] = array('resistoflex_task_enable_module', array($module));
  }

  $batch['title'] = st('Enabling Thor Equities modules.');
  $batch['init_message'] = st('Preparing list of modules to be enabled.');
  $batch['error_message'] = st('Ooops, there was an error installing some of the modules.');
  $batch['operations'] = $operations;

  if (isset($finished)) {
    $batch['finished'] = $finished;
  }

  return $batch;
}

/**
 * Installation task helper.
 *
 * Enables specific modules with detailed feedback if dependencies aren't met.
 */
function resistoflex_task_enable_module($modules, &$context) {
  if (!is_array($modules)) {
    $modules = array($modules);
  }

  foreach ($modules as $module) {
    $success = module_enable(array($module), TRUE);

    // Provide feedback if dependencies are missing.
    if (!$success) {
      $context['message'] = st('Dependencies missing while installing @module module', array('@module' => $module));
    }
    else {
      $context['message'] = st('installed @module module', array('@module' => $module));
    }

    $context['results'][] = ($success ? 'successfully enabled' : 'failed enabling') . ' ' . $module;
  }
}

/**
 * Finished callback of the module install task.
 * Inform the user of modules enabled.
 */
function _resistoflex_module_batch_finished($success, $results) {
  if ($success) {
    drupal_set_message(format_plural(count($results), 'One module was enabled.', '@count modules were enabled.'));
  }
}

/**@}*/
