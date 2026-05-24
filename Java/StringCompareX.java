class StringCompareX
{
    public static void main(String A[])
    {
        String s1 = "Ganesh";
        String s2 = new String("Ganesh");

        if(s1.equals(s2))
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
    }
}