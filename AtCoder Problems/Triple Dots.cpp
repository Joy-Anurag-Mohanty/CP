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

	int K;
	string S;

	cin>>K;
	cin>>S;

	if(S.length() <= K)
		cout<<S<<endl;

	else
	{
		string res = "";

		for(int i = 0;i<K;i++)
			res = res + S[i];

		res = res + "...";

		cout<<res<<endl;
	}

	return 0;
}