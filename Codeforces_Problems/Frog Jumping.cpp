#include<iostream>
#include<cmath>
 
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
 
    ll T;
    cin>>T;
 
    while(T--)
    {
        ll a,b,k,suma = 0,sumb =0;
        cin>>a>>b>>k;
 
        if(k % 2 == 0)
        {
            suma = ceil(k/2);
            sumb = k - suma;
        }
 
        else
        {
            sumb = ceil(k/2);
            suma = k - sumb;
        }
 
        cout<<a*suma - b*sumb<<endl;
    }
 
    return 0;
}
