import java.io.*;
import java.util.*;
import java.lang.*;

public class SMPAIR
{
	public static void main(String args[]) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);

		int T = sc.nextInt();

		for(int t = 0;t<T;t++)
		{
			
			int N = sc.nextInt();

			int arr[] = new int[N];

			for(int i = 0;i<N;i++)
			{
				arr[i] = sc.nextInt();
			}

			Arrays.sort(arr);

			int a = arr[0];
			int b = arr[1];

			out.println(a + b);
			out.flush();
		}
	}
}