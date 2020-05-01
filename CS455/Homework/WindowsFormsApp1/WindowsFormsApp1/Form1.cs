using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

private void Button1_Click(object sender, EventArgs e)
        {
            groceryList.Items.Add(tbName.Text);
            //   MessageBox.Show("Hello World");
        }

        private void Label1_Click(object sender, EventArgs e)
        {
            
        }
        private void enter(object sender, EventArgs e)
        {
        //    groceryList.Items.Add("enter");
        }

        private void GroceryList_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void ComboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            groceryList.Items.Add(comboBox1.SelectedItem);
        }

        private void Label2_Click(object sender, EventArgs e)
        {

        }
    }
}
