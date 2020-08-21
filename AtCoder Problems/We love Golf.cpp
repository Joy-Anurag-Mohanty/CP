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
	
	int K,A,B;
	cin>>K;
	cin>>A>>B;

	int flag = 0;

	for(int i = A;i<=B;i++)
	{
		if(i % K == 0)
		{
			flag = 1;
			break;
		}
	}

	if(flag)
		cout<<"OK"<<endl;
	else
		cout<<"NG"<<endl;

	return 0;
}