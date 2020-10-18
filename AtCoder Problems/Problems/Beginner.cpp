#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	
	int N,R;

	cin>>N>>R;

	if(N>=10)
		cout<<R<<endl;

	else
		cout<<100*(10-N) + R<<endl;
	
}