    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
     
    	freopen("Input.txt","r",stdin);
    	freopen("Output.txt","w",stdout);
     
    	
    	ll T;
    	cin>>T;
     
    	while(T--)
    	{
    		ll N;
    		cin>>N;
     
    		N = N - 1;
     
    		cout<<N/2<<endl;
    	}
     
    	return 0;
    }