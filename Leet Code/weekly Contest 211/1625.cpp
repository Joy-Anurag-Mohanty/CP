#include<bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_set<string>vis;

    string ans;
    int a,b,n;

    bool isVisited(string s)
    {
        return vis.find(s) != vis.end();
    }

    void visit(string s)
    {
        ans = min(ans,s);
        vis.insert(s);
    }

    string rotate(string s, int k)
    {
        reverse(s.begin(), s.end());
        reverse(s.begin(), s.begin() + k);
        reverse(s.begin() + k, s.end());
        return s;
    }

    string add(string s, int k)
    {
        for(int i = 1; i < n; i = i + 2)
        {
            char &c = s[i];
            c = '0' + (c - '0' + k) % 10;
        }

        return s;
    }

    public:

    void dfs(string s)
    {
        if(isVisited(s))
            return;

        visit(s);
        dfs(rotate(s,b));
        dfs(add(s,a)); 
    }

    string findLexSmallestString(string s, int a, int b)
    {
        ans = s;
        this -> a = a;
        this -> b = b;

        n = s.size();
        dfs(s);

        return ans;
    }
};

int main()
{
    Solution ob;

    string S;
    int a,b;
    
    cin>>S>>a>>b;

    cout<<ob.findLexSmallestString(S,a,b)<<endl;
}