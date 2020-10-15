import java.util.*;

public class Subarray_sum_2
{
    static Scanner sc = new Scanner(System.in);

    static void subarraycount(long arr[],long x)
    {
        long count = 0, sum = 0;

        HashMap<Long,Long>mp = new HashMap<>();
        mp.put((long)0, (long)1);

        for(long i = 0; i < arr.length; i++)
        {
            sum += arr[(int)i];

            if(mp.containsKey(sum - x))
                count += mp.get(sum - x);

            mp.put(sum, mp.getOrDefault((long)sum, (long)0) + 1);
        }

        System.out.println(count);
    }

    public static void main(String[] args) 
    {
        long N = sc.nextLong();
        long X = sc.nextLong();

        long arr[] = new long[(int)N];

        for(long i = 0 ; i < N; i++)
            arr[(int)i] = sc.nextLong();

        subarraycount(arr, X);
    }
}