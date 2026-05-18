import java.util.*;

class Division
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        float No1 = 0.0f, No2 = 0.0f, Ans = 0.0f;

        System.out.println("Enter first number : ");
        No1 = sobj.nextFloat();

        System.out.println("Enter second number : ");
        No2 = sobj.nextFloat();

        Ans = No1 / No2;

        System.out.println("Division is : "+Ans);
    }
}