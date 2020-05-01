<?php session_start();
    if (!isset($_SESSION['username'])) {
        header("location:index.php");
        // Make sure that code below does not get executed when we redirect.
        exit(0);
    }
    
    // TODO: connect to the database
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "una_bball";

    $conn = new mysqli($servername, $username, $password, $dbname);
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }
    
?>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title></title>
    </head>
    <body>
        
        <!-- TODO: display all opponent data except id -->        
        <?php
        $sql = "SELECT school, city, state FROM opponent ORDER BY id";
        $result = $conn->query($sql);

        echo "<table border='1'>
                <tr>
                <th>School</th>
                <th>City</th>
                <th>State</th>
                </tr>";

        while ($row = $result->fetch_assoc()) {
            echo "<tr>";
            echo "<td>" . $row['school'] . "</td>";
            echo "<td>" . $row['city'] . "</td>";
            echo "<td>" . $row['state'] . "</td>";
            echo "</tr>";
        }
        echo "</table>";

        $conn->close();
                
        ?>   
        
        <!-- TODO: create a navigational link to the main menu -->
        <a href="index.php"><h2>Main Menu</h2></a>
        
    </body>
</html>
