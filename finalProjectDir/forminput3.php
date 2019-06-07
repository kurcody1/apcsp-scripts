<!DOCTYPE html>
<html>
  <head>
    <title>Form Input 2</title>
  </head>


  <body>

    <h1>Physics Distance Calculator</h1>
    <p>Enter in order: height, velocity, angle above the horizontal, and amount of time. All units must be converted to meters and seconds!</p>
    <li>Notice that the output values are different than the input values.</p>
    <p>Model the data you find by graphing the x and y values at certain times to get a better idea of the ball's projectile</p>
    <p>By finding the value of time where the y position becomes 0, you can see how far the ball went in the x direction.</p>
    <?php
       // define variables and set to empty values
       $arg1 = $arg2 = $arg3 = $arg4 = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $arg2 = test_input($_POST["arg2"]);
	 $arg3 = test_input($_POST["arg3"]);
	 $arg4 = test_input($_POST["arg4"]);
         exec("/usr/lib/cgi-bin/sp2a/finalProjectmake " . $arg1 . " " . $arg2 . " ". $arg3 . " " . $arg4, $output, $retc);
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Arg1: <input type="text" name="arg1"><br>
      Arg2: <input type="text" name="arg2"><br>
      Arg3: <input type="text" name="arg3"><br>
      Arg4: <input type="text" name="arg4"><br>
      <br>
      <input type="submit" value="Go!">
    </form>

    <?php
       // only display if return code is numeric - i.e. exec has been called
       if (is_numeric($retc)) {
         echo "<h2>Your Input:</h2>";
         echo $arg1;
         echo "<br>";
         echo $arg2;
         echo "<br>";
	 echo $arg3;
	 echo "<br>";
	 echo $arg4;
	 echo "<br>";
       
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
         echo "<h2>Program Return Code:</h2>";
         echo $retc;
       }
    ?>
    
  </body>
</html>
