import java.util.*;

public class Airplane
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        int P = sc.nextInt();
        int Q = sc.nextInt();
        int R = sc.nextInt();

        int sum1 = P + Q;
        int sum2 = Q + R;
        int sum3 = P + R;

        if(sum1 <= sum2)
        {
            if(sum1 <= sum3)
                System.out.println(sum1);
            
            else
                System.out.println(sum3);
        }

        else
        {
            if(sum2 <= sum3)
                System.out.println(sum2);
            else
                System.out.println(sum3);
        }

        sc.close();
    }
}