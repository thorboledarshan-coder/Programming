import java.io.*;

class BufferedIOX
{
    public static void main(String A[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name : ");
        String name = bobj.readLine();      // Checked Exception

        System.out.println("Hello "+name);
    }
}