import java.io.*;
import java.util.*;
import java.lang.*;

public class Calc
{
	public static void main(String args[]) throws java.lang.Exception,FileNotFoundException
	{
		Scanner sc = new Scanner(System.in);

		int a = sc.nextInt();

		int res = a + a*a + a*a*a;

		System.out.println(res);

		sc.close();
		System.out.flush();
	}
}