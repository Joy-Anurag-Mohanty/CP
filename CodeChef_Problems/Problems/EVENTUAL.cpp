#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	int N;
	cin>>N;

	string S;
	cin>>S;

	unordered_map<char,int>mp;

	for(int i = 0;i<N;i++)
	{
		mp[S[i]]++;
	}

	int flag = 1;

	for(auto x : mp)
	{
		if(x.second % 2 != 0)
		{
			flag = 0;
			break;
		}
	}

	if(flag)
		cout<<"YES"<<endl;
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

	//int cs = 1;

	while(T--)
	{
		//cout<<cs<<" "<<endl;
		solve();
		//cs++;
	}

	return 0;
}