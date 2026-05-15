class ArrayDemoJagged
{
    public static void main(String A[])
    {
        int Arr[][] = new int[3][];

        Arr[0] = new int[4];
        Arr[1] = new int[7];
        Arr[2] = new int[5];
        
        System.out.println(Arr.length);     // 3
        
        System.out.println(Arr[0].length);     // 4
        System.out.println(Arr[1].length);     // 7
        System.out.println(Arr[2].length);     // 5
    }
}