#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll N,C;
    cin>>N>>C;

    vector<pair<ll,ll>>V;

    for(ll i = 0; i < N; i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        V.push_back(make_pair(a,c));
        V.push_back(make_pair(b + 1, -c));
    }

    sort(V.begin(),V.end());

    ll res = 0, curr_day = 0, cost = 0;

    for(ll i = 0 ; i < V.size() ; i++)
    {
        ll time_change = V[i].first - curr_day;
        ll cost_change = V[i].second;

        res += time_change*min(C,cost);
        cost += cost_change;
        curr_day += time_change;
    }

    cout<<res<<endl;
}

int main()
{
    solve();

    return 0;
}
