#include<bits/stdc++.h>
using namespace std;
#define ll long  long

class Solution
{
    map<char,int>mp;

    public:

    bool all_ones()
    {
        for(auto x : mp)
            if(x.second > 1)
                return false;

        return true;
    }

    int maxLengthBetweenEqualCharacters(string s)
    {
        int len = 0;

        for(int i = 0; i < s.length(); i++)
            mp[s[i]]++;

        if(all_ones())
            return -1;

        for(auto x : mp)
        {
            if(x.second > 1)
            {
                //cout<<x.first<<endl;

                int first,last;

                for(int i = 0;i < s.length(); i++)
                {
                    if(s[i] == x.first)
                    {
                        first = i;
                        break;
                    }
                }

                for(int i = first + 1; i < s.length(); i++)
                {
                    if(s[i] == x.first)
                        last = i;
                }

                //cout<<first<<" "<<last<<endl;

                len = max(len,(last - first) - 1);
            }
        }

        return len;
    }
};

int main()
{
    string S;
    cin>>S;

    Solution ob;
    cout<< ob.maxLengthBetweenEqualCharacters(S) <<endl;
}