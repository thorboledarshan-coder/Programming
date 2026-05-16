import java.util.*;

class ArrayIndex
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {11,21,51,101,111};

        System.out.println("Enter the index of array : ");
        int Index = sobj.nextInt();

        System.out.println("Element at that index is : "+Arr[Index]);

        System.out.println("End of application");
    }
}