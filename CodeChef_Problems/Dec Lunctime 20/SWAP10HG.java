import java.util.*;

public class SWAP10HG
{
    
    static boolean isPossible(String S, String P, int len)
    {
        int s_ones = 0, s_zeros = 0;

        ArrayList<Integer>sz_index = new ArrayList<>();
        ArrayList<Integer>pz_index = new ArrayList<>();

        for(int i = 0; i < len; i++)
        {
            if(S.charAt(i) == '1')
                s_ones++;
            else
            {
                s_zeros++;
                sz_index.add(i);
            }
        }

        int p_ones = 0, p_zeros = 0;

        for(int i = 0; i < len; i++)
        {
            if(P.charAt(i) == '1')
                p_ones++;
            else
            {
                p_zeros++;
                pz_index.add(i);
            }
        }

        if(S.equals(P))
            return true;

        else if(s_zeros == p_zeros && s_ones == p_ones)
        {
            // System.out.println(sz_index);
            // System.out.println(pz_index);

            for(int i = 0 ; i < sz_index.size(); i++)
            {
                if(sz_index.get(i) < pz_index.get(i))
                    return false;
            }

            return true;
        }

        return false;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();

        while(T-- > 0)
        {
            int N = sc.nextInt();

            String S = sc.next();
            sc.nextLine();
            String P = sc.next();

            //System.out.println(N + " " + S + " " + P);

            boolean flag = isPossible(S, P, N);

            if(flag == true)
                System.out.println("Yes");
            else
                System.out.println("No");
        }

        sc.close();
    }
}