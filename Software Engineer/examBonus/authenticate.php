<?php session_start();

$enduser = $_POST['enduser'];
$userpass = $_POST['userpass'];

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "ajax";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";

$sql = "SELECT password FROM sysusers WHERE username = '$enduser'";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
   while($row = $result->fetch_assoc()) {    
        if (password_verify($userpass, $row["password"])){
            $_SESSION['username'] = $enduser;
            header("Location: users.php");
            exit;
        } 
   }
}

header("Location: index.html");

$conn->close();
?>
   
