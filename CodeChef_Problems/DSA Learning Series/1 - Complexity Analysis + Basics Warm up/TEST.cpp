#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	bool flag = true;

	while(flag)
	{
		int inp;
		cin>>inp;

		if(inp == 42)
			flag = false;

		else
			cout<<inp<<endl;
	}
}