#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int N,M;

	cin>>N>>M;

	if(N==M)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}