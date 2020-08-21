import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.*;

public class Crane_and_Turtle
{
	public static void main(String args[]) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);

		int X = sc.nextInt();
		int Y = sc.nextInt();

		if(Y % 2 == 0)
		{
			int a = 2*X - (Y/2);
 
			if(Math.ceil(a) == Math.floor(a) && a >= 0 && (X-a) >= 0)
				out.println("Yes");
			else
				out.println("No");
		}
 
		else
		{
			out.println("No");
		}
		
		out.flush();
	}
}