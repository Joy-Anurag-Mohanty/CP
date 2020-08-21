#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int K,N;
	cin>>K>>N;

	vector<int>V;

	for(int i = 0;i<N;i++)
	{
		int inp;
		cin>>inp;
		V.push_back(inp);
	}

	sort(V.begin(),V.end());

	int MAX = K - V[N-1] + V[0]; //finding distance between last and first segment

	for(int i = 0;i<N-1;i++)
		MAX = max(MAX,V[i+1] - V[i]); //finding the segment to be skipped because atmost 1 segment is skipped

	cout<<K - MAX<<endl;

	return 0;
}