#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
    	int N;
    	cin>>N;

    	vector<int>P;
    	vector<int>S;

    	for(int i = 0;i<N;i++)
    	{
    		int p,s;
    		cin>>p>>s;
    		P.push_back(p);
    		S.push_back(s);
    	}

    	unordered_map<int,int>mp;

    	for(int i = 0;i<N;i++)
    	{
    		mp[P[i]] = 0;
    	}

    	for(int i = 0;i<N;i++)
    	{
    		if(mp[P[i]]<S[i])
    			mp[P[i]] = S[i];
    	}

    	//for(auto x: mp)
    		//cout<<x.first<<" "<<x.second<<endl;

    	int sum = 0;

    	for(auto x: mp)
    	{
    		if(x.first < 9)
    			sum += x.second;
    	}

    	cout<<sum<<endl;
    }

    return 0;
}  