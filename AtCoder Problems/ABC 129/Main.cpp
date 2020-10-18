#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int N,M;
const int MOD = 1e9+7;

void solve()
{
    vector<int>dp(N+1);
    vector<int>not_broken(N+1,true);

    for(int i  = 0; i < M; i++)
    {
        int stair;
        cin>>stair;
        not_broken[stair] = false;
    }

    dp[0] = 1, dp[1] = 1;

    for(int i = 2; i <= N; i++)
    {
        if(!not_broken[i])
            continue;

        if(not_broken[i-1] && not_broken[i-2])
            dp[i] = (dp[i-1] + dp[i-2])%MOD;

        else if(not_broken[i-1])
            dp[i] = dp[i-1] % MOD;

        else if(not_broken[i-2])
            dp[i] = dp[i-2] % MOD; 
    }

    cout<<dp[N] % MOD<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N>>M;
    solve();

    return 0;
}