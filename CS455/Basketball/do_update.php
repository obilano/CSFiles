<?php session_start();
if (!isset($_SESSION['username'])) {
    header("location:index.php");
    // Make sure that code below does not get executed when we redirect.
    exit(0);
}

// TODO: connect to the database
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "una_bball";

$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// TODO: validate form data
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $id = validate($_POST["id"]);
    $school = validate($_POST["school"]);
    $city = validate($_POST["city"]);
    $state = validate($_POST["state"]);     
}

function validate($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}


// TODO: update the city and state based on the id
// NOTE: you can't update the school name
$sql = "UPDATE opponent SET city = '$city', state = '$state' WHERE id = '$id'";
if ($conn->query($sql) === TRUE) {
    $_SESSION['error'] = 'Updated! <br>';
} else {
    $_SESSION['error'] = "Error updating record: <br>" . $conn->error;
}

// TODO: close the database connection
$conn->close();

header("location:index.php");
?>

