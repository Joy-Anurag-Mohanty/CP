#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

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

		string S;
		cin>>S;

		int index = 0;

		int sA = 0;
		int sB = 0; //score of A and B

		int rA = N;
		int rB = N; //remaining shots of A and B

		while(rA > 0 || rB > 0)
		{
			if(index % 2 == 0)
			{
				if(S[index] == '1')
				{
					sA++;
				}

				rA--;
			}

			else
			{
				if(S[index] == '1')
				{
					sB++;
				}

				rB--;
			}

			index++;

			if(sA > sB && sA - sB > rB)
				break;

			else if(sB > sA && sB - sA > rA)
				break;

			else
				continue;
		}

		cout<<index<<endl;

	}

	return 0;
}