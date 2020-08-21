#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int K,N;
	cin>>K>>N;

	K = K - 1; //indices from 0 to 7 (1 to 8)

	int time = 0; //terminate if greater than or equal to 210

	int T;
	char C;

	while(N--)
	{
		cin>>T>>C;

		time = time + T;

		if(time >= 210)
			break;

		if(C == 'T')
		{
			K = (K+1)%8;
		}
	}

	cout<<K+1<<endl;

	return 0;
}