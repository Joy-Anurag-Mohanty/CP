#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll N;
	cin>>N;

	ll sum1 = 0;

	for(int i = 1;i<=N;i++)
	{
		if(i%3 != 0 && i % 5 != 0)
			sum1 += i;
	}

	cout<<sum1<<endl;

	return 0;
}