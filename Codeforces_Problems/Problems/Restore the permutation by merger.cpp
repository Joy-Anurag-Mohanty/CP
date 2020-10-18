#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	int n,inp;
	cin>>n;

	int visited[100] = {0};

	for(int i = 0;i<2*n;i++)
	{
		cin>>inp;

		if(visited[inp] == 0)
		{
			cout<<inp<<" ";
			visited[inp]++;
		}

		else
			continue;
	}

	cout<<endl;
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
	{
		solve();
	}

	return 0;
}