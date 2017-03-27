<?php
/**
 * @file
 * Default template for a grid card.
 *
 * Available variables are:
 * - $image: An optional image to include in the card.
 * - $title: Title of card as link to content.
 * - $description: Description of card content.
 */

 $classes = 'cd m-t400 g--3';
?>

<?php if (isset($link)): ?>
  <a href="<?php print $link; ?>" class="<?php print $classes ?>">
<?php else: ?>
  <div class="<?php print $classes ?>">
<?php endif; ?>
  <?php if (isset($image)): ?>
  <div class="cd-ic">
    <?php print $image; ?>
  </div>
  <?php endif; ?>
  <div class="cd-c">
    <h3 class="cd-t">
      <?php print $title; ?>
    </h3>
    <?php if (isset($subtitle)): ?>
      <div class="cd-st">
        <?php print $subtitle; ?>
      </div>
    <?php endif; ?>
    <div class="cd-d">
      <?php print $description; ?>
    </div>
  </div>
<?php if (isset($link)): ?>
  </a>
<?php else: ?>
  </div>
<?php endif; ?>
