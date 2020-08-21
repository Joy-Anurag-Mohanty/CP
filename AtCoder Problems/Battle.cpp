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
	
	int A,B,C,D;
	cin>>A>>B>>C>>D;

	int flag = 1;


	while(C > 0)
	{
		C = C - B;

		if(C<=0)
		{
			flag = 1;
			break;
		}

		A = A - D;

		if(A <= 0)
		{
			flag = 0;
			break;
		}
	}

	if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}