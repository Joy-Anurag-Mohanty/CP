#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printMap(map<string,vector<char>>mp)
{
    for(auto x : mp)
    {
        cout<<x.first<<" -> ";

        for(int i = 0; i < x.second.size(); i++)
            cout<<x.second[i]<<" ";
        
        cout<<endl;
    }
    cout<<endl;
}

int uniqueElements(vector<char>A, vector<char>B)
{
    set<char>S;

    for(int i = 0; i < A.size(); i++)
        S.insert(A[i]);
    
    for(int i = 0; i < B.size(); i++)
        S.insert(B[i]);

    return S.size();
}

void solve()
{
    int N;
    cin>>N;

    vector<string>V; //input strings

    for(int i = 0; i < N; i++)
    {
        string inp;
        cin>>inp;
        V.push_back(inp);
    }

    map<string,vector<char>>mp;

    /*

    for hell,bell,best,test the map would be suffix -> prefixes

    ell -> h , b;
    est -> b , t;

    */

   for(int i = 0; i < N; i++)
   {
       string str = V[i];

       string suffix = "";

        for(int j = 1; j < str.size(); j++)
            suffix += str[j];
        
        mp[suffix].push_back(str[0]);
   }

   //printMap(mp);

   int total = 0;

   for(auto it1 = mp.begin(); it1 != mp.end(); it1++)
   {

       for(auto it2 = mp.begin(); it2 != mp.end(); it2++)
       {
           int sz = uniqueElements(it1 -> second, it2 -> second);

            //cout<<sz<<endl;

           total += (sz - (it1 -> second).size())*(sz - (it2 -> second).size());
       }
   }

   cout<<total<<endl;
}

int main()
{
    int T;
    cin>>T;

    while(T--)
        solve();

    return 0;
}