#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll N,sum,inp;
vector<ll>V;

void solve()
{   
    cin>>N>>sum;

    for(ll i = 0 ; i < N; i++)
    {
        cin>>inp;
        V.pb(inp);
    }

    unordered_map<ll,ll>mp;

    ll count = 0, currSum = 0;

    for(ll i = 0 ; i < N; i++)
    {
        currSum += V[i];

        if(currSum == sum)
            count++;

        if(mp.find(currSum - sum) != mp.end())
            count += (mp[currSum - sum]);

        mp[currSum]++;
    }

    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}