<!DOCTYPE html>
<html>
<head>
<style>
table {
    width: 100%;
    border-collapse: collapse;
}

table, td, th {
    border: 1px solid black;
    padding: 5px;
}

th {text-align: left;}
</style>
</head>
<body>

<?php

$q='';
if(isset($_GET["q"])){
    $q = intval($_GET["q"]);
}
$con = mysqli_connect('localhost','root','','ajax');
if (!$con) {
    die('Could not connect: ' . mysqli_error($con));
}

/*if(isset($_GET['fname'])){
    $sql = "DELETE FROM user WHERE FirstName = '".$_GET['fname']."'";
    mysqli_query($con, $sql);
    header("Location: user.php");
}*/

mysqli_select_db($con,"ajax");
$sql="SELECT * FROM user WHERE id = '$q'";
$result = mysqli_query($con,$sql);

echo "<table>
<tr>
<th>Firstname</th>
<th>Lastname</th>
<th>Age</th>
<th>Hometown</th>
<th>Job</th>
<th>Delete</th>
</tr>";

while($row = mysqli_fetch_array($result)) {

    echo "<tr>";
    echo "<td>" . $row['FirstName'] . "</td>";
    echo "<td>" . $row['LastName'] . "</td>";
    echo "<td>" . $row['Age'] . "</td>";
    echo "<td>" . $row['Hometown'] . "</td>";
    echo "<td>" . $row['Job'] . "</td>";
    echo "<td>" . "<a href='delete.php?fname=".$row['FirstName']."'>Delete<a></td>";
    echo "</tr>";
   
}
echo "</table>";

mysqli_close($con);

?>
</body>
</html>