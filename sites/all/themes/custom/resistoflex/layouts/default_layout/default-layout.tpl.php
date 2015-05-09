<?php

/**
 * @file
 * default page layout template.
 */
?>

<div class="resistoflex main-wrapper">
  <div class="header">
    <div class="inner">
      <div class="logo"><img src="<?php print drupal_get_path('theme', 'resistoflex'); ?>/img/resistoflex-logo.png" alt="Resistoflex Logo" /></div>
      <div class="right-side">
        <div class="title">
          <h1>Resistoflex  Construction Services, Inc.</h1>
          <h2>Surface Management Specialist</h2>
        </div>
        <div class="navbar">
          <?php print $content['header_navbar']; ?>
        </div>
      </div>
    </div>
  </div>
  <div class="mobile-navbar">
    <?php print $content['header_navbar']; ?>
  </div>
  <div class="content">
    <?php print $content['main_content']; ?>
  </div>
  <div class="footer">
    <div class="navbar">
      <?php print $content['footer_navbar']; ?>
    </div>
    <div class="copyright">
      Copyright Resistoflex &copy; <?php print date('Y', time()); ?> | All rights reserved.
    </div>
  </div>
</div>
