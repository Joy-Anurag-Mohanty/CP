#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	int N;
	cin>>N;

	vector<ll>V;

	for(int i = 0; i < N; i++)
	{
		ll inp;
		cin>>inp;
		V.pb(inp);
	}

	int count = 0;

	for(int i = 0; i < N ; i++)
	{
		for(int j = i + 1; j < N ; j++)
		{
			for(int k = j + 1; k < N ; k++)
			{
				if(V[i] + V[j] > V[k] && V[i] + V[k] > V[j] && V[k] + V[j] > V[i] && (V[i] != V[j]) && (V[k] != V[j]) && (V[k] != V[i])) 
				{
					//cout<<V[i]<<" "<<V[j]<<" "<<V[k]<<endl;
					count++;
				}
			}
		}
	}

	cout<<count<<endl;
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