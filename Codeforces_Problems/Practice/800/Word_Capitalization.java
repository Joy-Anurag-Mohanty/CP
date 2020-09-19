import java.util.Scanner;
import java.lang.StringBuilder;

public class Word_Capitalization
{
    static Scanner sc = new Scanner(System.in);
    static Word_Capitalization ob = new Word_Capitalization();

    void solve()
    {   
        String S = sc.next();
        StringBuilder str = new StringBuilder(S);

        char ch =  Character.toUpperCase(S.charAt(0));

        str.setCharAt(0, ch);

        System.out.println(str);
    }   


    public static void main(String[] args) 
    {
        ob.solve();
    }
}