<?php session_start();

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "ajax";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";

$sql = "SELECT password FROM sysusers";
$result = $conn->query($sql);


if ($result->num_rows > 0) {
   while($row = $result->fetch_assoc()) {
        if ($_REQUEST['enduser'] === "foo") {
            if (password_verify($_REQUEST['userpass'], $row["password"])){
            $_SESSION['error'] = '';
            header("Location: catalog.php");
            $_SESSION['username'] = $_REQUEST['enduser'];
            } else {
                $_SESSION['error'] = 'invalid username or password';
            }
        } else {
                $_SESSION['error'] = 'invalid username or password';
        }
   }
}
$conn->close();
?>
   
