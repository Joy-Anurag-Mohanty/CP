import java.util.*;

public class DECREM
{

    static Scanner sc = new Scanner(System.in);

    static void solve()
    {
        long L = sc.nextLong();
        long R = sc.nextLong();

        if(R - L + 1 > L)
            System.out.println(-1);

        else
            System.out.println(R);
    }

    public static void main(String[] args) 
    {
        int T = sc.nextInt();

        for(int t = 0; t < T; t++) 
            solve();
    }
}