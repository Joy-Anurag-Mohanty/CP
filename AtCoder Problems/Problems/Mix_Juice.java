import java.io.*;
import java.util.*;
import java.lang.*;

public class Mix_Juice
{
	public static void main(String args[]) throws java.lang.Exception,FileNotFoundException
	{
		Scanner sc = new Scanner(System.in);

		// PrintStream obj = new PrintStream(new File("Output.txt"));
		// System.setOut(obj);

		int N,K;

		N = sc.nextInt();
		K = sc.nextInt();

		int P[] = new int[N];

		for(int i = 0;i<N;i++)
		{
			P[i] = sc.nextInt();
		}

		Arrays.sort(P);

		int price = 0;

		for(int i = 0;i<K;i++)
		{
			price = price + P[i];
		}

		System.out.print(price);

		sc.close();
		System.out.flush();
	}
}