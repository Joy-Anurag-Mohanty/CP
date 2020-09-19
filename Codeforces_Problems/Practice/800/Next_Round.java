import java.util.*;

public class Next_Round
{
    static Scanner sc = new Scanner(System.in);
    static Next_Round ob = new Next_Round();

    void solve()
    {   
        int N = sc.nextInt();
        int K = sc.nextInt();

        ArrayList<Integer>arr = new ArrayList<>();

        for(int i = 0; i < N; i++)
        {
            int inp = sc.nextInt();
            arr.add(inp);
        }

        int cut_off = arr.get(K - 1);

        int count = 0;

        for(int i : arr)
        {
            if(i >= cut_off && i > 0)
                count++;
        }

        System.out.println(count);
    }   


    public static void main(String[] args) 
    {
        ob.solve();
    }
}