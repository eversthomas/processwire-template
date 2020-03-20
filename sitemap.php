<?php

/**
 * Site map template
 *
 */

include("./inc/head.inc");
include("./inc/navigation.inc"); ?>

<div class="site-content site-wrapper">
	
	<main>
		
		<?php 
		function sitemapListPage($page) {

			echo "<li><a href='{$page->url}'>{$page->title}</a> ";	

			if($page->numChildren) {
				echo "<ul>";
				foreach($page->children as $child) sitemapListPage($child); 
				echo "</ul>";
			}

			echo "</li>";
		}

		echo "<ul class='sitemap'>";
		sitemapListPage($pages->get("/")); 
		echo "</ul>"; ?>
		
	</main>
	
	<?php include("./inc/sidebar.inc"); ?>
	
</div>

<?php include("./inc/foot.inc"); ?>

