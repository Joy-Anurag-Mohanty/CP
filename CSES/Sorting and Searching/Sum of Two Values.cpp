#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const ll MOD = 1e9 + 7;

vector<ll>V,temp;
ll N,K,inp;

void solve()
{
	cin>>N>>K;

	for(ll i = 0;i < N; i++)
	{
		cin>>inp;
		V.pb(inp);
		temp.pb(inp);
	}

	int flag = 0;

	sort(V.begin(),V.end());

	ll start = 0, end = N - 1;

	while(start < end)
	{
		if(V[start] + V[end] == K)
		{
			flag = 1;
			break;
		}

		else if(V[start] + V[end] > K)
			end--;

		else
			start++;
	}

	if(flag)
	{
		ll num1 = V[start], num2 = V[end];

		ll vis_index;

		for(ll i = 0; i < N; i++)
		{
			if(num1 == temp[i])
			{
				vis_index = i;
				cout<<i + 1<<" ";
				break;
			}
		}

		for(ll i = 0; i < N; i++)
		{
			if(num2 == temp[i] && i != vis_index)
			{
				cout<<i + 1<<" "<<endl;
				break;
			}
		}
	}

	else
		cout<<"IMPOSSIBLE"<<endl;
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