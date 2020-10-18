 #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
     
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
    		ll a,b;
            cin>>a>>b;
 
            if(b-a>0)
                cout<<b-a<<endl;
 
            else if(a % b == 0)
                cout<<0<<endl;
 
            else
            {
                ll Q = a/b;
                Q++;
                cout<<b*Q - a<<endl;
            }
 
    	}
     
    	return 0;
    }