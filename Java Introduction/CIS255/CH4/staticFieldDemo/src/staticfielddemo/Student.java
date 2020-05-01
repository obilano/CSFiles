package staticfielddemo;

public class Student 
{
    private int stuNum;
    private String name;
    private static int count = 0;
    
    public Student(int newStuNum, String newName)
    {
        stuNum = newStuNum;
        name = newName;
        count++;
    }
            
    public void setStuNum(int newStuNum)
    {
        stuNum = newStuNum;
    }
    
    public void setName(String newName)
    {
        name = newName;
    }
    
    public int getStuNum()
    {
        return stuNum;
    }
    
    public String getName()
    {
        return name;
    }
    
    public int getCount()
    {
        return count;
    }
}
