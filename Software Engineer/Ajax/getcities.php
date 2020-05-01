<?php

  //print_r($_REQUEST);
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "ajax_demo";
    // Create connection
    $conn = new mysqli($servername, $username, $password, $dbname);
    
    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }
    
    /*if ($_REQUEST['state'] == 'Colorado') {
      echo "<select>";
      echo "<option value='Denver'>Denver</option>";
      //echo "</select>";
    } else {
      echo "<select>";
      echo "<option value='Montgomery'>Montgomery</option>";
    }*/

    $sql = "SELECT * FROM cities";
    $result = $conn->query($sql);
    if ($result->num_rows > 0) {
        $i = 0;
        $j = 0;
        // output data of each row
        echo "<select>";
        echo "<option>";
        while($row = $result->fetch_assoc()) {
            $state[] = $row['state_name'];
            if ($_REQUEST['state'] == $state[$i]) {
                $cities[] = $row['city_name'];
                echo "<option value =  $cities[$j]>$cities[$j]</option>";
                $j++;
            }
        $i++;
        }
        echo "</select>";
    } else {
        echo "0 results";
    }
    
    $conn->close();
?>
