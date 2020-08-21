#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
    	long N; //N8N chessboard
    	cin>>N;

    	int i,count=0;

    	for(i=1;i<=N;i=i+2)
    	{
    		count += pow((N-i+1),2);
    	}

    	cout<<count<<endl;
    }
    return 0;
}