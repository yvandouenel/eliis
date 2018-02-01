<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
    <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="row">
  <?php foreach ($rows as $id => $row): ?>
      <div class="col-md-2">
          <div<?php if ($classes_array[$id]) {
            print ' class="' . $classes_array[$id] . '"';
          } ?>>
            <?php print $row; ?>
          </div>
      </div>
  <?php endforeach; ?>
</div>
