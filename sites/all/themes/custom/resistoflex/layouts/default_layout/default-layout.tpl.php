<?php

/**
 * @file
 * default page layout template.
 */
?>

<div class="resistoflex main-wrapper">
  <div class="header">
    <div class="logo"></div>
    <div class="navbar">
      <?php print $content['header_navbar']; ?>
    </div>
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
