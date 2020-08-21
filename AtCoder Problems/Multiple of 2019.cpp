#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MOD = 2019;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	string s;
	cin>>s;

	int n = s.length();

	int suf = 0; 
	int power_of_ten = 1;

	vector<int>cnt_suf(MOD);

	ll ans = 0;
	cnt_suf[suf]++; //emopty suffixes

	for(int i = n - 1;i>=0;i--)
	{
		int digit = s[i] - '0';

		suf = (suf + digit * power_of_ten) % MOD;

		power_of_ten = 10 * power_of_ten % MOD;

		ans += cnt_suf[suf];
		cnt_suf[suf]++;
	}

	cout<<ans<<endl;

	return 0;
}