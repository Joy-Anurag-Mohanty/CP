import java.io.*;
import java.util.*;
import java.lang.*;

public class Alphabet
{
	public static void main(String args[]) throws java.lang.Exception,FileNotFoundException
	{
		Scanner sc = new Scanner(System.in);

		// PrintStream obj = new PrintStream(new File("Output.txt"));
		// System.setOut(obj);

		char c = sc.next().charAt(0);

		if(c >= 'A' && c <= 'Z')
		{
			c = 'A';
		}

		else
		{
			c ='a';
		}

		System.out.println(c);

		sc.close();
		System.out.flush();
	}
}