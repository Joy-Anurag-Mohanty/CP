#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N;
    cin>>N;

    vector<pair<int,int>>V(N);

    for(int i = 0; i < N; i++)
        cin>>V[i].first>>V[i].second;

    sort(V.begin(),V.end());

    pair<int,int>cur = make_pair(0,0);

    string res = "";

    bool flag = true;

    for(int i = 0; i < N; i++)
    {
        int R = V[i].first - cur.first;
        int U = V[i].second - cur.second;

        if(R < 0 || U < 0)
        {
            cout<<"NO"<<endl;
            flag = false;
            break;
        }

        res += string(R,'R');
        res += string(U,'U');
        cur = V[i];
    } 

    if(flag)
    {
        cout<<"YES"<<endl;
        cout<<res<<endl;
    }
}   

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
    {
        //cout<<"Hello"<<endl;
        solve();
    }

    return 0;
}