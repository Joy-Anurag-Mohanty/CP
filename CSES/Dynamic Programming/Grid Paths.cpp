#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

 	int N;
 	cin>>N;

 	vector<string>mat(N);

 	for(int i = 0; i < N; i++)
 		cin>>mat[i];

 	vector<vector<int>>dp(N, vector<int>(N,0));

 	dp[0][0] = 1; //number of paths to reach (0,0) is 1

 	for(int i = 0; i < N; i++)
 	{
 		for(int j = 0; j < N; j++)
 		{
 			if(mat[i][j] == '.')
 			{
 				if(i > 0)
 					dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;

 				if(j > 0)
 					dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
 			}

 			else
 				dp[i][j] = 0;
 		}
 	}

 	cout<<dp[N - 1][N - 1]<<endl;

    return 0;
}