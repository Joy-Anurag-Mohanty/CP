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
    
    ll N,M;
    vector<ll>A;
 
    cin>>N;
    cin>>M;
 
    for(ll i = 0;i<N;i++)
    {
        ll inp;
        cin>>inp;
        A.push_back(inp);
    }
 
    sort(A.rbegin(),A.rend());
 
    ll sum = 0,count = 0;
 
    for(ll i = 0;i<N;i++)
    {
        sum += A[i];
        count++;
 
        if(sum >= M)
            break;
    }
 
    cout<<count<<endl;
 
    return 0;
}