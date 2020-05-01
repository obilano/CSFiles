package test1;

import javafx.application.Application;
import javafx.stage.Stage;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.image.ImageView;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;
import javafx.scene.text.Text;

public class test1 extends Application {
	
	protected Text text = new Text(50, 50, "JavaFX Programming");
	
	protected BorderPane getPane() {
		HBox paneForB = new HBox(20);
		Button bleft = new Button("Left", new ImageView("image/left.gif"));
		Button bright = new Button("Right", new ImageView("image/right.gif"));
		paneForB.getChildren().addAll(bleft, bright);
		paneForB.setAlignment(Pos.CENTER);
		paneForB.setStyle("-fx-border-color: green");
		
		BorderPane pane = new BorderPane();
		pane.setBottom(paneForB);
		
		Pane paneForT = new Pane();
		paneForT.getChildren().add(text);
		pane.setCenter(paneForT);
		
		bleft.setOnAction(e -> text.setX(text.getX() - 10));
		bright.setOnAction(e -> text.setX(text.getX() + 10));
		
		return pane;
	}
	
	@Override
	public void start(Stage primaryStage) {
		Scene scene = new Scene(getPane(), 450, 200);
		primaryStage.setTitle("AWWGG");
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public static void main(String[] args) {
		  launch(args);
		}
}