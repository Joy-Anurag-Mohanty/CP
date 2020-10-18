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
	
	ll A,B,N;
	cin>>A>>B>>N;

	ll m = A - 1,x;

	
	//looked at functions graph from desmos
	//max value oocurs at B-1;

	if(N >= B - 1)
	{
		x = B-1;
	}

	else
	{
		x = N;
	}

	ll res = floor(A*(x)/B) - A * floor((x)/B);

	cout<<res<<endl; 

	return 0;
}