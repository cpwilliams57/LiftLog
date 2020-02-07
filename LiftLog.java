import java.util.Vector;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;



/********************************************************/
class Set{ /*Keeps track of a weight x rep combination*/
    /*Set attributes*/
    int weight = 0;
    int reps = 0; 

    /*Set Constructors*/
    public Set(){/*Default constructor*/}
    public Set(int w, int r){
        weight = w;
        reps = r; 
    }
}
/********************************************************/

/********************************************************/
class Lift{ /*keeps track of all sets for a lift*/
    /*Lift attributes*/
    String name = "";
    Set heavieSet = new Set(); 
    Set previousSet = new Set();
    Vector<Set> setList = new Vector<Set>();

    /*Lift constructors*/
    public Lift(){/*default constructor*/}
    public Lift(String liftName){
        name = liftName;
    }

    /*Lift finctions*/
    void addSet(Set newSet){
        setList.add(newSet);
    }
}
/********************************************************/

public class LiftLog{

    void makeWindow(){

    }

    // main function
    public static void main(String []args) {
        // Set myset = new Set(5,5);
        // Lift myLift = new Lift("squat"); 
        // System.out.print(myset.weight);
        // System.out.print(myLift.name);

        //Create the Frame
        JFrame frame = new JFrame("Lift Log");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 400);

        JButton butt = new JButton("abutton");
        butt.setBounds(100,100,140,40);

        JPanel panel = new JPanel(); // the panel is not visible in output
        JButton but = new JButton("but");
        panel.add(but);

        but.addActionListener(new ActionListener() {
	        
			@Override
			public void actionPerformed(ActionEvent arg0) {
					but.setText("new");				
			}          
	      });
        
        frame.getContentPane().add(BorderLayout.SOUTH, panel);
        frame.setVisible(true);
    }
}