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

	string S,T;
	cin>>S>>T;

	if(T == S + T[T.length()-1])
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	
	return 0;
}