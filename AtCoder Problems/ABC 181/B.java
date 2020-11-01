import java.util.*;

public class B
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) 
    {
        long T = sc.nextLong();
        long sum = 0;

        while(T-- > 0)
        {
            long A = sc.nextLong();
            long B = sc.nextLong();

            sum = sum + ((B - A + 1)*(A + B))/2;
        }

        System.out.println(sum);
    }
}