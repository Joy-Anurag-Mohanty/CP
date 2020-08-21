#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	
	ll T;
	cin>>T;

	while(T--)
	{
		ll N;
		cin>>N;

		int A[N+1],B[N+1];

		ll A_sum = 0,B_sum = 0;

		for(ll i = 0;i<N;i++)
		{
			cin>>A[i];
		}


		for(ll i = 0;i<N;i++)
		{
			cin>>B[i];
		}
		
		bool flag1 = false, flag2 = false, flag = true;

		for(ll i = 0;i<N;i++)
		{
			if(B[i] > A[i] && flag1 == false)
			{
				flag = false;
				break;
			}

			else if(B[i] < A[i] && flag2 == false)
			{
				flag = false;
				break;
			}

			if(A[i] == 1)
				flag1 = true;
			else if(A[i] == -1)
				flag2 = true;
		}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;		

	}

	return 0;
}