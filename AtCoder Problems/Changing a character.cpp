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

	int N,K;
	cin>>N>>K;

	string S;
	cin>>S;

	int index = K - 1;

	S[index] = S[index] + 32;

	cout<<S<<endl;	

	return 0;
} 