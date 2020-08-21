#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int a,b;
	cin>>a>>b;

	string A = "",B = "";

	string c = to_string(a);
	string d = to_string(b);

	for(int i = 0;i<a;i++)
		A = A + d;
	for(int i = 0;i<b;i++)
		B = B + c;


	vector<char>P,Q;

	for(int i = 0;i<A.length();i++)
		P.push_back(A[i]);

	for(int i = 0;i<B.length();i++)
		Q.push_back(B[i]);

	if(lexicographical_compare(P.begin(),P.end(),Q.begin(),Q.end()))
		cout<<A<<endl;

	else
		cout<<B<<endl;

	return 0;
}