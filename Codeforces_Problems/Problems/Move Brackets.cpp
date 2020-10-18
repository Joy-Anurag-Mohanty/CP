#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	vector<char>st; //stack

	int close = 0; //number of closing brackets

	int n;
	cin>>n;

	string s;
	cin>>s;

	//cout<<s<<endl;

	for(int i = 0;i<n;i++)
	{
		if(s[i] =='(')
			st.push_back(s[i]);

		else if(s[i] ==')' && st.empty() == false)
			st.pop_back();

		else if(s[i] == ')' && st.empty() ==  true)
		{
			close++;
		}
	}

	cout<<close<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
	{
		solve();
	}

	return 0;
}