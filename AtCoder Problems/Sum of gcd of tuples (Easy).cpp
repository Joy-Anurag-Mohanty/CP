#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int K;
	cin>>K;

	int g1,res;
	ll sum = 0;

	for(int a = 1;a<=K;a++)
		for(int b = 1;b<=K;b++)
			for(int c = 1;c<=K;c++)
			{
				g1 = __gcd(a,b);
				res = __gcd(g1,c);
				sum += res;
			}


	cout<<sum<<endl;	

	return 0;
}