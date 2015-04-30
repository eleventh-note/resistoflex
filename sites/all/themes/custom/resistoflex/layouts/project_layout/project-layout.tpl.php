<div class="project">
  <div class="project-details">
    <?php if (!empty($content['title']) && $content['title'] != '&nbsp;'): ?>
      <?php print $content['title']; ?>
    <?php endif; ?>

    <?php if (!empty($content['description']) && $content['description'] != '&nbsp;'): ?>
      <div class="project-description">
        <?php print $content['description']; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['client']) && $content['client'] != '&nbsp;'): ?>
      <div class="project-client">
        <?php print $content['client']; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['location']) && $content['location'] != '&nbsp;'): ?>
      <div class="project-location">
        <?php print $content['location']; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php if (!empty($content['photo']) && $content['photo'] != '&nbsp;'): ?>
    <div class="project-photos">
      <?php print $content['photo']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['used_products']) && $content['used_products'] != '&nbsp;'): ?>
    <div class="project-used_products">
      <h3>Used Products</h3>
      <?php print $content['used_products']; ?>
    </div>
  <?php endif; ?>

   <?php if (!empty($content['availed_services']) && $content['availed_services'] != '&nbsp;'): ?>
    <div class="project-availed_services">
      <h3>Availed Services</h3>
      <?php print $content['availed_services']; ?>
    </div>
  <?php endif; ?>

</div>
