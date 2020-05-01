/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	UI Controls Demo
 * Due Date:	July 12, 2019
 */

import javafx.application.Application;
import javafx.event.*;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.geometry.*;
import javafx.scene.control.*;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.*;
import javafx.scene.paint.*;
import javafx.scene.text.*;
import javafx.stage.Stage;
import javafx.scene.image.ImageView;
import javafx.scene.control.TextField;

public class UIControlsDemo extends Application {
	@Override
	public void start(Stage primaryStage) {		
		BorderPane pane = new BorderPane();
		pane.setPadding(new Insets(5, 5, 5, 5));
		
		//set font attributes
		Font fontBoldItalic = Font.font("Times New Roman", FontWeight.BOLD, FontPosture.ITALIC, 20);
		Font fontBold = Font.font("Times New Roman", FontWeight.BOLD, FontPosture.REGULAR, 20);
		Font fontItalic = Font.font("Times New Roman", FontWeight.NORMAL, FontPosture.ITALIC, 20);
		Font fontNormal = Font.font("Times New Roman", FontWeight.NORMAL, FontPosture.REGULAR, 20);
		
		//set text fonts
		HBox h1 = new HBox(20);
		FlowPane fPane = new FlowPane();
		fPane.setAlignment(Pos.CENTER);
		h1.setAlignment(Pos.TOP_CENTER);
		h1.setStyle("-fx-border-color:green");
		Text t1 = new Text(" ");
		fPane.getChildren().add(t1);
		h1.getChildren().add(fPane);
		t1.setFont(fontNormal);
		pane.setCenter(h1);
		
		//set text field details
		HBox inputMessage = new HBox(1);
		inputMessage.setAlignment(Pos.TOP_LEFT);
		inputMessage.setStyle("-fx-border-width:2px; -fx-border-color:green");
		inputMessage.setPadding(new Insets(5, 5, 5, 5));
		Label l1 = new Label("Enter a new Message: ");
		l1.setAlignment(Pos.TOP_LEFT);
		TextField tFMessage = new TextField();
		tFMessage.setPrefColumnCount(28);
		tFMessage.setOnAction(e -> t1.setText(tFMessage.getText()));
		tFMessage.setAlignment(Pos.TOP_RIGHT);
		inputMessage.getChildren().addAll(l1, tFMessage);
		pane.setTop(inputMessage);
		
		//set radio button menu
		VBox radioColors = new VBox(20);
		radioColors.setStyle("-fx-border-width:2px; -fx-border-color:green");
		radioColors.setAlignment(Pos.TOP_LEFT);
		radioColors.setPadding(new Insets(5, 5, 5, 5));
		RadioButton red = new RadioButton("Red ");
		RadioButton green = new RadioButton("Green");
		RadioButton blue = new RadioButton("Blue ");
		red.setOnAction(e -> t1.setFill(Color.RED));
		green.setOnAction(e -> t1.setFill(Color.GREEN));
		blue.setOnAction(e -> t1.setFill(Color.BLUE));
		radioColors.getChildren().addAll(red, green, blue);
		ToggleGroup group = new ToggleGroup();
		red.setToggleGroup(group);
		green.setToggleGroup(group);
		blue.setToggleGroup(group);
		pane.setLeft(radioColors);
		
		//set left and right button with images
		HBox b1 = new HBox(25);
		b1.setStyle("-fx-border-width:2px; -fx-border-color:green");
		b1.setAlignment(Pos.CENTER);
		Button bRight = new Button("Right");
		bRight.setGraphic(new ImageView("image/right.gif"));
		bRight.setOnAction(e -> fPane.setAlignment(Pos.CENTER_RIGHT));
		Button bLeft = new Button("Left");
		bLeft.setGraphic(new ImageView("image/left.gif"));
		bLeft.setOnAction(e -> fPane.setAlignment(Pos.CENTER_LEFT));
		b1.getChildren().addAll(bLeft, bRight);
		pane.setBottom(b1);
		
		//set font event handler
		VBox paneForCheckBoxes = new VBox(20);
		paneForCheckBoxes.setStyle("-fx-border-width:2px; -fx-border-color:green");
		paneForCheckBoxes.setAlignment(Pos.TOP_CENTER);
		paneForCheckBoxes.setPadding(new Insets(5, 5, 5, 5));
		CheckBox chkbold = new CheckBox("Bold ");
		CheckBox chkItalic = new CheckBox("Italic");
		EventHandler<ActionEvent> handler = e ->{
			if(chkbold.isSelected() && chkItalic.isSelected()){
				t1.setFont(fontBoldItalic);
			}
			else if(chkbold.isSelected()){
				t1.setFont(fontBold);
			}
			else if(chkItalic .isSelected()){
				t1.setFont(fontItalic);
			}
			else{
				t1.setFont(fontNormal);
			}
		};		
		chkbold.setOnAction(handler);
		chkItalic.setOnAction(handler);
		paneForCheckBoxes.getChildren().addAll(chkbold, chkItalic );
		pane.setRight(paneForCheckBoxes);
		
		//add the Scene to the Stage
		Scene BScene = new Scene(pane, 600, 240);
		primaryStage.setScene(BScene);
		primaryStage.setTitle("UICOntrolsDemo");	
		primaryStage.show();
		
	}
	
	public static void main(String[] args) {
		  launch(args);
		  
	}
	
}



