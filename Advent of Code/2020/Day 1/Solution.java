import java.util.*;

//Both Parts solved

public class Solution
{
    static Scanner sc = new Scanner(System.in);

    static void solver1(ArrayList<Integer>arr)
    {
        Collections.sort(arr);

        int l = 0;
        int r = arr.size() - 1;

        while(l < r)
        {
            if(arr.get(l) + arr.get(r) == 2020)
            {
                long res = (long)(arr.get(l) * arr.get(r));
                System.out.println(res);
                return;
            }

            else if(arr.get(l) + arr.get(r) < 2020)
                l++;
            
            else
                r--;
        }
    }

    static void solver2(ArrayList<Integer>arr)
    {
        Collections.sort(arr);

        int l = 0,r = 0;

        for(int i = 0; i < arr.size() - 2; i++)
        {
            l = i + 1;
            r = arr.size() - 1;

            while(l < r)
            {
                if(arr.get(i) + arr.get(l) + arr.get(r) == 2020)
                {
                    long res = (long)(arr.get(i) * arr.get(l) * arr.get(r));
                    System.out.println(res);
                    return;
                }

                else if(arr.get(i) + arr.get(l) + arr.get(r) < 2020)
                    l++;
                
                else
                    r--;
            }
        }
    }   

    public static void main(String[] args) 
    {
        ArrayList<Integer>arr = new ArrayList<>();

        while(sc.hasNextLine())
        {
            String[] tokens = sc.nextLine().split("\\s");
            int inum =  Integer.parseInt(tokens[0]);
            arr.add(inum);
        }

        solver1(arr); //Part 1
        solver2(arr); //Part 2
    }
}
