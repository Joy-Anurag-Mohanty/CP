import java.util.*;

public class A
{
    static Scanner sc = new Scanner(System.in);

    static void solve()
    {
        int X = sc.nextInt();
        int Y = sc.nextInt();

        int diff = Math.abs(X - Y);

        if(diff < 3)
            System.out.println("Yes");
        else
            System.out.println("No");
    }

    public static void main(String[] args) 
    {
        solve();
    }
}