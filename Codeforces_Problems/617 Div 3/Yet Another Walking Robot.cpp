#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

void solve()
{
    int N;
    cin>>N;

    int l = -1, r = N;

    string S;
    cin>>S;

    map<pair<int,int>,int>vis;
    pair<int,int>curr = {0,0};

    vis[curr] = 0;

    for(int i = 0 ; i < S.length(); i++)
    {
        if(S[i] == 'L') curr.first--;
        if(S[i] == 'R') curr.first++;
        if(S[i] == 'U') curr.second++;
        if(S[i] == 'D') curr.second--;

        if(vis.count(curr))
        {
            if(i - vis[curr] + 1 < r - l + 1)
            {
                l = vis[curr];
                r = i;
            }
        }

        vis[curr] = i + 1;
    }

    if(l == -1)
        cout<<-1<<endl;
    else
        cout<<l+1<<" "<<r+1<<endl;
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