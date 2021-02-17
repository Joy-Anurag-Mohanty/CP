#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9 + 7;
vector<int>coins;


/*

base dp[0][0] = 1

dp(i,x) -> having a sum of x with first i coins

dp(i,x) = dp(i, x - coins[i]) [As we can pick coin again] OR dp(i - 1,x) 

*/

int solve(int N, int X)
{
	vector<vector<int>>dp(N + 1, vector<int>(X + 1, 0));

	dp[0][0] = 1;

	for(int i = 1; i <= N; i++)
	{
		for(int j = 0; j <= X; j++)
		{
			dp[i][j] = dp[i - 1][j];

			if(j - coins[i - 1] >= 0)
				(dp[i][j] += dp[i][j - coins[i - 1]]) %= MOD;
		}
	}

	return dp[N][X];
}

int main()
{
	int N,X;
	cin>>N>>X;

	for(int i = 0; i < N; i++)
	{
		int inp;
		cin>>inp;
		coins.push_back(inp);
	}

	int res = solve(N, X);

	cout<<res<<endl;

	return 0;
}