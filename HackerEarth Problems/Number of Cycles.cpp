#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
     
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
     
    ll Q;
    cin>>Q;
     
    while(Q--)
    {
    	ll N;
    	cin>>N;
     
    	cout<<N*(N-1) + 1<<endl;
    }
     
    return 0;
}