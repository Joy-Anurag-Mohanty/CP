import java.util.*;

public class A
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) 
    {
        int N = sc.nextInt();
        
        if(N % 2 != 0)
            System.out.println("Black");
        else
            System.out.println("White");
    }
}