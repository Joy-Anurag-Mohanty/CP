#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int cnt[100000+7] = {};
int N,Q;

void solve()
{
	cin>>N;

	ll sum = 0;

	for(int i = 0;i<N;i++)
	{
		int inp;
		cin>>inp;
		sum += inp;
		cnt[inp]++;
	}

	cin>>Q;

	while(Q--)
	{
		int B,C;
		cin>>B>>C;

		sum = sum + (C-B)*cnt[B];
		cnt[C] += cnt[B];
		cnt[B] = 0;

		cout<<sum<<endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
} 