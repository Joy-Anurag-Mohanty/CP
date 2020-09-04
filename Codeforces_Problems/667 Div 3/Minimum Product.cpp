#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define ar array

void solve()
{
    ll a,b,x,y,N,ans = 1e18;
    cin>>a>>b>>x>>y>>N;

    for(ll i = 0; i < 2; i++)
    {
        ll diff1 = min(N,a-x);
        ll diff2 = min(N-diff1,b-y);

        ans = min(ans,(a-diff1)*(b-diff2));

        swap(a,b);
        swap(x,y);
    }

    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
        solve();
}