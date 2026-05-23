class Base
{
    public int i,j;

    public void fun()
    {   System.out.println("Inside Base fun");      }

    public void gun()
    {   System.out.println("Inside Base gun");      }

    public void sun()
    {   System.out.println("Inside Base sun");      }
}

class Derived extends Base
{
    public int x,y;

    public void gun()
    {   System.out.println("Inside Derived gun");  }
    
    public void sun()
    {   System.out.println("Inside Derived sun");  }
    
    public void run()
    {   System.out.println("Inside Derived run");  }
}

class RMD_Overriding
{
    public static void main(String A[])
    {
        Base bobj = new Derived();  // Upcasting

        bobj.fun();     // Base fun
        bobj.gun();     // Derived gun
        bobj.sun();     // Derived sun
        bobj.run();     // Error

    }
}