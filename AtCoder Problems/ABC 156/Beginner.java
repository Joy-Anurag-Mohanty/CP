import java.util.*;

public class Beginner
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) 
    {
        int N = sc.nextInt();
        int R = sc.nextInt();

        if(N >= 10)
            System.out.println(R);
        
        else
        {
            int IR = R + (100)*(10 - N);
            System.out.println(IR);
        }
    }
}