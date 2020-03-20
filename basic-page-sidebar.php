<?php

/**
 * Basic with sidebar template
 *
 */

include("./inc/head.inc");
include("./inc/navigation.inc"); ?>

<div class="site-content site-wrapper">
	
	<main>
		<?php echo $page->body; ?>
	</main>
	
	<?php include("./inc/sidebar.inc"); ?>
	
</div>

<?php include("./inc/foot.inc"); ?>