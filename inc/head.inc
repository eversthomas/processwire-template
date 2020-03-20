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
<!DOCTYPE html>
<html lang="de">
<head>
	<meta charset="utf-8">
	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
	<meta name="viewport" content="width=device-width, initial-scale=1">

	<title><?php echo $page->get("headline|title"); ?></title>

	<meta name="description" content="<?php echo $page->summary; ?>" />

	<meta name="generator" content="ProcessWire <?php echo $config->version; ?>" />

	<!-- <link rel="stylesheet" type="text/css" href="<?php // echo $config->urls->templates?>styles/main.css" /> -->
	<link rel="stylesheet" type="text/css" href="<?php echo Sassify::css('sass/style.scss'); ?>">

	<!--[if IE]>
	<link rel="stylesheet" type="text/css" href="<?php echo $config->urls->templates?>styles/ie.css" />
	<![endif]-->	

	<!-- This website is powered by ProcessWire CMF/CMS - https://processwire.com -->
</head>
<body>

	<a href="#bodycopy" class="visually-hidden element-focusable bypass-to-main">Skip to content</a>

	<header id="masthead" class="masthead">

		<div class="site-information">
			<div class="image">
				<img src="https://bateson.org/site/templates/img/tom_geist_natur_klein.png">
			</div>
			
			<div class="text">

				<h1 id='title'><?php 

					// The statement below asks for the page's headline or title. 
					// Separating multiple fields with a pipe "|" returns the first
					// one that has a value. So in this case, we print the headline
					// field if it's there, otherwise we print the title. 

					echo $page->get("headline|title"); 

				?></h1>
				<h2><?php echo $page->get("summary"); ?></h2>
				
			</div>

		</div>
		
	</header>
