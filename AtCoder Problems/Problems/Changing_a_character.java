import java.io.*;
import java.util.*;
import java.lang.*;

public class Changing_a_character
{
	public static void main(String args[]) throws java.lang.Exception,FileNotFoundException
	{
		Scanner sc = new Scanner(System.in);

		// PrintStream obj = new PrintStream(new File("Output.txt"));
		// System.setOut(obj);

		int N = sc.nextInt();
		int K = sc.nextInt();

		String S = sc.next();

		StringBuffer str = new StringBuffer(S);

		int index = K - 1;

		for(int i = 0;i<N;i++)
		{
			Character c = str.charAt(i);

			if(i == index)
			{
				str.replace(i,i+1,Character.toLowerCase(c)+"");
			}
		}

		System.out.println(str);
		
		sc.close();
		System.out.flush();
	}
}