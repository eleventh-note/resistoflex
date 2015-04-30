<div class="service">
  <?php if (!empty($content['title']) && $content['title'] != '&nbsp;'): ?>
    <?php print $content['title']; ?>
  <?php endif; ?>

  <?php if (!empty($content['photo']) && $content['photo'] != '&nbsp;'): ?>
    <div class="service-photos">
      <?php print $content['photo']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['description']) && $content['description'] != '&nbsp;'): ?>
    <div class="service-description">
      <?php print $content['description']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['attachment']) && $content['attachment'] != '&nbsp;'): ?>
    <div class="service-attachment">
      <h2>Downloadable Files</h2>
      <?php print $content['attachment']; ?>
    </div>
  <?php endif; ?>
</div>
