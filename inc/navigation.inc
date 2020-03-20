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

<section class="navigation-bar site-wrapper">
		<input type="checkbox" id="hamburger">
		<label for="hamburger" class="hamburger">
			<span class="line"></span>
			<span class="line"></span>
			<span class="line"></span>
		</label>
		<nav class="nav" role="navigation">
			<div class="brand">
				<img src="https://bateson.org/site/templates/img/kreis.png">
			</div>
			<ul id='topnav' role='navigation'><?php

				// Create the top navigation list by listing the children of the homepage. 
				// If the section we are in is the current (identified by $page->rootParent)
				// then note it with <a class='on'> so we can style it differently in our CSS
				// and add a text that is visually hidden, but available for screen readers.
				// In this case we also want the homepage to be part of our top navigation, 
				// so we prepend it to the pages we cycle through:

				$homepage = $pages->get("/"); 
				$children = $homepage->children;
				$children->prepend($homepage); 

				foreach($children as $child) {
					if ($child === $page->rootParent) {
						$class = " class='on'";
						$indicator = "<span class='visually-hidden'>Current page: </span>";
						$ariaState = " aria-current='true' ";
					}
					$class = $child === $page->rootParent ? " class='on'" : '';
					echo "<li><a$class$ariaState href='{$child->url}'>$indicator{$child->title}</a></li>";
				}

			?></ul>
	</nav>
</section>