#include<bits/stdc++.h>
using namespace std;
#define ll long long

int N,K,M,Q;

void solve()
{
    cin>>N>>M>>K;
    int cnt = 0;

    while(N--)
    {
        int sum = 0;

        for(int i = 0; i < K; i++)
        {
            int inp;
            cin>>inp;

            sum += inp;
        }

        cin>>Q;

        if(sum >= M && Q <= 10)
            cnt++;
    }

    cout<<cnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}