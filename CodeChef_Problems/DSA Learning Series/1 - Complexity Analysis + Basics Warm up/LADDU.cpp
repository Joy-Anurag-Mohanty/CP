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
		ll N; //number of activities
		string Origin; //Indian or not;

		cin>>N>>Origin;

		//cout<<N<<" "<<Origin<<endl;

		ll laddus = 0;

		string activity;
		ll rank; //for contests
		ll severity; //for bugs

		while(N--)
		{
			cin>>activity;

			if(activity == "CONTEST_WON")
			{
				//cout<<"In contest won"<<endl;
				cin>>rank;

				ll bonus = 20 - rank;
				//cout<<bonus<<endl;

				if(bonus > 0)
					laddus += 300 + bonus;
				else
					laddus += 300;

				//cout<<laddus<<endl;
			}

			else if(activity == "TOP_CONTRIBUTOR")
			{
				//cout<<"In top TOP_CONTRIBUTOR"<<endl;
				laddus += 300;
				//cout<<laddus<<endl;
			}

			else if(activity == "BUG_FOUND")
			{
				cin>>severity;
				//cout<<"In BUG_FOUND"<<endl;
				laddus += severity;
				//cout<<laddus<<endl;
			}

			else
			{
				//cout<<"In contest hosted"<<endl;
				laddus += 50;
				//cout<<laddus<<endl;
			}
		}

		//cout<<laddus<<endl;

		if(Origin == "INDIAN")
			cout<<laddus/200<<endl;
		else
			cout<<laddus/400<<endl;

	}

	return 0;
}