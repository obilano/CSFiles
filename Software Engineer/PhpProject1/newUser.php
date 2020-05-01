<!DOCTYPE html>
 <html>
    <body>
        
    <?php session_start();

    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "march";

    $conn = new mysqli($servername, $username, $password, $dbname);
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    if($_REQUEST['pwd'] != $_REQUEST['repeat']){
        echo "<b>Password and Repeat need to match.<b>";
    } else {
        $duplicate = mysqli_query($conn, "SELECT username FROM users WHERE username = '$_REQUEST[user]'");
        if(mysqli_num_rows($duplicate) > 0 ) {
            echo "<b>The username is already used.<b>";
        } else {
            $sql = "INSERT INTO users (username, password) VALUES('$_REQUEST[user]', '$_REQUEST[pwd]')";     
            if ($conn->query($sql) === TRUE) {
                echo "<br>Your username has been added.<br>";  
            } else {
                echo "Error: " . $sql . "<br>" . $conn->error;
            }   

        }
    }

    ?>
        
       // direct to menu 
        <br><a href="index.php">Main menu</a>
    </body>
</html>