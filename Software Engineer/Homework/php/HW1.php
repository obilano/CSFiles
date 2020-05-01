<!DOCTYPE HTML>
<html>
<head>
</head>
<body>

  <?php
    // define variables and set to empty values
    $bandName = $location = $date = $comment = $genre = "";

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
      $bandName = test_input($_POST["bandName"]);
      $location = test_input($_POST["location"]);
      $date = test_input($_POST["date"]);
      $genre = test_input($_POST["genre"]);
      $comment = test_input($_POST["comment"]);
    }

    function test_input($data) {
      $data = trim($data);
      $data = stripslashes($data);
      $data = htmlspecialchars($data);
      return $data;
    }
  ?>

  <h1>W.C. Handy Festival Form</h1>

  <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">

    <font face='Monospace'>
    Band Name: <input type="text" name="bandName">
    <br><br>
    Location: <input type="text" name="location">
    <br><br>
    Date: <input type="text" name="date">
    <br><br>
    Genre:
    <input type="radio" name="genre" value="Jazz">Jazz
    <input type="radio" name="genre" value="Blues">Blues
    <input type="radio" name="genre" value="Rock">Rock
    <input type="radio" name="genre" value="Other">Other
    <br><br>
    Comment: <textarea name="comment" rows="5" cols="40"></textarea>
    <br><br>
    <input type="submit" name="submit" value="Submit">

  </form>

  <?php
  echo "<h1>Event's Information </h1>";
  echo "Band name: $bandName <br><br>";
  echo "Location: $location <br><br>";
  echo "Date: $date <br><br>";
  echo "Genre: $genre <br><br>";
  echo "Comment: $comment <br><br>";
  ?>

</body>
</html>
