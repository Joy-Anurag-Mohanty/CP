#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N,sum = 0;
    cin>>N;

    vector<int>V;

    for(int i = 0; i < N; i++)
    {
        int inp;
        cin>>inp;
        sum += inp;
    } 

    if(sum < 0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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