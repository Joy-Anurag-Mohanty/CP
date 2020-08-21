#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
 
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
 
    ll N;
    cin>>N;
 
    vector<ll>V;
 
    for(ll i = 0;i<N;i++)
    {
        ll inp;
        cin>>inp;
        V.push_back(inp);
    }
 
    sort(V.begin(),V.end());
 
    cout<<min(V[N-1] - V[1],V[N-2] - V[0]);
 
    return 0;
}