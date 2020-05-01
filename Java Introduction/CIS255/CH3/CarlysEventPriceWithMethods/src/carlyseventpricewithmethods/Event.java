
package carlyseventpricewithmethods;

/**
 *
 * @author obi20
 */
public class Event 
{
public static int PRICE_PER_GUEST = 35;
public static int CUT_OFF_EVENT= 50;

private String eventNum;
private int guestNum;
private double price;

    public Event ()
    {
        eventNum = " ";
        guestNum = 0;
        price = 0;
    }
    
    public void setEventNum(String eventNum)
    {
        this.eventNum = eventNum;
    }
    
    private void calPrice(int guestNum)
    {
        price = guestNum * PRICE_PER_GUEST;
    }
        
    public void setGuestNum(int guestNum)
    {
        this.guestNum = guestNum;
        calPrice(guestNum);
    }
    
    public String getEventNum()
    {
        return eventNum;
    }
    
    public int getGuestNum()
    {
        return guestNum;
    }
    
    public double getPrice()
    {
        return price;
    }

}
