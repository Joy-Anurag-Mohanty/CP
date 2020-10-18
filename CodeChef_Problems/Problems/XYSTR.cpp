#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

#define MAX 100001

bool check[MAX];

void init()
{
	for(int i= 0;i<MAX;i++)
		check[i] = 0;
}

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
		init();

		string S;
		cin>>S;

		int N = S.length();

		int pair = 0;

		for(int i = 0;i<N-1;i++)
		{
			if(S[i] == 'x' && S[i+1] == 'y' && check[i] == 0)
			{
				pair++;
				check[i] = 1;
				check[i+1] = 1;
			}

			else if(S[i] == 'y' && S[i+1] == 'x' && check[i] == 0)
			{
				pair++;
				check[i] = 1;
				check[i+1] = 1;
			}
		}

		cout<<pair<<endl;

	}

	return 0;
}