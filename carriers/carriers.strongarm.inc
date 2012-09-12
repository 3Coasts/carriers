<?php
/**
 * @file
 * carriers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function carriers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_carrier';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_carrier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_carrier';
  $strongarm->value = '1';
  $export['node_preview_carrier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_carrier';
  $strongarm->value = 0;
  $export['node_submitted_carrier'] = $strongarm;

  return $export;
}
