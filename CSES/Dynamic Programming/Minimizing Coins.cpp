#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int MOD = 1e9 + 7, mxN = 1e6, mxX = 1e6;
ll INF = 1e9;

ll dp[mxX + 1];

int min(int a,int b)
{
    if(a > b)
        return b;
    else
        return a;
}

void solve()
{
    ll N,X;
    cin>>N>>X;

    vector<ll>C;

    for(ll i = 0; i < N; i++)
    {
        ll inp;
        cin>>inp;
        C.pb(inp);
    }

    for(ll i = 1; i <= X; i++)
    {
        dp[i] = INF;

        for(ll j = 0; j < N; j++)
        {
            if(C[j] <= i)
            {
                dp[i] = min(dp[i], dp[i - C[j]] + 1) % MOD;
            }
        }
    }

    if(dp[X] >= INF)
    {
        cout<<-1<<endl;
        return;
    }

    cout<<dp[X]<<endl;

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	solve();

	return 0;
}