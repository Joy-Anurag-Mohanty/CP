#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll X,Y,A,B,c = 0;

void solve()
{
    while(X <= (B-1)/A && X*A < Y)
    {
        X *= A;
        c++;
    }

    c += (Y - X - 1)/B;

    cout<<c<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>X>>Y>>A>>B;

    solve();

    return 0;
}