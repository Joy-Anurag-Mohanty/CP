#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N,second = -1;
    cin>>N;

    vector<int>V;
    set<int>S;

    for(int i = 0; i < N; i++)
    {
        int inp;
        cin>>inp;
        S.insert(inp);
        V.push_back(inp);
    }

    if(S.size() == 1)
    {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

    for(int i = 0; i < N; i++)
    {
        if(V[i] != V[0])
        {
            second = i;
            break;
        }
    }

    for(int i = 1; i < N; i++)
    {
        if(V[i] != V[0])
        {
            cout<<1<<" "<<i + 1<<endl;
        }

        else
        {
            cout<<second + 1<<" "<<i + 1<<endl;
        }
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