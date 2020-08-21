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
		int N,M;
		cin>>N>>M;

		if((N*M)%2 != 0)
		{
			for(int i = 0;i<N;i++)
			{
				for(int j = 0;j<M;j++)
				{
					if((i+j) % 2 == 0)
						cout<<'B';
					else
						cout<<'W';
				}
				cout<<endl;
			}
		}

		else
		{
			for(int i = 0;i<N-1;i++)
			{
				for(int j = 0;j<M;j++)
				{
					if((i+j) % 2 == 0)
						cout<<'B';
					else
						cout<<'W';
				}
				cout<<endl;
			}

			if(N%2 != 0)
			{
				for(int i = 0;i<M-2;i++)
				{
					if(i%2 == 0)
						cout<<'B';
					else
						cout<<'W';
				}

				cout<<'B'<<'B'<<endl;
			}

			else
			{
				for(int i = 0;i<M-2;i++)
				{
					if(i%2 == 0)
						cout<<'W';
					else
						cout<<'B';
				}

				cout<<'B'<<'B'<<endl;
			}
		}
	}	

	return 0;
}