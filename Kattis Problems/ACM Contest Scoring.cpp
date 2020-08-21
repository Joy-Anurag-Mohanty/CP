#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int m;
	char c;
	string S;

	int count = 0; //number of questions solved
	int score = 0; //time score

	vector<char>V; //store the wrong question char

	cin>>m;

	while(m != -1)
	{
		cin>>c>>S;

		if(S == "right")
		{
			count++;

			//check if it was previously solved wrong

			int occurence = 0;	

			for(int i = 0;i<V.size();i++)
			{
				if(V[i] == c)
					occurence++;
			}

			score = score + m + occurence*20;
		}

		else
			V.push_back(c);


		cin>>m;
	}

	cout<<count<<" "<<score<<endl;
	
	return 0;
}