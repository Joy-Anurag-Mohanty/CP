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
        
        int N = sc.nextInt();
        int M = sc.nextInt();
        int K = sc.nextInt();

        ArrayList<Integer>arr = new ArrayList<>();

        for(int i = 0 ; i < N - 1; i++)
            arr.add(sc.nextInt());

        int sum = 0;

        for(int i = 0; i < N - 1 ; i++)
            sum += arr.get(i);

        //System.out.println(sum);

        for(int i = 0; i <= M; i++)
        {
            int temp = sum + i;
            double avg = temp/N;

            if(avg >= (double)K)
            {
                System.out.println(i);
                return;
            }
        }

        System.out.println(-1);

    }
}
  
public class Main 
{ 
    public static void main(String[] args) 
    { 
        Solution ob = new Solution();

        ob.solve();
    } 
} 