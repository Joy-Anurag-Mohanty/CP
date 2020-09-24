#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    ll N;
    cin>>N;

    ll res = 0;

    for(ll i = 1; i <= N; i++)
    {
        res += (N - 1)/i;
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