#include<iostream>
#include<vector>
#include<algorithm>
 
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
 
    if(V[N-1] >= V[N-2] + V[N-3])
        cout<<"NO"<<endl;
 
    else
    {
        cout<<"YES"<<endl;
 
        for(ll i=0;i<N-2;i++)
        cout << V[i] << " ";
        cout << V[N-1] << " " << V[N-2] << endl;
    }
 
    return 0;
}