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
		int a,b;
		cin>>a>>b;

		int ar = a * b;
		int n = 2 * ar;

		int a1 = a*a;
		int b1 = b*b;

		int a2 = 4 * a * a;
		int b2 = 4 * b * b;

		vector<int>V;

		V.pb(a1);
		V.pb(b1);
		V.pb(a2);
		V.pb(b2);

		sort(V.begin(),V.end());

		// cout<<n<<" ";

		int res;
		
		for(int i = 0;i<V.size();i++)
			if(V[i] >= n)
			{
				res = V[i];
				break;
			}

		cout<<res<<endl;

		// for(int i = 0;i<V.size();i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;

	}

	return 0;

}