#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll N,count = 0;
    cin>>N;

    while(N != 0)
    {
        ll temp = N;
        ll max_dig = 0;

        while(temp != 0)
        {
            ll d = temp % 10;
            max_dig = max(d,max_dig);
            temp = temp/10;
        }

        //cout<<max_dig<<" ";
        count++;

        N = N - max_dig;
    }

    //cout<<endl;

    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}