<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta http-equiv="Content-Type" content=text/html; charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
        if (isset($_COOKIE['user'])){
           echo "Welcome back, " . $_COOKIE['user']; 
        } else {
            
       
       
        ?>
        Login:
        <form action="welcome.php" method="get">
            Username: <input type="text" name="username">
            Password: <input type="password" name="pwd">
            Remember Me: <input type="checkbox" name="remember" value="ON" />
            <input type="submit">
        </form>
        <?php
        }
        ?>
    </body>
</html>
