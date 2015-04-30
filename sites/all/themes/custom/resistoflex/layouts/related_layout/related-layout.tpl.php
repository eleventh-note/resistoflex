<div class="related">

  <?php if (!empty($content['photo']) && $content['photo'] != '&nbsp;'): ?>
    <div class="related-photo">
      <?php print $content['photo']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['title']) && $content['title'] != '&nbsp;'): ?>
    <?php print $content['title']; ?>
  <?php endif; ?>

  <?php if (!empty($content['description']) && $content['description'] != '&nbsp;'): ?>
    <div class="related-description">
      <?php print $content['description']; ?>
    </div>
  <?php endif; ?>

</div>
