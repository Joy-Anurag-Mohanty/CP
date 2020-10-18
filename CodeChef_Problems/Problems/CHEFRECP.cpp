#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	// int cs = 1;

	while(T--)
	{
		int N;
		cin>>N;

		vector<int>V;

		for(int i = 0;i<N;i++)
		{
			int inp;
			cin>>inp;
			V.pb(inp);
		}

		vector<int> :: iterator it;

		vector<int>temp;

		for(int i = 0;i<N;i++)
			temp.pb(V[i]);

		it = unique(temp.begin(),temp.end());
		temp.resize(distance(temp.begin(),it));

		// for(int i = 0;i<temp.size();i++)
		// 	cout<<temp[i]<<" ";
		// cout<<endl;

		// cout<<"Case #"<<cs<<" ";

		set<int>S;

		for(int i = 0;i<N;i++)
			S.insert(V[i]);

		if(S.size() != temp.size())
			cout<<"NO";

		else
		{
			unordered_map<int,int>mp;

			for(int i = 0;i<N;i++)
				mp[V[i]]++;

			vector<int>A;

			for(auto x : mp)
				A.pb(x.second);

			// for(int i = 0;i<A.size();i++)
			// 	cout<<A[i]<<" ";

			sort(A.begin(),A.end());

			int flag = 1;

			for(int i = 1;i<A.size();i++)
			{
				if(A[i] == A[i-1])
				{
					flag = 0;
					break;
				}
			}

			if(flag)
				cout<<"YES";
			else
				cout<<"NO";

		}

		cout<<endl;

		// cs++;
	}

	return 0;
}