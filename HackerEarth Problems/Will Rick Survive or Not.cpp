#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll MOD = 1e9+7;

int find_pow(int X,int Y)
{
	int res = 1;

	while(Y>0)
	{
		if(Y & 1)
			res = res * X;

		Y = Y >> 1;
		X = X * X;
	}

	return res;
}

void solve()
{
	ll N;
	cin>>N;

	vector<ll>V;

	for(ll i = 0; i < N; i++)
	{
		ll inp;
		cin>>inp;
		V.pb(inp);
	}

	sort(V.begin(),V.end());

	ll i = 0, j = 1,kills;
	int flag = 1;

	while(i < N)
	{
		if(V[i] - (j -1) < 1)
		{
			flag = 0;
			kills = i;
			break;

		}

		if(j % 7 != 0)
			i++;
		j++;
	}

	if(flag)
		cout<<"Rick now go and save Carl and Judas"<<endl;
	else
	{
		cout<<"Goodbye Rick"<<endl;
		cout<<kills<<endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
		solve();

	return 0;
}