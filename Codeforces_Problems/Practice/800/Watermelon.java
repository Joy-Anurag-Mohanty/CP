import java.util.*;

public class Watermelon
{
    static Scanner sc = new Scanner(System.in);

    void solve()
    {   
        int w = sc.nextInt();

        if(w == 2)
        {
            System.out.println("NO");
            return;
        }

        if(w % 2 != 0)
            System.out.println("NO");
        else
            System.out.println("YES");
    }

    public static void main(String[] args) 
    {
        Watermelon ob = new Watermelon();

        ob.solve();
    }
}