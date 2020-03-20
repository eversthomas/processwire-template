<?php

/**
 * Demo site header include file (HTML5)
 *
 * Note that this file has nothing to do with ProcessWire. We just split our common 
 * header and footer markup into separate files (head.inc and foot.inc) like this, 
 * since it was common to all of our templates. 
 *
 */

?>

<aside id="sidebar" role='complementary'>

	<div class="submenu">
		<?php

		// Output subnavigation
		// 
		// Below we check to see that we're not on the homepage, and that 
		// there are at least one or more pages in this section.
		// 
		// Note $page->rootParent is always the top level section the page is in, 
		// or to word differently: the first parent page that isn't the homepage.

		if($page->path != '/' && $page->rootParent->numChildren > 0) { 

			// We have determined that we're not on the homepage
			// and that this section has child pages, so make navigation: 

			echo "<ul id='subnav' class='nav' role='navigation'>";

			foreach($page->rootParent->children as $child) {
				$class = $page === $child ? " class='on'" : '';
				$ariaState = $page === $child ? " aria-current='true' " : '';
				echo "<li><a$class$ariaState href='{$child->url}'>{$child->title}</a></li>";
			}

			echo "</ul>";
		} ?>
		</div>
	
		<div class='sidebar_item'>

			<?php

			// if the current page has a populated 'sidebar' field, then print it,
			// otherwise print the sidebar from the homepage
					
			if($page->sidebar) echo $page->sidebar; 
			else echo $homepage->sidebar; 
			?>


		</div>
	
		<div class="search">
			<form id='search_form' action='<?php echo $config->urls->root?>search/' method='get'>
				<label for='search_query' class='visually-hidden'>Search:</label>
				<input type='text' name='q' id='search_query' value='<?php echo htmlentities($input->whitelist('q'), ENT_QUOTES, 'UTF-8'); ?>' />
				<button type='submit' id='search_submit'>Search</button>
			</form>
		</div>
	
</aside>
