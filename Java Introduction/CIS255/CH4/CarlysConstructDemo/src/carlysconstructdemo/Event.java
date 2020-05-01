
package carlysconstructdemo;

/**
 *
 * @author obi20
 */
public class Event 
{
public static int PRICE_PER_GUEST = 35;
public static int CUT_OFF_EVENT= 50;

private String eventNum;
private int numOfGuest;
private double price;

    public Event ()
    {
        eventNum = "A000";
        numOfGuest = 0;

    }
    
    public Event (String newEventNum, int newNumOfGuest)
    {
        setEventNum(newEventNum);
        setGuest(newNumOfGuest);
    }
    
    public void setEventNum(String eventNum)
    {
        this.eventNum = eventNum;
    }
    
    private void calPrice(int guestNum)
    {
        price = guestNum * PRICE_PER_GUEST;
    }
        
    public void setGuest(int guestNum)
    {
        this.numOfGuest = numOfGuest;
        calPrice(numOfGuest);
    }
    
    public String getEventNum()
    {
        return eventNum;
    }
    
    public int getNumOfGuest()
    {
        return numOfGuest;
    }
    
    public double getPrice()
    {
        return price;
    }

}
