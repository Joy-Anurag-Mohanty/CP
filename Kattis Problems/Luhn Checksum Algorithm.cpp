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
		string num;
		cin>>num;

		vector<int>V;

		for(ll i = 0;i<num.length();i++)
		{
			int n = (int)(num[i] - '0');
			V.push_back(n);
		}

		reverse(V.begin(),V.end());

		ll check_sum = 0;

		ll d,temp;

		for(ll i = 0;i<V.size();i++)
		{
			if(i % 2 != 0)
			{

				d = V[i]*2;

				if(d>9)
				{
					ll dig_sum = 0;
					while(d!=0)
					{
						temp = d%10;
						dig_sum += temp;
						d /= 10;
					}

					check_sum += dig_sum;
				}

				else
					check_sum += d;
			}

			else
				check_sum += V[i];
		}

		if(check_sum % 10 == 0)
			cout<<"PASS"<<endl;
		else
			cout<<"FAIL"<<endl;
	}

	return 0;
}