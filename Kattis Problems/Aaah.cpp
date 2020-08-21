#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	string A,B;
	cin>>A;
	cin>>B;

	if(A.length()>=B.length())
		cout<<"go"<<endl;
	else
		cout<<"no"<<endl;
	
	return 0;
}