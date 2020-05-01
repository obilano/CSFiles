<?php session_start();

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "march";

$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// TODO: use the users table for authentication
$query = mysqli_query($conn, "SELECT username FROM users WHERE username = '$_REQUEST[enduser]'");
$row = mysqli_fetch_array($query);
$row['username'];

if ($_REQUEST['enduser'] === $row['username']) {

    $_SESSION['username'] = $_REQUEST['enduser'];
    $_SESSION['error'] = '';

} else {
    $_SESSION['error'] = 'invalid username or password';
}

header("location:index.php");
?>