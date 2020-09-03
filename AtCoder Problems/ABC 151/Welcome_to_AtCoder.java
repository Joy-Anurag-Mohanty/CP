import java.io.*;
import java.util.*;

class FastReader 
{ 
    BufferedReader br; 
    StringTokenizer st; 
    
    public FastReader() 
    { 
        br = new BufferedReader(new InputStreamReader(System.in)); 
    } 
    
    String next() 
    { 
        while (st == null || !st.hasMoreElements()) 
        { 
            try
            { 
                st = new StringTokenizer(br.readLine()); 
            } 
            catch (IOException  e) 
            { 
                e.printStackTrace(); 
            } 
        } 
        return st.nextToken(); 
    } 
    
    int nextInt() 
    { 
        return Integer.parseInt(next()); 
    } 
    
    long nextLong() 
    { 
        return Long.parseLong(next()); 
    } 
    
    double nextDouble() 
    { 
        return Double.parseDouble(next()); 
    } 
    
    String nextLine() 
    { 
          String str = ""; 
        try
        { 
            str = br.readLine(); 
        } 
        catch (IOException e) 
        { 
            e.printStackTrace(); 
        } 
        return str; 
    } 
} 

class Solution
{
    void solve()
    {
        FastReader sc = new FastReader();

        int N = sc.nextInt(); //number of problems
        int M = sc.nextInt(); //number of submissions

        int wa = 0, ac = 0;

        boolean c[] = new boolean[N];
        int q[] = new int[N];

        Arrays.fill(c,true);
        Arrays.fill(q,0);

        for(int i = 0; i < M ; i++)
        {
            int qno = sc.nextInt() - 1;
            String st = sc.next();

            if(st.equals("WA") && c[qno]) q[qno]++;

            if(st.equals("AC") && c[qno])
            {
                c[qno] = false;
                wa += q[qno];
                ac++; 
            }
        }

        System.out.println(ac + " " + wa);
    }
}
  
public class Welcome_to_AtCoder 
{ 
    public static void main(String[] args) 
    { 
        Solution ob = new Solution();

        ob.solve();
    } 
} 