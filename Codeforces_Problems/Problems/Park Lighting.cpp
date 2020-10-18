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

	while(T--)
	{
		int n,m;
		cin>>n>>m;

		int squares = n*m;

		if(squares %  2 == 0)
			cout<<squares/2<<endl;

		else
		{
			cout<<squares/2 + 1<<endl;
		}
	}

	return 0;

}