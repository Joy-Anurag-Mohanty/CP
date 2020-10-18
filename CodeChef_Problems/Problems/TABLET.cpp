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
    	long long N,B;
    	cin>>N>>B;

    	vector<long long>W;
    	vector<long long>H;
    	vector<long long>P;

    	for(long long i=0;i<N;i++)
    	{
    		long long w,h,p;
    		cin>>w>>h>>p;
    		W.push_back(w);
    		H.push_back(h);
    		P.push_back(p);
    	}

    	vector<long long>Area;

    	for(long long i=0;i<N;i++)
    	{
    		if(P[i]<=B)
    		{
    			Area.push_back(W[i]*H[i]);
    		}
    	}

    	sort(Area.begin(),Area.end());

    	if(Area.size() == 0)
    		cout<<"no tablet"<<endl;

    	else
    		cout<<Area.back()<<endl;
    }

    return 0;
}