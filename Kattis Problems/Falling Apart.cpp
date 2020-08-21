#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int A = 0, B = 0;

	vector<int>V;

	int N;
	cin>>N;


	int inp;

	for(int i = 0;i<N;i++)
	{
		cin>>inp;
		V.push_back(inp);
	}

	sort(V.rbegin(),V.rend());

	for(int i = 0;i<N;i++)
	{
		if(i % 2 == 0)
			A += V[i];
		else
			B += V[i];
	}

	cout<<A<<" "<<B<<endl;

	return 0;
}