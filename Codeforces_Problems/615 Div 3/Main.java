import java.util.*;

public class Main
{
    static Scanner sc = new Scanner(System.in);

    void solve()
    {
        ArrayList<Long>arr = new ArrayList<>();

        long a,b,c,n;
        a = sc.nextLong();
        b = sc.nextLong();
        c = sc.nextLong();
        n = sc.nextLong();

        arr.add(a);
        arr.add(b);
        arr.add(c);

        Collections.sort(arr);

        //System.out.println(arr);

        long res = arr.get(2)*2 - arr.get(1) - arr.get(0);
        n = n - res;

        if(n < 0 || (n % 3) != 0)
            System.out.println("NO");
        else
            System.out.println("YES");
    }
    public static void main(String[] args) 
    {  
        int T = sc.nextInt();

        Main ob = new Main();

        while(T-- > 0)
            ob.solve();
    }
}