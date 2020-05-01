/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The DetailedClockPane Class
 * Due Date:	July 8, 2019
 */

import java.util.Calendar;
import java.util.GregorianCalendar;
import javafx.scene.Group;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Line;
import javafx.scene.text.Text;
import javafx.scene.transform.Rotate;

public class DetailedClockPane extends Pane {
    private int hour;
    private int minute;
    private int second;
    
    // Clock pane's width and height
    private double w = 250, h = 250;
    
    /** Construct a default clock with the current time */
    public DetailedClockPane() {
        setCurrentTime();
    }
    
    /** Construct a clock with specified hour, minute, and second */
    public DetailedClockPane(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
        paintClock();
    }
    
    /** Return hour */
    public int getHour() {
        return hour;
    }
    
    /** Set a new hour */
    public void setHour(int hour) {
        this.hour = hour;
        paintClock();
    }
    
    /** Return minute */
    public int getMinute() {
        return minute;
    }
    /** Set a new minute */
    public void setMinute(int minute) {
        this.minute = minute;
        paintClock();
    }
    
    /** Return second */
    public int getSecond() {
        return second;
    }
    
    /** Set a new second */
    public void setSecond( int second) {
        this.second = second;
        paintClock();
    }
    
    /** Return clock pane's width */
    public double getW() {
        return w;
    }
    
    /** Set clock pane's width */
    public void setW( double w) {
        this.w = w;
        paintClock();
    }
    
    /** Return clock pane's height */
    public double getH() {
        return h;
    }
    /** Set clock pane's height */
    public void setH(double h) {
        this.h = h;
        paintClock();
    }
    
    /* Set the current time for the clock */
    public void setCurrentTime() {
        // Construct a calendar for the current date and time
        Calendar calendar = new GregorianCalendar();
        // Set current hour, minute and second
        this.hour = calendar.get(Calendar.HOUR_OF_DAY);
        this.minute = calendar.get(Calendar.MINUTE);
        this.second = calendar.get(Calendar.SECOND);
        paintClock(); // Repaint the clock
    }
    
    /** Paint the clock */
    private void paintClock() {
        // Initialize clock parameters
        double clockRadius = Math.min(w, h) * 0.8 * 0.5;
        double centerX = w / 2;
        double centerY = h / 2;
        
        // Draw circle
        Circle circle = new Circle(centerX, centerY, clockRadius);
        circle.setFill(Color.WHITE);
        circle.setStroke(Color.BLACK);
        
        // Draw second hand
        double sLength = clockRadius * 0.8;
        double secondX = centerX + sLength * Math.sin(second * (2 * Math.PI/ 60));
        double secondY = centerY - sLength * Math.cos(second * (2 * Math.PI/ 60));
        Line sLine = new Line(centerX, centerY, secondX, secondY);
        sLine.setStroke(Color.RED);
        
        // Draw minute hand
        double mLength = clockRadius * 0.65;
        double xMinute = centerX + mLength * Math.sin(minute * (2 * Math.PI/ 60));
        double minuteY = centerY - mLength * Math.cos(minute * (2 * Math.PI/ 60));
        Line mLine = new Line(centerX, centerY, xMinute, minuteY);
        mLine.setStroke(Color.BLUE);
        
        // Draw hour hand
        double hLength = clockRadius * 0.5;
        double hourX = centerX + hLength * Math.sin((hour % 12 + minute / 60.0) * (2 * Math.PI/ 12));
        double hourY = centerY - hLength * Math.cos((hour % 12 + minute / 60.0) * (2 * Math.PI/ 12));
        
        Line hLine = new Line(centerX, centerY, hourX, hourY);
        hLine.setStroke(Color.GREEN);
        
        getChildren().clear();
        getChildren().addAll(circle, sLine, mLine, hLine);
        
        //add group of lines
        Group secGroup = new Group();
        //add small lines
        for (int i = 0; i < 60; i++) {
            Line smallLine = new Line(0, clockRadius - 5, 0, clockRadius - 10);
            smallLine.setTranslateX(centerX);
            smallLine.setTranslateY(centerY);
            smallLine.getTransforms().add(new Rotate(i * (360 / 60)));
            secGroup.getChildren().add(smallLine);
        }
        //add big lines
        for (int i = 0; i < 12; i++) {
            Line largeLine = new Line(0, clockRadius, 0, clockRadius - 10);
            largeLine.setTranslateX(centerX);
            largeLine.setTranslateY(centerY);
            //applying proper rotation to rotate the tick
            largeLine.getTransforms().add(new Rotate(i * (360 / 12)));
            secGroup.getChildren().add(largeLine);
        }
        
        //add hours
        Text [] tHours = new Text[12];
        tHours [0] = new Text(centerX + 35, centerY - clockRadius + 35, "1");
        tHours [1] = new Text(centerX + 65, centerY - clockRadius + 65, "2");
        tHours [2] = new Text(centerX + clockRadius - 25, centerY + 3, "3");
        tHours [3] = new Text(centerX + 65, centerY - clockRadius + 145, "4");
        tHours [4] = new Text(centerX + 35, centerY + clockRadius - 25, "5");
        tHours [5] = new Text(centerX - 3, centerY + clockRadius - 15, "6");
        tHours [6] = new Text(centerX - 40, centerY + clockRadius - 25, "7");
        tHours [7] = new Text(centerX -70, centerY - clockRadius + 145, "8");
        tHours [8] = new Text(centerX - clockRadius + 15, centerY + 5, "9");
        tHours [9] = new Text(centerX - 70, centerY - clockRadius + 65, "10");
        tHours [10] = new Text(centerX - 40, centerY - clockRadius + 35, "11");
        tHours [11] = new Text(centerX - 5, centerY - clockRadius + 25, "12");
        for(int i = 0; i < tHours.length; i++)
        	getChildren().add(tHours [i]);
        getChildren().add(secGroup);

    }

}
