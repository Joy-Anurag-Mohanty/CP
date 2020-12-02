import java.util.*;

public class Part1
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        int validCount = 0;
        
        while(sc.hasNextLine())
        {
            String S = sc.nextLine();

            String colondelimited[] = S.split(":");

            String password = colondelimited[1].replaceAll("\\s","");
            //System.out.println(password);

            String spacedelimited[] = colondelimited[0].split(" ");

            String ch_s = spacedelimited[1].replaceAll("\\s", "");
            //System.out.println(ch);
            char ch = ch_s.charAt(0);

            String hypendelimited[] = spacedelimited[0].split("-");
            
            int lower = Integer.parseInt(hypendelimited[0]);
            int upper = Integer.parseInt(hypendelimited[1]);
            //System.out.println(lower + " " + upper);

            HashMap<Character,Integer>freq = new HashMap<Character,Integer>();

            char strArray[] = password.toCharArray();

            for(char c : strArray)
            {
                if(freq.containsKey(c))
                    freq.put(c, freq.get(c) + 1);
                
                else
                    freq.put(c,1);
            }

            if(freq.containsKey(ch))
            {
                Integer cnt = freq.get(ch);

                if(cnt >= lower && cnt <= upper)
                    validCount++;
            }
        }

        System.out.println(validCount);

        sc.close();
    }
}