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

	int N,D;
	cin>>N>>D;

	int cover = D*2 + 1;

	int count = 0;

	while(N - cover >= 0)
	{
		count++;
		N = N - cover;
		//cout<<N<<endl;
	}

	if(N != 0)
		cout<<count + 1<<endl;

	else
		cout<<count<<endl;

	return 0;
}