import java.util.*;

public class Team
{
    static Scanner sc = new Scanner(System.in);
    static Team ob = new Team();

    int questions_solved()
    {
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if(a + b + c >= 2)
            return 1;
        return 0;

    }

    void solve()
    {   
        int N = sc.nextInt();
        int solved = 0;

        for(int i = 0; i < N; i++)
        {
            solved += ob.questions_solved();
        }

        System.out.println(solved);
    }   

    public static void main(String[] args) 
    {
        ob.solve();
    }
}