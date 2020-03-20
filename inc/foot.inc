<?php

// Output navigation for any children below the bodycopy.
// This navigation cycles through the page's children and prints
// a link and summary: 

?>

<footer id="footer" class="footer" role="contentinfo">
	<div class="site-wrapper">
		<div class="flex-widgets">
			<div class="widget">
				<?php echo $pages->get("/page-footer/")->footer_widget_1; ?>
			</div>
			<div class="widget">
				<?php echo $pages->get("/page-footer/")->footer_widget_2; ?>
			</div>
			<div class="widget">
				<?php echo $pages->get("/page-footer/")->footer_widget_3; ?>
			</div>
		</div>
		<hr>
		<div class="footer-information">
			<p>Powered by <a href='https://selbstorganisationsentwicklung.de'>Thomas Evers</a></p>
		</div>
	</div>
	</div>
</footer>

</body>
</html>
