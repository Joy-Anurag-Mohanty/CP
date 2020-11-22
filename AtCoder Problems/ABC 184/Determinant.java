import java.util.*;

public class Determinant
{
    static Scanner sc = new Scanner(System.in);

    static void solve()
    {
        int mat[][] = new int[2][2];

        for(int i = 0 ; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                mat[i][j] = sc.nextInt();
            }
        }

        int det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];

        System.out.println(det);
    }

    public static void main(String[] args)
    {
        solve();   
    }
}