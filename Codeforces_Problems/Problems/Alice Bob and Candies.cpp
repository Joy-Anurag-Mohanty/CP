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
		int N;
		cin>>N;

		vector<int>A;

		int ai;

		for(int i = 0;i<N;i++)
		{
			cin>>ai;
			A.pb(ai);
		}

		int ptr1 = 0;
		int ptr2 = N-1;

		int count = 0; //total number of moves
		int a = 0, b = 0; //total number of candies eaten by alice and bob

		int prev_a = 0,prev_b = 0; //number of candies eaten by alice and bob in previous move

		while(ptr1 <= ptr2)
		{
			if(count % 2 == 0)
			{
				int temp_a = 0; //number of candies ate by alice in this move

				while(ptr1 <= ptr2 && temp_a <= prev_b)
				{
					temp_a += A[ptr1++];
				}

				a += temp_a;
				prev_a = temp_a;
			}

			else
			{
				int temp_b = 0; //number of candies eaten by bob in this move

				while(ptr1 <= ptr2 && temp_b <= prev_a)
				{
					temp_b += A[ptr2--];
				}

				b += temp_b;
				prev_b = temp_b;
			}

			count++;
		}

		cout<<count<<" "<<a<<" "<<b<<endl;
	}

	return 0;

}