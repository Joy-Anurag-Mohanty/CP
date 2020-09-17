#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    ll N;
    cin>>N;
    
    for(ll i = 1; i <= N ; i++)
    {

        ll p1 = (pow(i,2)*(pow(i,2) - 1))/2;
        ll p2 = 4*(i-1)*(i-2);

        ll res = p1 - p2;

        cout<<res<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}