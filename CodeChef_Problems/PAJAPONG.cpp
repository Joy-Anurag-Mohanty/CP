#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif  
    
    int T;
    cin>>T;

    while(T--)
    {
    	ll X,Y,K;
    	cin>>X>>Y>>K;

    	ll sum = X+Y;
    	ll q = sum / K;

    	if(q % 2 !=0)
    		cout<<"Paja"<<endl;

    	else
    		cout<<"Chef"<<endl;
    }

    return 0;
}