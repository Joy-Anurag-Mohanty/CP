#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
#define MOD 1000000007;
 
void solve()
{
	string S;
	cin>>S;
 
	sort(S.begin(),S.end());
 
	string temp = S;
 
	vector<string>V;
 
	//cout<<S<<endl;
 
	while(next_permutation(S.begin(),S.end()))
	{
		V.pb(S);
	}
 
	cout<<V.size() + 1<<endl;
 
	cout<<temp<<endl;
 
	for(int i = 0;i<V.size();i++)
		cout<<V[i]<<endl;
 
}
 
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);
 
 
	solve();
 
	return 0;
}

