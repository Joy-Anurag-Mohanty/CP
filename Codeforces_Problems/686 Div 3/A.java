import java.util.*;

public class A
{
    static Scanner sc = new Scanner(System.in);

    static void check(int arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] == i + 1)
            {
                //swap i & i + 1

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp; 
            }
        }

        for(int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    static void solve()
    {
        int N = sc.nextInt(), j = 0;

        int arr[] = new int[N];

        for(int i = N; i >= 1; i--)
        {
            arr[j] = i;
            j++;
        }
        
        check(arr);
    }

    public static void main(String[] args) 
    {
        int T = sc.nextInt();
        
        while(T-- > 0)
            solve();
    }
}