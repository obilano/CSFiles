/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The DetailedClockPane Class
 * Due Date:	July 8, 2019
 */

import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;

public class DetailedClockPaneTest extends Application {
    @Override
    // Override the start method in the Application class
    public void start(Stage primaryStage){
        // Create a clock and a label
        DetailedClockPane clock = new DetailedClockPane();
        String timeString = clock.getHour() + ":" + clock.getMinute() + ":" + clock.getSecond();
        Label lblCurrentTime = new Label(timeString);
        
        // Place clock and label in border pane
        BorderPane pane = new BorderPane();   
        pane.setCenter(clock);
        pane.setBottom(lblCurrentTime);
        BorderPane.setAlignment(lblCurrentTime, Pos.TOP_CENTER);
        
        // Create a scene and place it in the stage
        Scene scene = new Scene(pane, 250, 250);
        primaryStage.setTitle("DetailedClockPaneTest"); // Set the stage title
        primaryStage.setScene(scene); // Place the scene in the stage
        primaryStage.show(); // Display the stage
    }
    
    /**
    * The main method is only needed for the IDE with limited JavaFX support.
    * Not needed for running from the command line.
    */
    public static void main(String[] args) {
        Application.launch(args);
    }
}