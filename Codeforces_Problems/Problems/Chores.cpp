#include<iostream>
#include<algorithm>
#include<vector>
 
 
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
 
    ll N,A,B;
    cin>>N>>A>>B;
 
    vector<ll>V;
 
    for(ll i = 0;i<N;i++)
    {
        ll inp;
        cin>>inp;
        V.push_back(inp);
    }
 
    sort(V.begin(),V.end());
 
    cout<<V[B] - V[B-1];
 
    return 0;
}
