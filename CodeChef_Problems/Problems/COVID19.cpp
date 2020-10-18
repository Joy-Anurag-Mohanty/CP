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
		int N;
		cin>>N;

		vector<int>X;

		int x;

		for(int i = 0;i<N;i++)
		{
			cin>>x;
			X.push_back(x);;
		}

		vector<int>D; //distance b/w the people

		for(int i = 0;i<N-1;i++)
		{
			D.push_back(X[i+1] - X[i]);
		}

		// for(int i = 0;i<D.size();i++)
		// 	cout<<D[i]<<" ";
		// cout<<endl;

		int count = 1;

		vector<int>V;

		for(int i = 0;i<D.size();i++)
		{
			if(D[i] <= 2)
				count++;

			else
			{
				V.push_back(count);
				count = 1;
			}
		}

		V.push_back(count);

		// cout<<V.size()<<endl;

		// for(int i = 0;i<V.size();i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;

		cout<<*min_element(V.begin(),V.end())<<" "<<*max_element(V.begin(),V.end())<<endl;
	}

	return 0;
}