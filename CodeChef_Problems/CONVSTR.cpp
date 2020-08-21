#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve(string A,string B,int N)
{
	vector<vector<int>>res;

	for(int i = 0;i<N;i++)
	{
		if(A[i] < B[i])
		{
			cout<<-1<<endl;
			return;
		}
	}

	for(char ch = 'z' ; ch >= 'a'; ch--)
	{
		vector<int>pos;

		bool flag = false;

		for(int i = 0;i<N;i++)
		{
			if(B[i] ==  ch && A[i] != ch)
			{
				pos.pb(i);
			}
		}

		if(!flag  && !pos.empty()	)
		{
			for(int i = 0;i<N;i++)
			{
				if(A[i] == ch)
				{
					flag = true;
					pos.pb(i);
				}
			}
		}

		if(!flag && !pos.empty())
		{
			cout<<-1<<endl;
			return;
		}

		if(!pos.empty())
			res.pb(pos);

		for(int i : pos)
			A[i] = ch;
	}

		

	cout<<res.size()<<endl;

	for(auto i : res)
	{
		cout<<i.size()<<" ";

		for(int j : i)
			cout<<j<<" ";
			
		cout<<endl;	
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
	{

		vector<vector<int>>res;

		int N;
		cin>>N;

		string A,B;
		cin>>A;
		cin>>B;

		solve(A,B,N);
	}	

	return 0;
}