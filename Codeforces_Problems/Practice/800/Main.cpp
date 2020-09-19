#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N;
    cin>>N;

    string S;
    cin>>S;

    vector<char>V;
    vector<char>::iterator it;

    for(int i = 0; i < N; i++)
        V.pb(S[i]);

    it = unique(V.begin(),V.end());
    V.resize(distance(V.begin(),it));

    int res = S.length() - V.size();

    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}