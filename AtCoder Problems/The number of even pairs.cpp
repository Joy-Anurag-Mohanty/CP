#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int N,M;
	cin>>N>>M;

	int e1 = N*(N-1)/2;
	int e2 = M*(M-1)/2;

	cout<<e1+e2<<endl;
}