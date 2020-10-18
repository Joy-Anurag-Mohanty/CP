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

	int T;
	cin>>T;

	while(T--)
	{
		int N;
		cin>>N;

		int M[N][N];

		int s = 1;

		for(int i = 0;i<N;i++)
		{
			if(i % 2 == 0)
			{
				for(int j = 0;j<N;j++)
				{
					M[i][j] = s;
					s++;
				}
			}

			else
			{
				for(int j = N-1;j>=0;j--)
				{
					M[i][j] = s;
					s++;
				}
			}
		}

		for(int i = 0;i<N;i++)
		{
			for(int j = 0;j<N;j++)
			{
				cout<<M[i][j]<<" ";
			}

			cout<<endl;
		}
	}	

	return 0;
}