#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const ll MOD = 1e9 + 7;

ll N,M,K,inp,cnt = 0;
vector<ll>A,X;

void print(vector<ll>V)
{
	for(ll i = 0; i < V.size(); i++)
		cout<<V[i]<<" ";
	cout<<endl;
}

ll countApplicants()
{
	for(ll i = 0,j = 0; i < N; i++)
	{
		while(j < M && X[j] < A[i] - K)
			j++;

		if(j < M && X[j] <= A[i] + K)
		{
			cnt++;
			j++;
		}
	}

	return cnt;
}

void solve()
{
	cin>>N>>M>>K;

	for(ll i = 0; i < N; i++)
	{
		cin>>inp;
		A.pb(inp);
	}

	sort(A.begin(),A.end());

	for(ll i = 0; i < M; i++)
	{
		cin>>inp;
		X.pb(inp);
	}

	sort(X.begin(),X.end());

	// print(A);
	// print(X);

	cout<<countApplicants()<<endl;

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