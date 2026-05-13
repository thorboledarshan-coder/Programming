import javax.swing.*;
class GUIButton
{
    public static void main(String A[])
    {
        JFrame fobj = new JFrame("Marvellous PPA");

        fobj.setSize(400,300);
        JButton bobj = new JButton("ok");
        fobj.add(bobj);
        fobj.setLayout(null);

        fobj.setVisible(true);
        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}