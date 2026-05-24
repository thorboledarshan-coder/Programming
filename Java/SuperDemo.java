class Base
{
    public int i;

    public Base(int no)
    {
        System.out.println("Inside Base constructor");
        this.i = no;
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int i;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.i = 21;
    }

    public void gun()
    {
        System.out.println("Inside gun of Derived");
        System.out.println("Value of i : "+i);
        System.out.println("Value of i from base : "+super.i);
    }
}

class SuperDemo
{
    public static void main(String A[])
    {
        Derived dobj = new Derived();   // Error

        dobj.gun();
    }
}