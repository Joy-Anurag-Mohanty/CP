#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	string str;
	cin>>str;

	char a = str[2];
	char b = str[3];

	char c = str[4];
	char d = str[5];

	if(a == b && c == d)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}