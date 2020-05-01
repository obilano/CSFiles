/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package SwingGUIDemo;


public class NewJFrame extends javax.swing.JFrame {
    
    String contents;
    String orderStr;
    int length; 
     
    public NewJFrame() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        LBLDrinkPrompt = new javax.swing.JLabel();
        chkCoffee = new javax.swing.JCheckBox();
        chkCola = new javax.swing.JCheckBox();
        chkMilk = new javax.swing.JCheckBox();
        chkWater = new javax.swing.JCheckBox();
        chkTea = new javax.swing.JCheckBox();
        LBLResult = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        LBLDrinkPrompt.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        LBLDrinkPrompt.setText("What would you like to drink?");

        chkCoffee.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        chkCoffee.setText("Coffee");
        chkCoffee.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                chkCoffeeActionPerformed(evt);
            }
        });

        chkCola.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        chkCola.setText("Cola");
        chkCola.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                chkColaActionPerformed(evt);
            }
        });

        chkMilk.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        chkMilk.setText("Milk");
        chkMilk.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                chkMilkActionPerformed(evt);
            }
        });

        chkWater.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        chkWater.setText("Water");
        chkWater.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                chkWaterActionPerformed(evt);
            }
        });

        chkTea.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        chkTea.setText("Tea");
        chkTea.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                chkTeaActionPerformed(evt);
            }
        });

        LBLResult.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        LBLResult.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap(35, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(LBLDrinkPrompt)
                        .addGap(93, 93, 93))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(chkCoffee)
                        .addGap(4, 4, 4)
                        .addComponent(chkCola)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(chkMilk, javax.swing.GroupLayout.PREFERRED_SIZE, 65, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(chkWater)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(chkTea)
                        .addGap(95, 95, 95))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(LBLResult, javax.swing.GroupLayout.PREFERRED_SIZE, 430, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(39, 39, 39))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(LBLDrinkPrompt)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(chkCoffee)
                    .addComponent(chkMilk)
                    .addComponent(chkWater)
                    .addComponent(chkTea)
                    .addComponent(chkCola))
                .addGap(18, 18, 18)
                .addComponent(LBLResult, javax.swing.GroupLayout.PREFERRED_SIZE, 19, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(109, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void chkCoffeeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_chkCoffeeActionPerformed
        contents = buildOrder(contents);
        LBLResult.setText(orderStr);                                   
    }//GEN-LAST:event_chkCoffeeActionPerformed

    private void chkColaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_chkColaActionPerformed
        contents = buildOrder(contents);
        LBLResult.setText(orderStr);
    }//GEN-LAST:event_chkColaActionPerformed

    private void chkMilkActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_chkMilkActionPerformed
        contents = buildOrder(contents);
        LBLResult.setText(orderStr);
    }//GEN-LAST:event_chkMilkActionPerformed

    private void chkWaterActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_chkWaterActionPerformed
        contents = buildOrder(contents);
        LBLResult.setText(orderStr);
    }//GEN-LAST:event_chkWaterActionPerformed

    private void chkTeaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_chkTeaActionPerformed
        contents = buildOrder(contents);
        LBLResult.setText(orderStr);
    }//GEN-LAST:event_chkTeaActionPerformed

    
    private String buildOrder(String orderStr)
    {
        orderStr = "You chose";
        length = orderStr.length();
        if(chkCoffee.isSelected())
        {
            orderStr += " cofee";
        }
        if(chkCola.isSelected())
        {
            if(length == orderStr.length() && orderStr.contains("You chose"))
                orderStr += " cola";
            else
                orderStr += " and cola";  
        }
        if(chkMilk.isSelected())
        {
            if(length == orderStr.length() && orderStr.contains("You chose"))
                orderStr += " milk";
            else
                orderStr += " and milk";  
        }
        if(chkWater.isSelected())
        {
            if(length == orderStr.length() && orderStr.contains("You chose"))
                orderStr += " water";
            else
                orderStr += " and water";  
        }
        if(chkTea.isSelected())
        {
            if(length == orderStr.length() && orderStr.contains("You chose"))
                orderStr += " tea";
            else
                orderStr += " and tea";  
        }
        if(!chkCoffee.isSelected() && !chkCola.isSelected() && 
             !chkMilk.isSelected() && !chkWater.isSelected() && 
             !chkTea.isSelected())
            orderStr = "";
        LBLResult.setText(orderStr);
        
        return orderStr;
    }
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
    private javax.swing.JLabel LBLDrinkPrompt;
    private javax.swing.JLabel LBLResult;
    private javax.swing.JCheckBox chkCoffee;
    private javax.swing.JCheckBox chkCola;
    private javax.swing.JCheckBox chkMilk;
    private javax.swing.JCheckBox chkTea;
    private javax.swing.JCheckBox chkWater;
    // End of variables declaration//GEN-END:variables
}
