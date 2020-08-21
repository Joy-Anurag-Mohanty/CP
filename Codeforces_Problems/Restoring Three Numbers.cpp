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
 
    vector<ll>V;  
    
    for(ll i = 0;i<4;i++)
    {
        ll inp;
        cin>>inp;
        V.push_back(inp);
    }
 
    sort(V.begin(),V.end());
 
    ll x1 = V[0];
    ll x2 = V[1];
    ll x3 = V[2];
    ll x4 = V[3];
 
    cout<<x4 - x1<<" "<<x4 - x2<<" "<<x4 - x3;
 
    return 0;
}