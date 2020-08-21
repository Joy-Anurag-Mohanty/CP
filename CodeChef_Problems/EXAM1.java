import java.io.*;
import java.util.*;
import java.lang.*;

public class EXAM1
{
	public static void main(String args[]) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);

		int T = sc.nextInt();

		for(int t = 0;t<T;t++)
		{
			int N = sc.nextInt();

			String S = sc.next();
			String U = sc.next();

			int points = 0;

			for(int i= 0;i<S.length();i++)
			{
				if(S.charAt(i) == U.charAt(i))
					points++;

				else if(S.charAt(i) != U.charAt(i) && U.charAt(i) != 'N')
					i++;
			}

			out.println(points);
			out.flush();
		}
	}
}