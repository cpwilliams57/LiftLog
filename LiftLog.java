import java.util.Vector;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

/********************************************************/
class Set{/*Keeps track of a weight x rep combination*/
    /*Set attributes*/
    String weight = "";
    String reps = ""; 

    /*Set Constructors*/
    Set(){/*Default constructor*/}
    Set(String w, String r){
        weight = w;
        reps = r; 
    }
}
/********************************************************/

/********************************************************/
class Lift{/*keeps track of all sets for a lift*/
    /*Lift attributes*/
    String name = "";
    Set heavieSet = new Set(); 
    Set previousSet = new Set();
    Vector<Set> setList = new Vector<Set>();

    /*Lift constructors*/
    Lift(){/*default constructor*/}
    Lift(String liftName){
        name = liftName;
    }

    /*Lift finctions*/
    void addSet(Set newSet){
        setList.add(newSet);
    }
}
/********************************************************/

/********************************************************/
class SetFrame{/*Frame that holds set info for a lift*/
    SetFrame(Lift alift){
        //Create the Frame
        JFrame frame = new JFrame(alift.name);
        frame.setSize(400,400);  
        
        //Create Panel components for the bottom of the frame
        JPanel panel = new JPanel();
        JLabel weightLabel = new JLabel("Weight");
        JTextField weightField = new JTextField(5);
        JLabel repsLabel = new JLabel("Reps");
        JTextField repsField = new JTextField(5);
        JButton addSet = new JButton("Add Set");

        //Create Panel Components for top of frame
        JPanel panel1 = new JPanel();
        JLabel setLabel = new JLabel("Sets");
        FlowLayout flow = new FlowLayout();
        panel1.setLayout(flow);
        panel1.add(setLabel);

        //Add current sets to the pane
        for(int i=0; i < alift.setList.size(); i++){
            Set tmp = alift.setList.get(i);
            JButton set = new JButton(tmp.weight + "X" + tmp.reps);
            panel1.add(set);
            frame.setVisible(true);
        }

        //Add action that adds a new set to the list
        addSet.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent arg0) {
                //retrive the fields from thr text fields
                String weight = weightField.getText();
                String reps = repsField.getText();

                //Create a new set for the lift
                alift.addSet(new Set(weight,reps));
                JButton setButton = new JButton(weight + "X" + reps);
                panel1.add(setButton);
                frame.setVisible(true);  
			}          
	    });
    
        //Add Components to the Panel
        panel.add(weightLabel);
        panel.add(weightField);
        panel.add(repsLabel);
        panel.add(repsField);
        panel.add(addSet);

        //Add Panel to the Frame
        frame.getContentPane().add(BorderLayout.CENTER, panel1);
        frame.getContentPane().add(BorderLayout.SOUTH, panel);

        //Make the frame visible
        frame.setVisible(true);
    }
}
/********************************************************/

/********************************************************/
class LiftFrame{/*Frame that holds list of lifts*/
    LiftFrame(){
        //Create the Frame
        JFrame frame = new JFrame("Lifts");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400,400);  
        
        //Create Panel components for the bottom of the frame
        JPanel panel = new JPanel();
        JLabel liftLabel = new JLabel("New Lift");
        JTextField liftField = new JTextField(10);
        JButton addLift = new JButton("Add");

        //Create Panel Components for top of frame
        JPanel panel1 = new JPanel();
        JLabel panelLabel = new JLabel("Lifts");
        FlowLayout flow = new FlowLayout();
        panel1.setLayout(flow);
        panel1.add(panelLabel);
        
        //Add Action to the Add set Button
        addLift.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent arg0){
                String liftname = liftField.getText();
                JButton lift = new JButton(liftname);
                panel1.add(lift);
                frame.setVisible(true);

                //Create a new Object for the Lift
                Lift alift = new Lift(liftname);

                //Add another action listener
                lift.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent arg0){
                        new SetFrame(alift);
                    }          
                });
			}          
	    });

        //Add Components to the Panel
        panel.add(liftLabel);
        panel.add(liftField);
        panel.add(addLift);

        //Add Panel to the Frame
        frame.getContentPane().add(BorderLayout.CENTER, panel1);
        frame.getContentPane().add(BorderLayout.SOUTH, panel);

        //Make the frame visible
        frame.setVisible(true);
    }
}
/********************************************************/

/********************************************************/
public class LiftLog{/*Driving Class*/
    public static void main(String []args){
        new LiftFrame();
    }
}
/********************************************************/
