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
    
    int n,m,k;
    cin>>n>>m>>k;
 
    if(m>=n && k>=n)
        cout<<"Yes"<<endl;
 
    else
        cout<<"No"<<endl;
 
    return 0;
}