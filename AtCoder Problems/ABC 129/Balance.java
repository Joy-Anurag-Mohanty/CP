import java.util.*;

public class Balance
{
    static Scanner sc = new Scanner(System.in);
    
    static void solve()
    {
        int N = sc.nextInt();

        ArrayList<Integer>arr = new ArrayList<>();

        for(int i = 0; i < N; i++)
        {
            int inp = sc.nextInt();
            arr.add(inp);
        }

        int min_diff = Integer.MAX_VALUE, sum1 = 0;

        for(int i = 0; i < N - 1; i++)
        {
            sum1 = sum1 + arr.get(i);

            int sum2 = 0;

            for(int j = i + 1; j < N; j++)
            {
                sum2 = sum2 + arr.get(j);
            }

            if(Math.abs(sum1 - sum2) < min_diff)
                min_diff = (int)(Math.abs(sum1 - sum2));
        }

        System.out.println(min_diff);

    }


    public static void main(String[] args) 
    {
        solve();
    }
}