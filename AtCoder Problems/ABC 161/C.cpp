#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll N,K;
    cin>>N>>K;

    N = N % K;

    cout<<min(N, K - N)<<endl;

    return 0;
}
