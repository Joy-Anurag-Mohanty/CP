#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve()
{
	
	int h,w,k;
	cin>>h>>w>>k;

	//cout<<h<<" "<<w<<" "<<k<<endl;

	int ans = 0;

	char mat[h][w];

	for(int i = 0;i<h;i++)
	{
		for(int j = 0;j<w;j++)
		{
			cin>>mat[i][j];
		}
	}

	// for(int i = 0;i<h;i++)
	// {
	// 	for(int j = 0;i<w;j++)
	// 	{
	// 		cout<<mat[i][j]<<" ";
	// 	}

	// 	cout<<endl;
	// }

	for(int maskr = 0;maskr <= (1<<h) - 1;maskr++)
	{
		for(int maskc = 0;maskc <= (1<<w) - 1;maskc++)
		{
			int black = 0;

			for(int i = 0;i<h;i++)
			{
				for(int j = 0;j<w;j++)
				{
					if((((maskr >> i) & 1) == 0) && (((maskc >> j) & 1) == 0) && mat[i][j] == '#')
					{
						black++;
					}
				}
			}

			if(black == k)
			{
				ans++;
			}
		}
	}

	cout<<ans<<endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
} 