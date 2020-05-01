/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package SwingGUIDemoWithButton;


public class NewJFrame extends javax.swing.JFrame {
    
    String contents;
    
    public NewJFrame() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        LBLPrompt = new javax.swing.JLabel();
        CHKCoffee1 = new javax.swing.JCheckBox();
        CHKCola = new javax.swing.JCheckBox();
        CHKMilk = new javax.swing.JCheckBox();
        CHKWater = new javax.swing.JCheckBox();
        CHKTea = new javax.swing.JCheckBox();
        BTNOrder = new javax.swing.JButton();
        LBLORDER = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        LBLPrompt.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        LBLPrompt.setText("What would you like to drink?");

        CHKCoffee1.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        CHKCoffee1.setText("Coffee");
        CHKCoffee1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CHKCoffee1ActionPerformed(evt);
            }
        });

        CHKCola.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        CHKCola.setText("Cola");
        CHKCola.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CHKColaActionPerformed(evt);
            }
        });

        CHKMilk.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        CHKMilk.setText("Milk");
        CHKMilk.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CHKMilkActionPerformed(evt);
            }
        });

        CHKWater.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        CHKWater.setText("Water");
        CHKWater.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CHKWaterActionPerformed(evt);
            }
        });

        CHKTea.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        CHKTea.setText("Tea");
        CHKTea.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CHKTeaActionPerformed(evt);
            }
        });

        BTNOrder.setFont(new java.awt.Font("Tahoma", 1, 11)); // NOI18N
        BTNOrder.setText("Order");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap(68, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(LBLPrompt)
                        .addGap(93, 93, 93))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(LBLORDER, javax.swing.GroupLayout.PREFERRED_SIZE, 341, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(CHKCoffee1)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addComponent(CHKCola)
                                .addGap(4, 4, 4)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                    .addComponent(BTNOrder, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(CHKMilk, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(CHKWater)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addComponent(CHKTea)))
                        .addGap(95, 95, 95))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(LBLPrompt)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(CHKCoffee1)
                    .addComponent(CHKCola)
                    .addComponent(CHKMilk)
                    .addComponent(CHKWater)
                    .addComponent(CHKTea))
                .addGap(18, 18, 18)
                .addComponent(BTNOrder)
                .addGap(18, 18, 18)
                .addComponent(LBLORDER, javax.swing.GroupLayout.PREFERRED_SIZE, 44, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(43, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

       private void BTNOrderActionPerformed(java.awt.event.ActionEvent evt) {
        String contents;
        
        contents = "You chose ";
        if(CHKCoffee1.isSelected())
            contents += "coffee";
        if(CHKCola.isSelected())
            contents += "cola";
        if(CHKCoffee1.isSelected())
            contents += "milk";
        if(CHKCola.isSelected())
            contents += "water";
        if(CHKCola.isSelected())
            contents += "tea";
    }
       
    private void CHKCoffee1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CHKCoffee1ActionPerformed
    
    
       
    }//GEN-LAST:event_CHKCoffee1ActionPerformed

    private void CHKColaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CHKColaActionPerformed

    }//GEN-LAST:event_CHKColaActionPerformed

    private void CHKMilkActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CHKMilkActionPerformed

    }//GEN-LAST:event_CHKMilkActionPerformed

    private void CHKWaterActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CHKWaterActionPerformed

    }//GEN-LAST:event_CHKWaterActionPerformed

    private void CHKTeaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CHKTeaActionPerformed

    }//GEN-LAST:event_CHKTeaActionPerformed

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
            java.util.logging.Logger.getLogger(NewJFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(NewJFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(NewJFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(NewJFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new NewJFrame().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton BTNOrder;
    private javax.swing.JCheckBox CHKCoffee1;
    private javax.swing.JCheckBox CHKCola;
    private javax.swing.JCheckBox CHKMilk;
    private javax.swing.JCheckBox CHKTea;
    private javax.swing.JCheckBox CHKWater;
    private javax.swing.JLabel LBLORDER;
    private javax.swing.JLabel LBLPrompt;
    // End of variables declaration//GEN-END:variables
}
