#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	int N;
	cin>>N;

	vector<int>V;

	int inp;

	for(int i = 0;i<N;i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	int flag = 1;

	vector<int>V1,V2;

	unordered_map<int,int>mp;

	for(int i = 0;i<N;i++)
	{
		mp[V[i]]++;

		if(mp[V[i]] == 1)
			V1.pb(V[i]);

		else if(mp[V[i]] == 2)
			V2.pb(V[i]);

		else
		{
			flag = 0;
			break;
		}
	}

	if(flag)
	{

		sort(V1.begin(),V1.end());
		sort(V2.begin(),V2.end(),greater<int>());

		//concatenate both vectors

		vector<int>A;

		for(int i = 0;i<V1.size();i++)
			A.pb(V1[i]);
		for(int i = 0;i<V2.size();i++)
			A.pb(V2[i]);


		int p = V1.size();
		int pc = N - V1.size() + 1;

		int start = A.size() - pc;

		int ok = 1;

		for(int i = start;i<A.size()-1;i++)
		{
			if(A[i] == A[i+1])
			{
				ok = 0;
				break;
			}
		}

		if(ok)
		{
			cout<<"YES"<<endl;
			
			for(int i = 0;i<A.size();i++)
				cout<<A[i]<<" ";
			cout<<endl;
		}

		else
			cout<<"NO"<<endl;
	}

	else 
		cout<<"NO"<<endl;
	
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