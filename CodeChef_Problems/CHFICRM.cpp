#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

#define MAX 100001

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
		int N;
		cin>>N; //number of customers

		int coin5 = 0; //number of Rs 5 coins
		int coin10 = 0; //number of Rs 10 coins

		int flag = 1;

		vector<int>pays; //vector of amounts paid by each customer

		for(int i = 0;i<N;i++)
		{
			int inp;
			cin>>inp;
			pays.pb(inp);
		}
 
		for(int i = 0;i<N;i++)
		{

			if(pays[i] == 5)
			{
				coin5++;
			}

			else if(pays[i] == 10)
			{
				if(coin5 > 0)
				{
					coin5--;
					coin10++;
				}

				else
				{
					flag = 0;
					break;
				}
			}

			else
			{
				if(coin10 > 0)
				{
					coin10--;
				}

				else if(coin5 > 1)
				{
					coin5 -= 2;
				}

				else
				{
					flag = 0;
					break;
				}	
			}
		}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}