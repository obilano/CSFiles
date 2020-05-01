/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	CodeBot
 * Due Date:	June 30, 2019
 */

public class CodeBotTest {
    public static void main(String[] args) throws CompilationException {
        CodeBot c = new CodeBot();
        c.compile();
        CodeBot c2 = new CodeBot("Hello2", "public class { public static void main(String[] args) { System.out.println(\"hello, world\");}}");
        c2.compile();        
    }
}
