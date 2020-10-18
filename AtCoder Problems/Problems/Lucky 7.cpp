#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int N;
	cin>>N;

	int flag = 0,temp;

	while(N!=0)
	{
		temp = N % 10;

		if(temp == 7)
		{
			flag = 1;
			break;
		}

		N = N/10;
	}

	if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}