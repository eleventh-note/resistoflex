<div class="client">
  <?php if (!empty($content['logo']) && $content['logo'] != '&nbsp;'): ?>
    <div class="client-image">
      <?php if (!empty($content['url']) && $content['url'] != '&nbsp;'): ?>
        <a href="<?php print $content['url']?>" target="_blank">
      <?php endif; ?>
      <?php print $content['logo']; ?>
      <?php if (!empty($content['url']) && $content['url'] != '&nbsp;'): ?>
        </a>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['title']) && $content['title'] != '&nbsp;'): ?>
    <?php print $content['title']; ?>
  <?php endif; ?>

  <?php if (!empty($content['description']) && $content['description'] != '&nbsp;'): ?>
    <p class="client-description">
      <?php print $content['description']; ?>
    </p>
  <?php endif; ?>

</div>
