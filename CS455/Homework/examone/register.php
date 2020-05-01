<?php
session_start();
if (!isset($_SESSION['user'])) {
    header("Location: index.php");
    exit(0);
}

if (isset($_POST["username"])) {
    $user = $_POST["username"];

    // TODO: if the first password field is not blank and it matches the 
    // second password field, insert the new user into the database
    // (you will need to encrypt the password so that authenticate continues
    //  to work correctly)


    if ($_POST["password1"] === $_POST["password2"]) {
        $hash = password_hash($_POST["password1"], PASSWORD_DEFAULT);
        if (true) {

            // TODO insert username and encrypted pwd into the users table         

            $servername = "localhost";
            $username = "root";
            $password = "";
            $dbname = "thestore";

            $conn = new mysqli($servername, $username, $password, $dbname);
            if ($conn->connect_error) {
                die("Connection failed: " . $conn->connect_error);
            }
            
            $sql = "INSERT INTO users (username, password) VALUES ('$user', '$hash')";

            // put the newly registered user's name into the SESSION for later use
            $_SESSION['user'] = $user;

            // forward to the menu
            header("Location: menu.php");
        } else {
            $msg = "Passwords do not match.  Try again.<br>";
        }
    }
}
?>
<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
        // display the local message
        if (isset($msg)) {
            echo $msg;
        }
        ?>

        <form action="register.php" method="POST">
            Username:<br>
            <input type="text" name="username">
            <br>
            Password:<br>
            <input type="password" name="password1">
            <br>
            Repeat Password:<br>
            <input type="password" name="password2">
            <br><br>
            <input type="submit" value="Register"/>
        </form> 
    </body>
</html>
