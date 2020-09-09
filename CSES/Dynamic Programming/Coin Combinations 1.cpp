#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll MOD = 1e9+7, mxN = 100, mxX = 1e6;

ll N,X;
vector<ll>V;

ll dp[mxX + 1],c[mxN];

void Combinations()
{
    dp[0] = 1;

    for(ll i = 1; i <= X; i++)
    {
        for(ll j = 0; j < N; j++)
        {
            if(c[j] <= i)
                dp[i] = (dp[i] + dp[i - c[j]]) % MOD;
        }
    }

    cout<<dp[X]<<endl;
}

void solve()
{
    cin>>N>>X;

    for(ll i = 0 ; i < N; i++)
        cin>>c[i];

    Combinations();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}