<?php
session_start();

// get cart out of the SESSION (if the cart is not in the SESSION, create it)
if (isset($_SESSION['cart'])) {
    $cart = $_SESSION['cart'];
} else {
    $cart = array();
}
// add the new item to the cart
if (isset ($_SESSION['item'])){
    $cart[] = $_POST['item'];
}   
// put cart back into the session (append may result in new object in memory)
$_SESSION['cart'] = $cart;
?>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Shopping Cart</title>
    </head>
    <body>
        <?php
        // display the message, if any, and then clear it
        if (isset($_SESSION['msg'])) {
            echo $_SESSION['msg'] . "<br>";
            unset($_SESSION['msg']);
        }
        echo "<hr>";

        // TODO: if an administrator is using the system display:
        // Administrator username 
        // Where "username" is the admin's username instead of the welcome
        // guest message.
        if (isset ($_POST["username"])){
            echo "Welcome," . $_POST["username"] . "<br>";
            echo "<hr>";
        }
        
        ?>

        Cart Contents:
        <hr/>
        <?php
        echo "<ul>";
        $arrlength = count($cart);
        for ($x = 0; $x < $arrlength; $x++) {
            echo "<li>" . $cart[$x] . "</li>";
        }
        echo "</ul>";
        ?>

        Add to your cart:<br/>
        <form action="index.php" method="POST">
            <select name="item">
                <option>Mouse $23.50</option>
                <option>Flash Drive $9.95</option>
                <option>WebCam $23.99</option>

                <!-- TODO add items from the database as additional drop down options -->
                <?php
                $servername = "localhost";
                $username = "root";
                $password = "";
                $dbname = "thestore";

                $conn = new mysqli($servername, $username, $password, $dbname);
                if ($conn->connect_error) {
                    die("Connection failed: " . $conn->connect_error);
                }

                $sql = "SELECT name from items";
                $result = mysqli_query($conn, $sql);
                if (mysqli_num_rows($result) > 0) {
                    // output data of each row
                    while ($row = mysqli_fetch_assoc($result)) {
                        echo "<option>" . $row['name'] . "</option><br>";
                    }
                } else {
                    echo "0 results";
                }
                ?>
            </select>

            <input type="submit" value="Add" name="add" />
        </form>
    </body>
    <footer><a href='login.php'>Administrator Access</a></footer>
</html>
