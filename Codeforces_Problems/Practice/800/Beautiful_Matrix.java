import java.lang.Math;
import java.util.Scanner;

public class Beautiful_Matrix
{
    static Scanner sc = new Scanner(System.in);
    static Beautiful_Matrix ob = new Beautiful_Matrix();

    static int centre_r = 2, centre_c = 2;
    static int pos_r,pos_c;
    static int mat[][] = new int[5][5];


    void solve()
    {   
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                mat[i][j] = sc.nextInt();

                if(mat[i][j] == 1)
                {
                    pos_r = i;
                    pos_c = j;
                }
            }
        }

        int r_moves = Math.abs(pos_r - centre_r);
        int c_moves = Math.abs(pos_c - centre_c);

        System.out.println(r_moves + c_moves);
    }   


    public static void main(String[] args) 
    {
        ob.solve();
    }
}