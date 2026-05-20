import javax.swing.*;
import java.awt.event.*;




class MarvellousLogin extends JFrame
{

    public MarvellousLogin(String title ,int width,int height)
    {
        setTitle(title);
        setSize(width,height);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      
    }
   
        
}

class LoginFormX
{
    public static void main(String A[])
    {
       MarvellousLogin mobj = new MarvellousLogin("PPA",400,300);
    }

}