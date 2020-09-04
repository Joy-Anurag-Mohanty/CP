#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define ar array

void solve()
{
    int a,b,moves;
    cin>>a>>b;

    int diff = abs(a - b);

    int q = diff/10;
    int rem = diff%10;

    if(rem)
        moves = q + 1 ;
    else
        moves = q;

    cout<<moves<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
        solve();
}