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

	int S,W;
	cin>>S>>W;

	if(W>=S)
		cout<<"unsafe"<<endl;
	else
		cout<<"safe"<<endl;

	return 0;
}