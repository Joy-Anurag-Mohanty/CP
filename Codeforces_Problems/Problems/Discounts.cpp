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
 
    ll N,M,k;
    cin>>N;
 
    vector<ll>V;
 
    for(ll i = 0;i<N;i++)
    {
        ll inp;
        cin>>inp;
        V.push_back(inp);
    }
 
    sort(V.begin(),V.end(),greater<ll>());
    ll sum = 0;
    for(ll i=0;i<N;i++)
        sum += V[i];
 
    cin>>M;
 
    for(ll i=0;i<M;i++){
        cin>>k;
        cout << sum - V[k-1] << endl;
    }
 
    return 0;
}
