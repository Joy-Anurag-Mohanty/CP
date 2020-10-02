#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int n,x;
    cin>>n>>x;

    if(n <= 2)
        cout<<1<<endl;

    else
    {
        n = n - 2;
        cout<<ceil((double)n/x) + 1<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
        solve();

    return 0;
}