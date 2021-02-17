#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int N;
    cin>>N;

    vector<int>W(N); //weights
    vector<int>J(N); //jump

    for(int i = 0; i < N; i++)
        cin>>W[i];

    for(int i = 0; i < N; i++)
        cin>>J[i];

    map<int,pair<int,int>>mp;

    for(int i = 0; i < N; i++)
        mp[W[i]] = {J[i],i};

    int res = 0,curr;

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        if(it == mp.begin())
            curr = (it -> second).second;
        
        else
        {
            int in = (it -> second).second;

            while(curr >= in)
            {
                res++;
                in += ((it -> second).first);
            }

            curr = in;
        }
    }

    cout<<res<<endl;
}

int main()
{
    int T;
    cin>>T;

    while(T--)
        solve();
}