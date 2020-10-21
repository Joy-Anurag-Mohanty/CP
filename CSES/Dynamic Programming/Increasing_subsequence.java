import java.util.*;

public class Increasing_subsequence
{
    static int LISlength(int arr[])
    {
        int lis[] = new int[arr.length];
        int len = 0;

        for(int num : arr)
        {
            int i = Arrays.binarySearch(lis, 0, len, num);

            if(i < 0)
                i = -(i+1);
            
            lis[i] = num;

            if(i == len)
                len++;
        }

        return len;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();

        int arr[] = new int[N];

        for(int i = 0;i < N; i++)
            arr[i] = sc.nextInt();

        System.out.println(LISlength(arr));
        
        sc.close();
    }
}