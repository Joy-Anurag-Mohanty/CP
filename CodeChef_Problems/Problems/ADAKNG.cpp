#include<bits/stdc++.h>
using namespace std;

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
    	int r,c,k,square = 0;
    	cin>>r>>c>>k;

    	for(int i = 1;i<8;i++)
    	{
    		for(int j = 1;j<8;j++)
    		{
    			if(max(abs(i-r),abs(j-c))<=k)
    				square++;
    		}
    	}

    	cout<<square<<endl;

    }

    return 0;
}