import java.io.*;
import java.util.*;
import java.lang.*;

public class Five_Variables
{
	public static void main(String args[]) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);

		int arr[] = new int[5];

		for(int i = 0;i<5;i++)
		{
			arr[i] = sc.nextInt();
		}	

		int index = 0;

		for(int i = 0;i<5;i++)
		{
			if(arr[i] == 0)
			{
				index = i;
				break;
			}
		}

		out.println(index + 1);
		out.flush();
	}
}