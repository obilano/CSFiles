<?php session_start();
if (!isset($_SESSION['username'])) {
    header("Location: index.html");
    exit;
}

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "ajax";

$con = new mysqli($servername, $username, $password, $dbname);
if ($con->connect_error) {
    die("Connection failed: " . $con->connect_error);
}

if(isset($_GET['fname'])){
    $sql = "DELETE FROM user WHERE FirstName = '".$_GET['fname']."'";
    mysqli_query($con, $sql);
    header("Refresh: 0; url=users.php");
}

$con->close();

?>

