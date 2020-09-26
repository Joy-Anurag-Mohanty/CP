#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N;
    cin>>N;

    vector<int>A,B;

    for(int i = 0; i < N; i++)
    {
        int inp;
        cin>>inp;

        A.pb(i+1);
        B.pb(inp);
    }

    bool ok = true;

    for(int i = 0; i < N; i++)
    {
        vector<int>D;

        int check = B[i];

        int num = A[i];

        for(int d = 1; d <= num; d++)
        {
            if(A[i] % d == 0)
                D.pb(d);
        }

        if(count(D.begin(),D.end(),check) == 0)
        {
            ok = false;
            break;
        }
    }

    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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