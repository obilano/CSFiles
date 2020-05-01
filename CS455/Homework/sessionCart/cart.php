<?php  // 4. initialize the SESSION
session_start();
/*if (!isset($_SESSION['username'])) {
    header("location:index.html");
    exit;
}*/

// get the cart out of the SESSION (if the cart is not in the SESSION, create it)
if (isset($_SESSION['cart'])) {
    $cart = $_SESSION['cart'];
} else {
    $cart = array();
}
// add the new item to the cart
if (isset($_REQUEST['item'])) {
    $cart[] = $_REQUEST['item'];
}


// put the cart back into the session (adding a new item may have resulted in a new object in memory)
$_SESSION['cart'] = $cart;
?>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title></title>
    </head>
    <body>
        
        <?php
        // 5. display the user's name (saved in session previously)
        if (isset($_SESSION['username'])) {
            echo $_SESSION['username'] . "<br>";
        }
        echo "Hello, <br>";
        ?>

        Cart Contents:
        <hr/>
        <?php
        echo "<ul>";
        // 6. loop through the cart array and show each entry as a list item using the HTML li tag
        foreach ($cart as $value) {
            echo "<li> $value </li>";
        }

        echo "</ul>";
        ?>

        Add to your cart:<br/>
        <form action="cart.php" method="POST">
            <select name="item">
                <option>Dog</option>
                <option>Cat</option>
                <option>Hamster</option>

                <!-- 7. create a database using the ddl provided -->
                <!-- 8. add all items from the database as additional drop down options -->
                <?php
                $servername = "localhost";
                $username = "root";
                $password = "";
                $dbname = "officemin";

                $conn = new mysqli($servername, $username, $password, $dbname);
                if ($conn->connect_error) {
                    die("Connection failed: " . $conn->connect_error);
                }
                
                /*$sql = "CREATE DATABASE officemin";
                if ($conn->query($sql) === TRUE) {
                    echo "Database created successfully";
                } else {
                    echo "Error creating database: " . $conn->error;
                }*/
                
                $sql = mysqli_query($conn, "SELECT product FROM items");
                $products = Array();
                $i = 0;
                while ($row = $sql->fetch_array()) {
                    $products[] = $row['product'];
                    echo "<option> $products[$i] </option>";
                    $i++;
                }

                $conn->close();
                ?>

            </select>

            <input type="submit" value="Add" name="add" />
        </form>

    </body>
</html>
