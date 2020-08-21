#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int MOD = 1e9 + 7, mxN = 1e6;
ll dp[mxN];

int min(int a,int b)
{
    if(a > b)
        return b;
    else
        return a;
}

void solve()
{
	ll N;
	cin>>N;

	dp[0] = 1;

    for(ll i = 1; i <= N; i++)
    {
        for(ll j = 1; j <= min(6,i); j++)
        {
            dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    }


    cout<<dp[N]<<endl;
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