PROBLEM: Computing the BMI (Body Mass Index) is a common way to screen weight categories that may lead to health problems. Your task is to write a program to compute the BMI for patients at a clinic. Specifically, your program should do the following:

Ask the user to enter how many patients will will have BMI computed. Validate the number of patients so only a value in the range [1..10] is accepted.
For each patient:
Ask the user to enter the weight (lbs) and height (inches). Assume inputs are valid.
Compute the BMI using the formula: bmi = (weight*703) / height^2
Output the BMI using one decimal place
If the BMI is in the range [18.5..25], output the message "Normal". If it is below that range, output "Underweight". If it is above the range, output "Overweight".