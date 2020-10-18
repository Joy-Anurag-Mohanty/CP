#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

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
		/*

		A = [1 2 3 4 8 12 0 -3 -4 -2]
		B = [1 2 1 4 4 4 4 1 4 2] -> convert multiple of 4 into 4 
		C = [0 1 0 2 2 2 2 0 2 1] -> take log base 2 to find power of 2
 
		find number of subarrays with sum = 1 (X)
		and then subtract them from the total number of subarrays = N*(N+1)/2 - X 

		*/

		ll N;
		cin>>N;

		vector<ll>A,C;

		ll inp;

		for(ll i = 0;i<N;i++)
		{
			cin>>inp;
			A.pb(inp);
		}

		for(ll i = 0;i<N;i++)
		{
			if(A[i] % 4 == 0)
				C.pb(2);

			else if(A[i] % 2 == 0)
				C.pb(1);

			else 
				C.pb(0);
		}

		ll S = (N*(N+1))/2;

		unordered_map<ll,ll>prevSum;

		ll currSum = 0,res = 0;
		ll sum = 1;

		for(ll i = 0;i<N;i++)
		{
			currSum += C[i];

			if(currSum == sum)
				res++;

			if(prevSum.find(currSum - sum) != prevSum.end())
				res += (prevSum[currSum - sum]);

			prevSum[currSum]++;
		}

		cout<<S-res<<endl;
	}	

	return 0;
}