import javax.swing.*;
import java.awt.event.*;
class GUIButtonListnerX
{
    public static void main(String A[])
    {
        JFrame fobj = new Frame("Marvellous PPA");

        fobj.setSize(400,300);
        JButton bobj = new JButton("ok");
        bobj.setBounds(100,100,150,50);

        bobj.addActionListner(new ActionListner(){
            public void actionPerformed(ActionEvent aobj)
            {
               JOptionPane.showMessageDialog(fobj,"Button clicked");
            }
        });
        fobj.add(bobj);
        fobj.setLayot(null);

        fobj.setVisible(true);
        
        fobj.setDefaultCloseOperatin(JFrame.EXIT_ON_CLOSE);
    }
}