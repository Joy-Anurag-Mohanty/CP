#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    string S = "ACL";

    int K;
    cin>>K;

    string res = "";

    for(int i = 0 ; i < K; i++)
    {
        res += S;
    }

    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}