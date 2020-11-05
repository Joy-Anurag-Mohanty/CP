#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int N,K;
    cin>>N>>K;

    string S;
    cin>>S;

    int count = 0, res = 0;
    char c = 0;

    for(int i = 0; i < N; i++)
    {
        if(S[i] != c)
        {
            c = S[i];
            count++;
        }

        if(S[i] == 'L' && i >= 1 && S[i - 1] == 'L')
            res++;

        if(S[i] == 'R' && i <= N - 2 && S[i + 1] == 'R')
            res++;
    }

    int h = (count - 1)/2;

    if(K > h)
        res = N - 1;

    else
        res = res + 2*K;

    cout<<res<<endl;
 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}