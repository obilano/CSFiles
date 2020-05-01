/*
Author:         Oberon Ilano
Date:           11/26/2018
Description:    Carly GUI Ch 14
*/
package CarlysGUI;
    import javax.swing.DefaultListModel;
    import javax.swing.JOptionPane;
    import java.awt.*;
    import java.awt.event.*;

public class MenuFrame extends javax.swing.JFrame {

    int entreeCount = 0;
	int sideCount = 0;
	int dessertCount = 0;
	String entreeMsg = "";
	String sideMsg = "";
	String dessertMsg = "";
	String choicesMsg = "";
    private Object txtChoices;
	
	private void chkFiletActionPerformed(java.awt.event.ActionEvent evt)
	{
	processEntreeChoices();
	}
	private void chkPrimeActionPerformed(java.awt.event.ActionEvent evt)
	{
	processEntreeChoices();
	}
	private void chkQuailActionPerformed(java.awt.event.ActionEvent evt)
	{
	processEntreeChoices();
	}
	private void chkLobsterActionPerformed(java.awt.event.ActionEvent evt)
	{
	processEntreeChoices();
	}
	private void chkAsparagusActionPerformed(java.awt.event.ActionEvent evt)
	{
	processSideChoices();
	}
	private void chkPotatosActionPerformed(java.awt.event.ActionEvent evt)
	{
	processSideChoices();
	}
	private void chkCaesarActionPerformed(java.awt.event.ActionEvent evt)
	{
	processSideChoices();
	}
	private void chkBisqueActionPerformed(java.awt.event.ActionEvent evt)
	{
	processSideChoices();
	}
	private void chkAlaskaActionPerformed(java.awt.event.ActionEvent evt)
	{
	processDessertChoices();
	}
	private void chkTiramisuActionPerformed(java.awt.event.ActionEvent evt)
	{
	processDessertChoices();
	}
	private void chkTurtleActionPerformed(java.awt.event.ActionEvent evt)
	{
	processDessertChoices();
	}
	public static void main(String args[])
	{
	/* Auto-generated main code went here */
	}
	// Auto-generated variables declaration went
	public void processEntreeChoices()
	{
	entreeMsg = "";
	entreeCount = 0;
	if (chkFilet.isSelected())
	{
	entreeCount++;
	if (entreeCount > 1)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only one entree.",
	"Entree Error", JOptionPane.ERROR_MESSAGE);
	entreeCount = 0;

	entreeMsg = "";
	chkFilet.setSelected(false);
	chkPrime.setSelected(false);
	chkQuail.setSelected(false);
	chkLobster.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	entreeMsg += "Filet Mignon\n";
	}
	}
	if (chkPrime.isSelected())
	{
	entreeCount++;
	if (entreeCount > 1)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only one entree.",
	"Entree Error", JOptionPane.ERROR_MESSAGE);
	entreeCount = 0;
	entreeMsg = "";
	chkFilet.setSelected(false);
	chkPrime.setSelected(false);
	chkQuail.setSelected(false);
	chkLobster.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	entreeMsg += "Prime Rib\n";
	}
	}
	if (chkQuail.isSelected())
	{
	entreeCount++;
	if (entreeCount > 1)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only one entree.",
	"Entree Error", JOptionPane.ERROR_MESSAGE);
	entreeCount = 0;
	entreeMsg = "";
	chkFilet.setSelected(false);
	chkPrime.setSelected(false);
	chkQuail.setSelected(false);
	chkLobster.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	entreeMsg += "Roasted Quail\n";
	}
	
	}
	if (chkLobster.isSelected())
	{
	entreeCount++;
	if (entreeCount > 1)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only one entree.",
	"Entree Error", JOptionPane.ERROR_MESSAGE);
	entreeCount = 0;
	entreeMsg = "";
	chkFilet.setSelected(false);
	chkPrime.setSelected(false);
	chkQuail.setSelected(false);
	chkLobster.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	entreeMsg += "Lobster\n";
	}
	}
	txtChoices.setText(entreeMsg + sideMsg + dessertMsg);
	}
	public void processSideChoices()
	{
	sideMsg = "";
	sideCount = 0;
	if (chkAsparagus.isSelected())
	{
	sideCount++;
	if (sideCount > 2)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only two sides.",
	"Sides Error", JOptionPane.ERROR_MESSAGE);
	sideCount = 0;
	sideMsg = "";
	chkAsparagus.setSelected(false);
	chkBisque.setSelected(false);
	chkCaesar.setSelected(false);
	chkPotatos.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	sideMsg += "Bacon-Wrapped Asparagus\n";
	}
	}
	if (chkBisque.isSelected())
	{
	sideCount++;
	
	if (sideCount > 2)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only two sides.",
	"Sides Error", JOptionPane.ERROR_MESSAGE);
	sideCount = 0;
	sideMsg = "";
	chkAsparagus.setSelected(false);
	chkBisque.setSelected(false);
	chkCaesar.setSelected(false);
	chkPotatos.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	sideMsg += "Lobster Bisque\n";
	}
	}
	if (chkCaesar.isSelected())
	{
	sideCount++;
	if (sideCount > 2)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only two sides.",
	"Sides Error", JOptionPane.ERROR_MESSAGE);
	sideCount = 0;
	sideMsg = "";
	chkAsparagus.setSelected(false);
	chkBisque.setSelected(false);
	chkCaesar.setSelected(false);
	chkPotatos.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	sideMsg += "Caesar Salad\n";
	}
	}
	if (chkPotatos.isSelected())
	{
	sideCount++;
	if (sideCount > 2)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only two sides.",
	"Sides Error", JOptionPane.ERROR_MESSAGE);
	sideCount = 0;
	sideMsg = "";
	chkAsparagus.setSelected(false);
	chkBisque.setSelected(false);
	chkCaesar.setSelected(false);
	chkPotatos.setSelected(false);
	//txtChoices.setText("");
	}
	else
	{
	sideMsg += "Garlic Mashed Potatos\n";
	}
	}
	txtChoices.setText(entreeMsg + sideMsg + dessertMsg);
	}
	public void processDessertChoices()
	{
	dessertMsg = "";
	dessertCount = 0;
	if (chkAlaska.isSelected())
	{
	dessertCount++;
	if (dessertCount > 1)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only one dessert.",
	"Dessert Error", JOptionPane.ERROR_MESSAGE);
	dessertCount = 0;
	dessertMsg = "";
	chkAlaska.setSelected(false);
	chkTurtle.setSelected(false);
	chkTiramisu.setSelected(false);
	}
	else
	{
	dessertMsg += "Baked Alaska\n";
	}
	}
	if (chkTiramisu.isSelected())
	{
	dessertCount++;
	if (dessertCount > 1)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only one dessert.",
	"Dessert Error", JOptionPane.ERROR_MESSAGE);
	dessertCount = 0;
	dessertMsg = "";
	chkAlaska.setSelected(false);
	chkTurtle.setSelected(false);
	chkTiramisu.setSelected(false);
	}
	else
	{
	dessertMsg += "Tiramisu\n";
	}
	}
	if (chkTurtle.isSelected())
	{
	
	dessertCount++;
	if (dessertCount > 1)
	{
	JOptionPane.showMessageDialog(null,
	"ERROR: Please choose only one dessert.",
	"Dessert Error", JOptionPane.ERROR_MESSAGE);
	dessertCount = 0;
	dessertMsg = "";
	chkAlaska.setSelected(false);
	chkTurtle.setSelected(false);
	chkTiramisu.setSelected(false);
	}
	else
	{
	dessertMsg += "Turtle Cheesecake\n";
	}
	}
	txtChoices.setText(entreeMsg + sideMsg + dessertMsg);
	}
    public MenuFrame() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        grpEntree = new javax.swing.ButtonGroup();
        lblTitle = new javax.swing.JLabel();
        lblMenu = new javax.swing.JLabel();
        lblPricePerPerson = new javax.swing.JLabel();
        chkFilet = new javax.swing.JCheckBox();
        lblSides = new javax.swing.JLabel();
        chkPrime = new javax.swing.JCheckBox();
        chkQuail = new javax.swing.JCheckBox();
        chkLobster = new javax.swing.JCheckBox();
        lblEntrees1 = new javax.swing.JLabel();
        chkAsparagus = new javax.swing.JCheckBox();
        chkPotatos = new javax.swing.JCheckBox();
        chkCaesar = new javax.swing.JCheckBox();
        chkBisque = new javax.swing.JCheckBox();
        lblDesert = new javax.swing.JLabel();
        chkAlaska = new javax.swing.JCheckBox();
        chkTiramisu = new javax.swing.JCheckBox();
        chkTurtle = new javax.swing.JCheckBox();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setBackground(new java.awt.Color(255, 204, 204));

        lblTitle.setBackground(new java.awt.Color(255, 204, 204));
        lblTitle.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        lblTitle.setForeground(new java.awt.Color(102, 102, 102));
        lblTitle.setText("Carly's Catering");

        lblMenu.setBackground(new java.awt.Color(255, 204, 204));
        lblMenu.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        lblMenu.setForeground(new java.awt.Color(255, 102, 102));
        lblMenu.setText("Menu");

        lblPricePerPerson.setBackground(new java.awt.Color(255, 204, 204));
        lblPricePerPerson.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        lblPricePerPerson.setForeground(new java.awt.Color(102, 102, 102));
        lblPricePerPerson.setText("$35 per person");

        chkFilet.setFont(new java.awt.Font("Tahoma", 0, 12)); // NOI18N
        chkFilet.setText("Filet Mayon");

        lblSides.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        lblSides.setForeground(new java.awt.Color(255, 153, 153));
        lblSides.setText("Sides (Choose up to two)");

        chkPrime.setFont(new java.awt.Font("Tahoma", 0, 12)); // NOI18N
        chkPrime.setText("Prime Grill");

        chkQuail.setFont(new java.awt.Font("Tahoma", 0, 12)); // NOI18N
        chkQuail.setText("Roasted Quail");

        chkLobster.setFont(new java.awt.Font("Tahoma", 0, 12)); // NOI18N
        chkLobster.setText("Lobster");

        lblEntrees1.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        lblEntrees1.setForeground(new java.awt.Color(255, 153, 153));
        lblEntrees1.setText("Entrees (Choose One)");

        chkAsparagus.setText("Bacon Wrap Asparagus");

        chkPotatos.setText("Garlic Mashed Potatoes");

        chkCaesar.setText("Caesar Salad");

        chkBisque.setText("Lobster Bisque");

        lblDesert.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        lblDesert.setForeground(new java.awt.Color(255, 153, 153));
        lblDesert.setText("Deserts (Choose up to one)");

        chkAlaska.setText("Baked Alaska");

        chkTiramisu.setText("Tira Misu");

        chkTurtle.setText("Turtle Cheese Cake");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(59, 59, 59)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(lblEntrees1)
                            .addComponent(chkQuail)
                            .addComponent(chkPrime)
                            .addComponent(chkFilet)
                            .addComponent(chkLobster))
                        .addGap(52, 52, 52)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(chkBisque)
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                        .addComponent(lblTitle)
                                        .addComponent(lblSides))
                                    .addComponent(chkAsparagus)
                                    .addComponent(chkPotatos)
                                    .addComponent(chkCaesar))
                                .addGap(61, 61, 61)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(chkTurtle)
                                    .addComponent(chkTiramisu)
                                    .addComponent(chkAlaska)
                                    .addComponent(lblDesert)))))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(351, 351, 351)
                        .addComponent(lblMenu))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(316, 316, 316)
                        .addComponent(lblPricePerPerson)))
                .addContainerGap(46, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(lblTitle)
                .addGap(11, 11, 11)
                .addComponent(lblMenu)
                .addGap(18, 18, 18)
                .addComponent(lblPricePerPerson)
                .addGap(37, 37, 37)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblSides)
                    .addComponent(lblEntrees1)
                    .addComponent(lblDesert))
                .addGap(8, 8, 8)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(chkFilet)
                    .addComponent(chkAsparagus)
                    .addComponent(chkAlaska))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(chkPrime)
                    .addComponent(chkPotatos)
                    .addComponent(chkTiramisu))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(chkQuail)
                    .addComponent(chkCaesar)
                    .addComponent(chkTurtle))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(chkLobster)
                    .addComponent(chkBisque))
                .addContainerGap(114, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(MenuFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(MenuFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(MenuFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(MenuFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(() -> {
            new MenuFrame().setVisible(true);
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JCheckBox chkAlaska;
    private javax.swing.JCheckBox chkAsparagus;
    private javax.swing.JCheckBox chkBisque;
    private javax.swing.JCheckBox chkCaesar;
    private javax.swing.JCheckBox chkFilet;
    private javax.swing.JCheckBox chkLobster;
    private javax.swing.JCheckBox chkPotatos;
    private javax.swing.JCheckBox chkPrime;
    private javax.swing.JCheckBox chkQuail;
    private javax.swing.JCheckBox chkTiramisu;
    private javax.swing.JCheckBox chkTurtle;
    private javax.swing.ButtonGroup grpEntree;
    private javax.swing.JLabel lblDesert;
    private javax.swing.JLabel lblEntrees1;
    private javax.swing.JLabel lblMenu;
    private javax.swing.JLabel lblPricePerPerson;
    private javax.swing.JLabel lblSides;
    private javax.swing.JLabel lblTitle;
    // End of variables declaration//GEN-END:variables

