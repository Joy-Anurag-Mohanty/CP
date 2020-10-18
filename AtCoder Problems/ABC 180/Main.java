import java.util.*;

public class Main
{
    static Scanner sc = new Scanner(System.in);

    static void manhattan_dist(int arr[])
    {
        int md = 0;

        for(int i = 0; i < arr.length; i++)
        {
            md += (int)Math.abs(arr[i]);
        }

        System.out.println(md);
    }

    static void euclidiean_dist(int arr[])
    {
        double ed = 0;
        long sum_s = 0;

        for(int i = 0; i < arr.length; i++)
        {
            sum_s += arr[i]*arr[i];
        }

        ed = Math.sqrt(sum_s);

        System.out.println(ed);
    }

    static void chebyshev_dist(int arr[])
    {
        int cd = 0;

        for(int i = 0; i < arr.length; i++)
        {
            if(cd < Math.abs(arr[i]))
                cd = Math.abs(arr[i]);
        }

        System.out.println(cd);
    }

    public static void main(String[] args) 
    {
        int N = sc.nextInt();

        int arr[] = new int[N];

        for(int i = 0; i < N; i++)
            arr[i] = sc.nextInt();

        manhattan_dist(arr);
        euclidiean_dist(arr);
        chebyshev_dist(arr);
    }
}