import java.util.*;

public class Way_to_Long_Words
{
    static Scanner sc = new Scanner(System.in);

    void solve()
    {   
        String S = sc.next();

        if(S.length() <= 10)
            System.out.println(S);

        else
        {
            char ch1 = S.charAt(0);
            char ch2 = S.charAt(S.length() - 1);

            long len = S.length() - 2;

            System.out.print(ch1);
            System.out.print(len);
            System.out.print(ch2);
            System.out.println();
        }
    }

    public static void main(String[] args) 
    {
        Way_to_Long_Words ob = new Way_to_Long_Words();

        int T = sc.nextInt();

        while(T-- > 0)
            ob.solve();
    }
}