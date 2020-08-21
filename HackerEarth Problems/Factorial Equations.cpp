#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int find_pow(int X,int Y)
{
	int res = 1;

	while(Y>0)
	{
		if(Y & 1)
			res = res * X;

		Y = Y >> 1;
		X = X * X;
	}

	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll X,N;
	cin>>X>>N;

	int pow;

	if(N == 0 || N == 1)
		pow = 1;

	else if(N == 2)
		pow = 2;

	else if(N == 3)	
		pow = 6;

	else if(N == 4)
		pow = 4;

	else
		pow = 0;


	int dig = X % 10;

	ll res = find_pow(dig,pow);
	cout<<res % 10<<endl;

	return 0;
}