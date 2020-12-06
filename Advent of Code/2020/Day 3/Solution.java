import java.util.*;
import java.io.*;

public class Solution
{
    private static List<String> loadData ()
    {
        List<String> lines = new ArrayList<>();

        try 
        {
            File myFile = new File("in.txt");
            Scanner scanner = new Scanner(myFile);

            while (scanner.hasNextLine()) 
            {
                lines.add(scanner.nextLine());
            }

            scanner.close();

        } 
        catch (FileNotFoundException e) 
        {
            System.out.println("Error loading in data");
            e.printStackTrace();
        }

        return lines;
    }

    public void Part1() 
    {
        List<String> lines = loadData();
        int trees = 0;
        int horizonPos = 0;

        for( int i = 1; i < lines.size(); i++)
        {
            horizonPos += 3;
            if( horizonPos > lines.get(i).length()-1) 
            {
                horizonPos = horizonPos-lines.get(i).length();
            }
            if( lines.get(i).charAt(horizonPos) == '#' )
            {
                trees++;
            }
        }
        System.out.println(trees);
        
    }

    private static int travel(List<String> lines, int right, int down)
    {
        int trees = 0;
        int horizonPos = 0;
        for( int i = down; i < lines.size(); i += down)
        {
            horizonPos += right;

            if( horizonPos > lines.get(i).length()-1) 
            {
                horizonPos = horizonPos-lines.get(i).length();
            }

            if( lines.get(i).charAt(horizonPos) == '#' )
            {
                trees++;
            }
        }

        //System.out.println(trees);

        return trees;
    }

    public void Part2()
    {
        List<String> lines = loadData();
        long trees = travel(lines, 1,1);
        trees = trees* travel(lines,3,1);
        trees = trees* travel(lines, 5,1);
        trees = trees* travel(lines,7,1);
        trees = trees* travel(lines,1,2);
        System.out.println(trees);
    }

    public static void main(String args[])
    {
        Main ob = new Main();
        ob.Part1();
        ob.Part2();
    }
}