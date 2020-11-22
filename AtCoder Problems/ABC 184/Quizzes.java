import java.util.*;

public class Quizzes
{
    static Scanner sc = new Scanner(System.in);

    static void solve()
    {
        int N = sc.nextInt();
        int X = sc.nextInt();
        //System.out.println(N + " " + X);
        sc.nextLine();
        String S =  sc.nextLine();
        //System.out.println(S);

        for(int i = 0; i < N; i++)
        {
            if(S.charAt(i) == 'x' && X != 0)
                X--;
            
            else if(S.charAt(i) == 'o')
                X++;
        }

        System.out.println(X);
    }

    public static void main(String[] args)
    {
        solve();   
    }
}