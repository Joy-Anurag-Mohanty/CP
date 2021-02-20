	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long

	int main()
	{
		int X;
		cin>>X;

		if(X % 100 != 0)
		{
			int rem = X % 100;
			cout<<100 - rem<<endl;
		}

		else
			cout<<100<<endl;
	}