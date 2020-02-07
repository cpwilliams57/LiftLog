import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class LiftFrame{

    public LiftFrame(String name){
        //Create the Frame
        JFrame frame = new JFrame("Lift Frame");
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
			public void actionPerformed(ActionEvent arg0) {
                String liftname = liftField.getText();
                JButton lift = new JButton(liftname);
                panel1.add(lift);
                frame.setVisible(true);

                lift.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent arg0){
                        new SetFrame(liftname);
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

    public static void main(String []args) {
        new LiftFrame("My Lifts");
    }
}