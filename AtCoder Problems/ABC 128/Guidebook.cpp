#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define ar array

void solve()
{
    int N;
    cin>>N;

    vector<pair<pair<string,int>,int>>V;

    for(int i = 0 ; i < N; i++)
    {
        string str;
        int inp;
        cin>>str>>inp;

        V.pb(make_pair(make_pair(str,-inp),i));
    }

    sort(V.begin(),V.end());

    for(int i = 0; i < N; i++)
        cout<<V[i].second + 1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}