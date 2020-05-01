<?php
session_start();
// TODO make sure only admins can access this page
if (!isset($_SESSION['user'])) {
    header("Location: index.php");
    exit;
}
?>


<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title></title>
    </head>
    <body>
        <!-- TODO delete the item identified and display feedback HERE
            (i.e., the delete either worked or not)
        -->
        <?php
        $pname = $_POST['pname'];

        $servername = "localhost";
        $username = "root";
        $password = "";
        $dbname = "thestore";

        // connect to the database
        $conn = new mysqli($servername, $username, $password, $dbname);
        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }
        $sql = "DELETE FROM items WHERE name='$pname'";
        if ($conn->query($sql) === TRUE) {
            $_SESSION['msg'] = "New record created successfully";
        } else {
            $_SESSION['msg'] = "Error: " . $sql . "<br>" . $conn->error;
        }

        $conn->close();
        ?>

        <a href="menu.php">Main menu</a>
    </body>
</html>
