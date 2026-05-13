import javax.swing.*;
class GUIClose
{
    public static void main(String A[])
    {
        JFrame fobj =new Frame("Marvellous PPA");

        fobj.setSize(400,300);

        fobj.setVisible(true);
        fobj.setDefaultCloseOperatin(JFrame.EXIT_ON_CLOSE);
    }
}