class ArrayDemo
{
    public static void main(String A[])
    {
        int Arr[] = {10,20,30,40};          // 1

        int [] Brr = {10,20,30,40};         // 2

        int Crr[] = new int[4];             // 3

        Crr[0] = 10;
        Crr[1] = 20;
        Crr[2] = 30;
        Crr[3] = 40;
        
        System.out.println(Arr.length);
        System.out.println(Brr.length);
        System.out.println(Crr.length);
    }
}