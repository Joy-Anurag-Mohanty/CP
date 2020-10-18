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
		ll N;
		cin>>N;

		ll div = N / 2;

		if(div % 2 == 0)
		{
			ll arr[N];

			ll H1 = 2;

			ll esum = 0;

			for(int i = 0;i<div;i++)
			{
				arr[i] = H1;
				esum = esum + H1;
				H1 = H1 + 2;
			}

			// for(int i = 0;i<div;i++)
			// {
			// 	cout<<arr[i]<<" ";
			// }
			// cout<<endl;

			// cout<<esum<<endl;

			ll H2 = 1;

			ll osum = 0;

			for(ll i = div;i<N-1;i++)
			{
				arr[i] = H2;
				osum = osum + H2;
				H2 = H2 + 2;
			}

			// cout<<osum<<endl;

			arr[N-1] = esum - osum;

			cout<<"YES"<<endl;

			for(int i = 0;i<N;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}

		else
		{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}