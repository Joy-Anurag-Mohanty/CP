#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printVector(vector<int>V)
{
	for(int v : V)
		cout<<v<<" ";
	cout<<endl;
}

int main()
{
	int N,K;
	cin>>N>>K;

	for(int i = 0; i < K; i++)
	{
		vector<int>digits;

		while(N > 0)
		{
			digits.push_back(N % 10);
			N /= 10;
		}

		sort(digits.begin(), digits.end());

		//printVector(digits);

		int num1 = 0, num2 = 0;

		for(int d : digits)
			num1 = num1*10 + d;

		sort(digits.begin(),digits.end(),greater<int>());

		//printVector(digits);
	
		for(int d : digits)
			num2 = num2*10 + d;

		N = num2 - num1;
	}

	cout<<N<<endl;
}