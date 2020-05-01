/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	CodeBot
 * Due Date:	June 30, 2019
 */

import java.io.File;
import java.io.PrintWriter;
import java.io.FileNotFoundException;

public class CodeBot {
	//data fields
	private String className;
	private String code;
	
	//constructors
	public CodeBot() {
		className = "Hello";
		code = "public class Hello { public static void main(String[] args)"
				+ " { System.out.println(\"hello, world\");}}";
		//call private saveCode method
		saveCode();
	}	
	public CodeBot(String cN, String c) {
		className = cN;
		code = c;
		//call private saveCode method
		saveCode();
	}

	//result in a file is written in the root directory
	private void saveCode() {
		try {
			File f1 = new File(className + ".java");
			if(f1.exists()) {
				System.out.println("File " + f1.getName() + " is already exists.");
				System.exit(0);
			}
			PrintWriter pW = new PrintWriter(f1);
			pW.println(code);
			pW.close();
		}
		catch(FileNotFoundException nF) {
			System.out.println(nF.getMessage());
		}
	}
	
	// If the class name is not found, throw a CompilationException with the message 
	public void compile() throws CompilationException {
		if(code.indexOf(className) == -1)
			throw new CompilationException("Class name must be found in code.");
		System.out.println("The program " + className + ".java has compiled successfully.");
		
	}
	
}
