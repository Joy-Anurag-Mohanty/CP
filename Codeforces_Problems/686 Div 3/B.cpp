#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int N;
    cin>>N;

    vector<int>V(N);

    for(int i = 0; i < N; i++)
        cin>>V[i];

    map<int,int>mp;

    for(auto x : V)
        mp[x]++;

    //check those elements whose frequency is one

    int mini = INT_MAX, flag = 0;

    for(auto x : mp)
    {
        //cout<<x.first<<" "<<x.second<<endl;

        if(x.second == 1)
        {
            flag = 1;

            if(x.first < mini)
                mini = x.first;
        }
    }

    if(!flag)
    {
        cout<<-1<<endl;
        return;
    }

    for(int i = 0; i < N; i++)
    {
        if(V[i] == mini)
        {
            cout<<i + 1<<endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;

    while(T--)
        solve();

    return 0;
}