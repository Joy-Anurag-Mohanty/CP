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
    	ll N;
    	cin>>N;

    	string str[N+1];

    	for(ll i = 0;i<N;i++)
    	{
    		cin>>str[i];
    	}

    	str[N] = "0000000000";

    	for(ll i = 0;i<N;i++)
    	{
    		for(ll j = 0;j<10;j++)
    		{
    			if(str[i][j] == '1' && str[i+1][j] == '1')
    				str[i+1][j] = '0';

    			else if(str[i][j] == '1' && str[i+1][j] == '0')
    				str[i+1][j] = '1';

    			else if(str[i][j] == '0' && str[i+1][j] == '1')
    				str[i+1][j] = '1';

    			else
    				str[i+1][j] = '0';
    		}
    	}

    	int count = 0;

    	for(ll i = 0;i<10;i++)
    	{
    		if(str[N-1][i] == '1')
    			count++;
    	}

    	cout<<count<<endl;
    }

    return 0;
}