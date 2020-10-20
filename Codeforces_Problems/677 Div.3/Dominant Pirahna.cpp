#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N,inp;
    cin>>N;

    vector<int>V;
    set<int>S;

    for(int i = 0 ; i < N; i++)
    {
        cin>>inp;
        V.pb(inp);
        S.insert(inp);
    }

    //if all elements are same then no dominant pirahna

    if(S.size() == 1)
    {
        cout<<-1<<endl;
        return;
    }

    //find maximum element from V;

    int maxi = *max_element(V.begin(),V.end());

    if(V[0] == maxi)
    {
        if(V[0] > V[1])
        {
            cout<<1<<endl;
            return;
        }
    }

    if(V[N - 1] == maxi)
    {
        if(V[N - 1] > V[N - 2])
        {
            cout<<N<<endl;
            return;
        }
    }

    for(int i = 1; i <= N - 2; i++)
    {
        if(V[i] == maxi)
        {
            if(V[i] > V[i + 1] || V[i] > V[i-1])
            {
                cout<<i + 1<<endl;
                return;
            }
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
