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
    
    ll k,l,m,n,d,count = 0;
 
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
 
    for(ll i = 1;i<=d;i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
            count++;
    }
 
    cout<<count;
 
    return 0;
}