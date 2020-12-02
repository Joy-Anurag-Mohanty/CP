import java.util.*;

public class Part2
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
            
            int pos1 = Integer.parseInt(hypendelimited[0]) - 1; //zero indexing
            int pos2 = Integer.parseInt(hypendelimited[1]) - 1; 

            int cnt = 0;

            if(password.charAt(pos1) == ch)
                cnt++;
            
            if(password.charAt(pos2) == ch)
                cnt++;

            if(cnt == 1)
                validCount++;
        }

        System.out.println(validCount);

        sc.close();
    }
}