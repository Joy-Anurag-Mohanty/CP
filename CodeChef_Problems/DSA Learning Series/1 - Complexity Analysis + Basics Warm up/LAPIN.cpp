#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
		string S;
		cin>>S;

		int len = S.length();

		string S1,S2;
		S1 = "";
		S2 = "";

		for(int i = 0;i<len/2;i++)
			S1 = S1 + S[i];

		if(len%2 == 0)
			for(int i = len/2;i<len;i++)
				S2 = S2 + S[i];

		else
			for(int i = len/2 + 1;i<len;i++)
				S2 = S2 + S[i];

		//cout<<S<<" "<<S1<<" "<<S2<<endl;

		unordered_map<char,int>mp1;
		unordered_map<char,int>mp2;

		for(int i = 0;i<S1.length();i++)
		{
			mp1[S1[i]]++;
			mp2[S2[i]]++;
		}

		char ch;

		int flag = 0;		

		for(int i = 0;i<S1.size();i++)
		{
			ch = S1[i];
			if(mp1[ch] == mp2[ch])
			{
				flag = 1;
			}

			else
			{
				flag = 0;
				break;
			}
		}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	return 0;
}