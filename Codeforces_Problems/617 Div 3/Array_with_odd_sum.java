import java.io.*;
import java.util.*;
  
public class Array_with_odd_sum
{ 
    static Scanner sc = new Scanner(System.in);

    static void solve()
    {
        int N = sc.nextInt(),odd = 0, even = 0;

        for(int i = 0; i < N; i++)
        {
            int inp = sc.nextInt();

            if(inp % 2 != 0)
                odd++;
            else
                even++;
        }

        if((even != 0 && odd != 0) || (even == 0 && odd%2 != 0))
            System.out.println("YES");
        else
            System.out.println("NO");
    }

    public static void main(String[] args) 
    {
        int T = sc.nextInt();

        while(T-- > 0)
            solve();
    } 
} 