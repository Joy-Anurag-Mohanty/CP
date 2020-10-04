import java.util.*;

public class Digits
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) 
    {
        long N = sc.nextLong();
        long B = sc.nextLong();

        long cnt = 0;

        while(N > 0)
        {
            N = N / B;
            cnt++;
        }

        System.out.println(cnt);
    }
}