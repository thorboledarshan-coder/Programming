final class Demo
{
    public void fun()
    {   System.out.println("Inaide Demo fun");  }
    
    public void gun()
    {   System.out.println("Inaide Demo gun");  }    
}

class Hello extends Demo    // Error
{
    public void gun()
    {   System.out.println("Inside Hello gun"); }
}

class final_class
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();     // allowed

        Hello hobj = new Hello();
    }
}