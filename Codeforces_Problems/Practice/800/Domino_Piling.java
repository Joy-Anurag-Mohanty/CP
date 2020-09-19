import java.util.*;

public class Domino_Piling
{
    static Scanner sc = new Scanner(System.in);
    static Domino_Piling ob = new Domino_Piling();

    void solve()
    {   
        int N = sc.nextInt();
        int M = sc.nextInt();

        int area = N*M;

        System.out.println(area/2);
    }   


    public static void main(String[] args) 
    {
        ob.solve();
    }
}