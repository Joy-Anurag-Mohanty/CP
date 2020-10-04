#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ar array
     
const int M=1e9+7;
int n, a, b;
ll iv[200001];
     
ll nck(int n, int k)
{
    ll ans=1;
    for(int i=1; i<=k; ++i)
    	ans=ans*(n-i+1)%M*iv[i]%M;
    return ans;
}
     
ll powM(ll b, int p) 
{
    ll r=1;
    for(; p; b=b*b%M, p/=2)
    	if(p&1)
    	    r=r*b%M;
    return r;
}
     
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     
    iv[1]=1;
    for(int i=2; i<=200000; ++i)
    	iv[i]=M-M/i*iv[M%i]%M;
    cin >> n >> a >> b;
    ll ans=powM(2, n);
    cout << (ans+2*M-nck(n, a)-nck(n, b)+M-1)%M;
}