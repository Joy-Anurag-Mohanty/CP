#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll H,W;
	cin>>H>>W;

	if(H == 1 || W == 1)
		cout<<1<<endl;

	else
		cout<<((H*W)+1)/2<<endl;

	return 0;
}