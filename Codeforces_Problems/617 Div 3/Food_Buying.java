import java.io.*;
import java.util.*;
  
public class Food_Buying 
{ 
    static Scanner sc = new Scanner(System.in);

    static void solve()
    {
        long S = sc.nextLong();

        long sum = (long)(S/(1 - 0.1));

        if(S % 9 == 0)
        {
            System.out.println(sum - 1);
            return;
        }

        System.out.println(sum);
    }

    public static void main(String[] args) 
    {
        int T = sc.nextInt();

        while(T-- > 0)
            solve();
    } 
} 