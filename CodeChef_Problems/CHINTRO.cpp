#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int N,R;

    cin>>N>>R;

    vector<int>r;

    vector<string>v;

    for(int i=0;i<N;i++)
    {
    	int inp;
    	cin>>inp;
    	r.push_back(inp);
    }

    for(int i=0;i<N;i++)
    {
    	if(r[i]>=R)
    	{
    		v.push_back("Good boi");
    	}

    	else
    	{
    		v.push_back("Bad boi");
    	}
    }

    for(int i=0;i<N;i++)
    {
    	cout<<v[i]<<endl;
    }


    return 0;
}