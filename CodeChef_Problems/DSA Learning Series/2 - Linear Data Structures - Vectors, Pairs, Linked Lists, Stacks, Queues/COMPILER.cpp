#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

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
		string S;
		cin>>S;

		vector<char>V; //stack

		int len = 0;

		for(int i = 0;i<S.length();i++)
		{
			if(S[i] == '<')
				V.pb(S[i]);

			else if(S[i] == '>')
			{
				if(V.empty())
					break;

				V.pop_back();

				if(V.empty())
					len = i + 1;
			}
		}

		cout<<len<<endl;

	}

	return 0;
		
}