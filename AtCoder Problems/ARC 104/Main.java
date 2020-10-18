import java.util.*;

public class Main
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) 
    {
        int A = sc.nextInt();
        int B = sc.nextInt();

        int X = (A+B)/2;
        int Y = (A-B)/2;

        System.out.println(X + " " + Y);
    }
}