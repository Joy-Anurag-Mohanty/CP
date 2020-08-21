#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
void solve()
{
	string seq;
	cin>>seq;
 
	int max_so_far = 1, curr_max = 1;
 
	for(int i = 0; i <seq.length() - 1; i++)
	{
		if(seq[i] == seq[i+1])
			curr_max++;
 
		else
		{
			max_so_far = max(max_so_far,curr_max);
			curr_max = 1;
		}
	}
 
	max_so_far = max(max_so_far,curr_max);
 
	cout<<max_so_far;
 
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

