#include<bits/stdc++.h>
using namespace std;
#define ll long long 

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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;

		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;

		x = x - a + b;
		y = y -  c + d;

		if(x >= x1 && x <= x2 && y >= y1 && y <= y2 && (x1 < x2 || a+b == 0) && (y1 < y2 || c+d == 0))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;	

		

	}

	return 0;
}