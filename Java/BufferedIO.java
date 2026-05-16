import java.io.*;

class BufferedIO
{
    public static void main(String A[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name : ");
        String name = bobj.readLine();      // Checked Exception

        System.out.println("Hello "+name);
    }
}