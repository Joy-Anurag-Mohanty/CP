#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    ll A,B,C,D;
    cin>>A>>B>>C>>D;

    if(A <= D && B >= C)
        cout<<"Yes"<<endl;
    else if(D <= A && C >= B)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}