import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

/********************************************************/
public class SetFrame{
    public SetFrame(String Liftname){

        //Create the Frame
        JFrame frame = new JFrame(Liftname);
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

        //Add Action to the Add set Button
        addSet.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent arg0) {
                String weight = weightField.getText();
                String reps = repsField.getText();
                JButton set = new JButton(weight + "X" + reps);
                panel1.add(set);
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

    public static void main(String []args) {
        new SetFrame("sets");
    }
}
/********************************************************/


//On click add set
    //Add new set to the frame