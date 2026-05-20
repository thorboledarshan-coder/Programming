import javax.swing.*;
import java.awt.event.*;


class LoginForm extends JFrame
{

    public LoginForm()
    {
        setTitle("Marvellous Login Form");
        setSize(400,300);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      
    }
    public static void main(String A[])
    {
        new LoginForm();
    }
        
}