#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Max_Sum(vector<ll>arr, ll n, ll k) 
{ 

    ll  p = n; 
      

    sort(arr.begin(),arr.end()); 
      

    for (ll i = 0; i < n; i++) 
    { 

        if (arr[i] >= k) { 
            p = i; 
            break; 
        } 
    } 
      
      
    ll maxsum = 0, a, b; 
      
    for(ll i = 0;i<p;i++)
    { 
        for (ll j = i + 1; j < p; j++)  
        { 
            if (arr[i] + arr[j] < k and arr[i] + arr[j] > maxsum) 
            { 
                maxsum = arr[i] + arr[j]; 
                  
                a = arr[i]; 
                b = arr[j]; 
            } 
        } 
    } 
      

    cout << a << " " << b<<endl;
} 

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    ll T;
    cin>>T;

    while(T--)
    {
        ll N,flag ;
        cin>>N>>flag;

        vector<ll>V;

        for(ll i = 0;i<N;i++)
        {
            ll inp;
            cin>>inp;
            V.push_back(inp);
        }

        Max_Sum(V,N,flag);
    }

}