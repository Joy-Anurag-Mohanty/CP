import java.util.*;

public class Box
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) 
    {
        int N = sc.nextInt();
        int A = sc.nextInt();
        int B = sc.nextInt();

        System.out.println(N + B - A);
    }
}