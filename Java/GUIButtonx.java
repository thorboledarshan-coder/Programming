import javax.swing.*;
class GUIButtonx
{
    public static void main(String A[])
    {
        JFrame fobj = new JFrame("Marvellous PPA");

        fobj.setSize(400,300);
        JButton bobj = new JButton("ok");
        bobj.setBounds(100,100,150,50);
        fobj.add(bobj);
        fobj.setLayout(null);

        fobj.setVisible(true);
        
        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}