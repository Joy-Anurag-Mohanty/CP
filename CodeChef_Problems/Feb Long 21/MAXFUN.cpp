#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll N;
    cin>>N;

    vector<ll>V;

    for(ll i = 0; i < N; i++)
    {
        ll inp;
        cin>>inp;
        V.push_back(inp);
    }

    sort(V.begin(),V.end());

    ll x = V[N - 1];
    ll y = V[0];
    ll z = V[1];

    cout<<abs(x - y) + abs(y - z) + abs(x - z)<<endl;
}

int main()
{
    int T;
    cin>>T;

    while(T--)
        solve();
}