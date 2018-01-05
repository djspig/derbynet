<?php // GENERATED FROM TEMPLATE -- do not edit this file

// Back button is false for no back button, or the name of the "back" page.
function make_banner($banner_title, $back_button = 'index.php') {
  echo "<div class=\"banner\">\n";

  echo "<div class=\"banner_title\">".htmlspecialchars($banner_title, ENT_QUOTES, 'UTF-8')."</div>\n";

  if ($back_button) {
    echo "<div class=\"back_button\" onclick=\"window.location='".$back_button."'; return false;\">\n";
    echo "<img src=\"img/back-button.png\"/>\n";
    echo "</div>\n";
  }

  if (isset($_SESSION['role']) && $_SESSION['role']) {
    echo "<div class=\"role\">In ".$_SESSION['role']." role.<br/>";
    echo "<a href=\"login.php?logout\">Log out</a></div>\n";
  }

  echo "<img class=\"logo\" src=\"img/derbynet.png\"/>\n";
  echo "</div>\n";  // class banner

  echo "<div class=\"banner_version\">@BRANCH@</div>\n";
}
?>