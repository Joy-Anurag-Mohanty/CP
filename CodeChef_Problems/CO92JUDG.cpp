#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

	int T; //test cases
	cin>>T;

	while(T--)
	{
		int N; //length of vector
		cin>>N;

		vector<int>A; //Alice
		vector<int>B; //Bob

		for(int i=0;i<N;i++)
		{
			int inp;
			cin>>inp;
			A.push_back(inp);
		}

		for(int i=0;i<N;i++)
		{
			int inp;
			cin>>inp;
			B.push_back(inp);
		}

		int A_sum = 0;
		int B_sum = 0;

		sort(A.begin(),A.end());
		sort(B.begin(),B.end());

		A.pop_back();
		B.pop_back();

		A_sum = accumulate(A.begin(),A.end(),0);
		B_sum = accumulate(B.begin(),B.end(),0);
		
		if(A_sum>B_sum)
			cout<<"Bob"<<endl;

		else if(B_sum>A_sum)
			cout<<"Alice"<<endl;

		else
			cout<<"Draw"<<endl;
	}
}