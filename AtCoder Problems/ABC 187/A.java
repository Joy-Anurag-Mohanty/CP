import java.util.*;

public class A
{
    static int digSum(int N)
    {
        int sum = 0;

        while(N != 0)
        {
            sum = sum + (N % 10);
            N /= 10;
        }

        return sum;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        int A = sc.nextInt();
        int B = sc.nextInt();

        int sumA = digSum(A);
        int sumB = digSum(B);

        System.out.println(Math.max(sumA, sumB));
        
        sc.close();
    }
}