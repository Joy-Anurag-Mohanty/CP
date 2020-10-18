#include<iostream>
#include<cmath>
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
 
    ll N,M;
    cin>>N>>M;
 
    vector<ll>A;
    vector<ll>B;
 
    for(ll i = 0;i<N;i++)
    {
        ll inp;
        cin>>inp;
        A.push_back(inp);
    } 
 
    for(ll i = 0;i<M;i++)
    {
        ll inp;
        cin>>inp;
        B.push_back(inp);
    }
 
    ll A_even = 0,A_odd = 0,B_even = 0,B_odd = 0;
 
    for(ll i = 0;i<N;i++)
    {
        if(A[i] % 2 == 0)
            A_even++;
 
        else
            A_odd++;
    }
 
    for(ll i = 0;i<M;i++)
    {
        if(B[i] % 2 == 0)
            B_even++;
 
        else
            B_odd++;
    }
 
    cout<<min(A_even,B_odd) + min(A_odd,B_even);   
 
    return 0;
}
