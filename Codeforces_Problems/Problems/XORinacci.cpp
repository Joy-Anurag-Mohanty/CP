#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
 
using namespace std;
#define ll long long
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
 
    ll T;
    cin>>T;
 
    while(T--)
    {
        ll a,b,n,c;
        cin>>a>>b>>n;
 
        if(n%3 == 0)
            cout<<a<<endl;
 
        else if(n%3 == 1)
            cout<<b<<endl;
 
        else
            cout<<(a^b)<<endl;
        
    }
 
    return 0;
}  