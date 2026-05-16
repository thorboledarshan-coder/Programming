class ArrayDemoMulti
{
    public static void main(String A[])
    {
        int Arr[][] = new int[3][4];

        Arr[0][0] = 10;
        Arr[0][3] = 20;

        Arr[1][1] = 30;

        Arr[2][0] = 40;
        Arr[2][2] = 50;

        System.out.println(Arr.length);     // 3
        
        System.out.println(Arr[0].length);     // 4
        System.out.println(Arr[1].length);     // 4
        System.out.println(Arr[2].length);     // 4
    }
}