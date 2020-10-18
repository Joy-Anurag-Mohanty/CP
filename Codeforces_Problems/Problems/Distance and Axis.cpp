#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

void solve()
{
    ll N,K;
    cin>>N>>K;

    if(N < K)
        cout<<K - N<<endl;
    
    else
    {
        int m = (N - K) % 2;

        if(m)
            cout<<1<<endl;
        else
            cout<<0<<endl;
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