import java.util.*;

public class CVDRUN
{
    static Scanner sc = new Scanner(System.in);

    void solve()
    {
        int N = sc.nextInt();
        int K = sc.nextInt();
        int X = sc.nextInt();
        int Y = sc.nextInt();

        boolean visited[] = new boolean[N];

        for(int i = 0 ; i < N; i++)
            visited[i] = false;

        int curr = X;
        int destination = Y;

        while(visited[curr] != true)
        {
            visited[curr] = true;
            curr = ((curr + K) % N);
        }

        // for(int i = 0; i < N; i++)
        //     System.out.print(visited[i] + " ");
        // System.out.println();

        if(visited[destination] == true)
            System.out.println("YES");
        else
            System.out.println("NO");
    }

    public static void main(String[] args) 
    {
        int T = sc.nextInt();

        Main ob = new Main();

        while(T-- > 0)
            ob.solve();
    }
}