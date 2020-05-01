<!DOCTYPE html>
 <html>
     <</body>
    <?php session_start();
    if (!isset($_SESSION['username'])) {
        header("location:index.php");
        // Make sure that code below does not get executed when we redirect.
        exit;
    }

    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "march";

    $conn = new mysqli($servername, $username, $password, $dbname);
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }


    // TODO: create the SQL insert statement to insert the data passed to this
    // page via the $_POST superglobal
    $sql = "INSERT INTO team (seed, school, conference) VALUES( $_REQUEST[seed], '$_REQUEST[school]' , '$_REQUEST[conf]')";

    if ($conn->query($sql) === TRUE) {
        echo "New record created successfully";  
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();


    ?>
// direct to main menu
         <br> <a href="index.php">Main menu</a>
    </body>
</html>
