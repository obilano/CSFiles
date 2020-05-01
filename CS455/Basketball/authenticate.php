<?php session_start();

// TODO: create a database connection
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "una_bball";

$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// TODO: create variables for the input form data
$username = $password = "";

// TODO: validate form data
if ($_SERVER["REQUEST_METHOD"] == "POST") {
      $username = validate($_POST["enduser"]);
      $password = validate($_POST["userpass"]);
}

function validate($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

// TODO: query the database for the input user's credentials
$query = mysqli_query($conn, "SELECT * FROM users WHERE username = '$username'");
$row = mysqli_fetch_array($query);

// TODO: authenticate the user using password_verify
// if the input credentials are valid, put the user in the SESSION 
// (using the key "username") and clear the "error" in the session
// otherwise, put "invalid username or password" in the session using 
// the "error" key

if (password_verify($password, $row['password'])) {
        $_SESSION['username'] = $username;
        $_SESSION['error'] = '';

} else {
    $_SESSION['error'] = 'invalid username or password<br>';
}

// TODO: close the database connection
$conn ->close();
// TODO: remove this line of code that mimics a valid user


header("location:index.php");
?>
