#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    ll N;
    cin>>N;

    vector<ll>V;

    for(ll i = 0; i < N; i++)
    {
        ll inp;
        cin>>inp;
        V.pb(inp);
    }

    map<ll,ll>mp;
    ll pre_sum = 0,res = 0;

    ++mp[pre_sum];

    for(ll i = 0 ; i < N; i++)
    {
        pre_sum += V[i];

        if(mp[pre_sum] > 0)
        {
            res++;
            mp.clear();
            ++mp[pre_sum - V[i]];
        }

        ++mp[pre_sum];
    }

    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}