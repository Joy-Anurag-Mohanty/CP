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
        FastReader s = new FastReader();
        
        int N = s.nextInt(),count = 0;

        int arr[] = new int[N];

        for(int i = 0 ; i < N; i++)
            arr[i] = s.nextInt();

        for(int i = 0 ; i <= N - 3; i++)
        {
            int a = arr[i];
            int b = arr[i + 1];
            int c = arr[i + 2];

            //System.out.println(a + " " + b + " " + c);

            //we have to check if b is the second smallest element

            int second = Math.max(Math.min(a,b), Math.min(Math.max(a,b),c));

            if(b == second)
                count++;
        }

        System.out.println(count);
    }
}
  
public class Ordinary_Number
{ 
    public static void main(String[] args) 
    { 
        Solution ob = new Solution();

        ob.solve();
    } 
} 