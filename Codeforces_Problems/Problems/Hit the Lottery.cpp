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
    
    ll N;
    cin>>N;
 
    cout<<N/100 + N%100/20 + N%20/10 + N%10/5 + N%5;
 
    return 0;
}