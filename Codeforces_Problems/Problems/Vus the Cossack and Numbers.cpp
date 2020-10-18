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
    
    ll n;
    cin>>n;
 
    vector<double>V;
 
    for(ll i = 0;i<n;i++)
    {
        double inp;
        cin>>inp;
        V.push_back(inp);
    }
 
    vector<ll>F;
    vector<ll>C;
 
    for(ll i = 0;i<n;i++)
    {
        ll f = floor(V[i]);
        ll c = ceil(V[i]);
 
        F.push_back(f);
        C.push_back(c);
    }
 
    ll t = accumulate(F.begin(),F.end(),0);
 
    t = abs(t);
 
    for(ll i=0;i<n;i++)
    {
        if(t==0)
            break;
        
        if(F[i]<C[i])
        {
            F[i]=C[i];
            t--;
        }
    }
 
    for(ll i=0;i<n;i++)
    {
        cout<<F[i]<<endl;
    }
 
    return 0;
}