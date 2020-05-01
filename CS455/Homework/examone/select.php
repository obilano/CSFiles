<?php session_start();
// TODO make sure only admins can access this page
if (!isset($_SESSION['user'])) {
    header("Location: index.php");
    exit;
}

?>
<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <!-- TODO display ALL data currently in the items table -->
        <?php
            $servername = "localhost";
            $username = "root";
            $password = "";
            $dbname = "thestore";

            $conn = new mysqli($servername, $username, $password, $dbname);
                if ($conn->connect_error) {
                    die("Connection failed: " . $conn->connect_error);
            }
            
            $sql = "SELECT name, price FROM items";
            $result = $conn->query($sql);

        if ($result->num_rows > 0) {
            echo "<table><tr><th>Name</th><th>Price</th></tr>";
    // output data of each row
            while($row = $result->fetch_assoc()) {
                echo "<tr><td>" . $row["name"]. "</td><td>" . " " . $row["price"]. "</td></tr>";
            }
            echo "</table>";
        } else {
            echo "0 results";
        }
        $conn->close();
         
        ?>
        
        <a href="menu.php">Main menu</a>
    </body>
</html>
