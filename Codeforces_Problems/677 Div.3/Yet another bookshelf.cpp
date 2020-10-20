#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N;
    cin>>N;

    vector<int>V(N);

    for(int i = 0 ; i < N; i++)
        cin>>V[i];
    
    int cnt = 0;

    vector<int>ind;

    for(int i = 0; i < N; i++)
    {
        if(V[i] == 1)
        {
            cnt++;
            ind.push_back(i);
        }
    }

    if(cnt == 1)
    {
        cout<<0<<endl;
        return;
    }

    int moves = 0;

    for(int i = 0; i < ind.size() - 1; i++)
    {
        moves = moves + (ind[i + 1] - ind[i] - 1);
    }

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

    return 0;
}