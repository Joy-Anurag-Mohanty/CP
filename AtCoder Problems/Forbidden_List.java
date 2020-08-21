import java.util.Arrays;
import java.util.Scanner;
import java.lang.*;
import java.io.*;

public class Main
{
	public static void main(String args[]) throws java.lang.Exception,FileNotFoundException
	{
		Scanner sc = new Scanner(System.in);

		// PrintStream obj = new PrintStream(new File("Output.txt"));
		// PrintStream console = System.out;
		// System.setOut(obj);

		int X = sc.nextInt();
		int N = sc.nextInt();

		int min = 0;
		int max = 101;

		int[] arr =  new int[N];

		for(int i = 0;i<N;i++)
		{
			arr[i] = sc.nextInt();
		}

		for(int i = 0;i<=100;i++)
		{
			int num1 = X - i;
			int num2 = X + i;

			int count1 = 0;
			int count2 = 0;

			for(int j = 0;j<N;j++)
			{
				if(arr[j] == num1)
					count1++;

				if(arr[j] == num2)
					count2++;
			}

			if(count1 == 0)
			{
				System.out.println(num1);
				break;
			}

			else if(count2 == 0)
			{
				System.out.println(num2);
				break;
			}
		}

		System.out.flush();
	}
}