import java.util.*;
import java.io.*;

public class UnitGCD
{
	void solve() 
	{
		

		Scanner sc = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);

		int T = sc.nextInt();

		for(int t = 0;t<T;t++)
		{
			int N = sc.nextInt();

			if(N == 1)
			{
				out.println(1);
				out.println("1 1");
			}

			else if(N == 2)
			{
				out.println(2);
				out.println("2 1 2");
			}

			else
			{
				if(N % 2 == 0)
				{
					int D = N/2;
					out.println(D);

					int current = 1;

					for(int i = 1;i<=D;i++)
					{
						out.println("2 "+(current)+" "+(current + 1));
						current = current + 2;
					}
				}

				else
				{
					int D = N/2;

					out.println(D);

					out.println("3 1 2 "+N);

					int current = 3;

					for(int i = 2;i<=D;i++)
					{
						out.println("2 "+(current)+" "+(current+1));
						current = current + 2;
					}	
				}
			}
		}

		out.flush();

	}

	public static void main(String args[]) throws IOException
	{
		new UnitGCD().solve();
	}
}