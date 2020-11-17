import java.util.*;

public class Billiards
{
    static Scanner sc = new Scanner(System.in);

    static void solve(double x1, double y1, double x2, double y2)
    {
        double x = ((x1*y2 + x2*y1)/(y2 + y1));

        System.out.println(x);
    }

    public static void main(String[] args) 
    {
        double x1 = sc.nextDouble();
        double y1 = sc.nextDouble();
        double x2 = sc.nextDouble();
        double y2 = sc.nextDouble();

        solve(x1, y1, x2, y2);
    }
}