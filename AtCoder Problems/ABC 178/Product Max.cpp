#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MOD = 1e9+7;

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll res = a*c;
    res = max(res,a*d);
    res = max(res,b*c);
    res = max(res,b*d);

    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}