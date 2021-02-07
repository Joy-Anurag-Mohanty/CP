import java.util.*;

public class DIVTHREE
{
    static int contests(int K,int D, int total_problems)
    {
        if(total_problems < K)
            return 0;
        
        else
            return Math.min(total_problems/K, D);
    }

    public static void main(String[] args) 
    {
        Scanner sc =  new Scanner(System.in);
        
        int T = sc.nextInt();

        while(T-- > 0)
        {
            int N = sc.nextInt();
            int K = sc.nextInt();
            int D = sc.nextInt();

            int total_problems = 0; 

            for(int i = 0; i < N; i++)
            {
                int inp =  sc.nextInt();

                total_problems += inp;
            }

            System.out.println(contests(K, D, total_problems));
        }

        sc.close();
    }
}