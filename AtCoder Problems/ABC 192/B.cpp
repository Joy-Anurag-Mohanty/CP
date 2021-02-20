#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string S;
	cin>>S;

	bool flag = true;

	for(int i = 0 ; i < S.length(); i++)
	{
		if(i % 2 == 0)
		{
			//lowercase

			if(S[i] >= 97 && S[i] <= 122)
				continue;

			else
			{
				flag = false;
				break;
			}
		}

		else
		{
			//uppercase

			if(S[i] >= 65 && S[i] <= 90)
				continue;

			else
			{
				flag = false;
				break;
			}
		}
	}

	if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}