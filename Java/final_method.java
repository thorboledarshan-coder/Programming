class Demo
{
    public void fun()
    {   System.out.println("Inaide Demo fun");  }
    
    public final void gun()
    {   System.out.println("Inaide Demo gun");  }    
}

class Hello extends Demo
{
    public void gun()
    {   System.out.println("Inside Hello gun"); }
}

class final_method
{
    public static void main(String A[])
    {
        Hello hobj = new Hello();
    }
}