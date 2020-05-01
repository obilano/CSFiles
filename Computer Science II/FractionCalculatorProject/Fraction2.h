/*********************************************************************
	Programmer:			Oberon Ilano
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano	
	Project:			1 - Teach a kid to ration
	Description:		This program wil allow users/students to read 
						intruction of different fraction operators,
						see different examples of fraction operators, 
						to be able to use fraction calculator, take 
						quiz of the operation of their choice and 
						to show quiz result.					
	Due Date:			October 4, 2018
	Course:				CS255 - Computer Science II
**********************************************************************/
#ifndef _FRACTION2_H
#define _FRACTION2_H

#include "Fraction.h"
#include <ctime> //to set random number
#include <cstdlib> //rand library
#include <string> 

using namespace std;
//main menu declaration
void menu();
//submenus declaration
void subMenuInstruction();
void subMenuExamples(Fraction&);
void subMenuFractionCalculator(Fraction&);
void subMenuQuiz();
//quiz operations function declarations that return score
int additionQuiz(int& score);
int subtractionQuiz(int& result);
int multiplicationQuiz(int& result);
int divisionQuiz(int& result);
int reducingQuiz(int& result);
//print quiz result declaration, incoming score
void printResult(int score);

#endif
