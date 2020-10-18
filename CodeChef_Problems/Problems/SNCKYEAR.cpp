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

    for(int t=0;t<T;t++)
    {
    	int N; //year
    	cin>>N;

    	if(N==2010 || N==2015 || N==2016 || N==2017 || N==2019)
    		cout<<"HOSTED"<<endl;

    	else
    		cout<<"NOT HOSTED"<<endl;
    }

    return 0;
}