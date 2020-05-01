package confirmdemo;

import javax.swing.JOptionPane;

public class ConfirmDemo 
{

    public static void main(String[] args) 
    {
        int selection;
        boolean isYes;
        
        selection = JOptionPane.showConfirmDialog(null, 
                    "Do you want to upgrade to First Class? ");
        isYes = (selection == JOptionPane.YES_OPTION);
        JOptionPane.showMessageDialog(null, "You responded " + isYes);
    }
}
