import java.util.*;

public class SEDARR
{
    static int minops(int arr[],int K)
    {
        int sum = 0;

        for(int i = 0; i < arr.length; i++)
            sum += arr[i];
        
        if(sum % K == 0)
            return 0;    

        return 1;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();

        while(T-- > 0)
        {
            int N = sc.nextInt();
            int K = sc.nextInt();

            int arr[] = new int[N];

            for(int i = 0; i < N; i++)
                arr[i] = sc.nextInt();
            
            int res = minops(arr,K);

            System.out.println(res);
        }

        sc.close();
    }
}