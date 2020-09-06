#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define ar array

int N,K,R,S,P;
string str;

void solve()
{
    cin>>N>>K;
    cin>>R>>S>>P;

    cin>>str;

    int score = 0;

    for(int i = 0; i < N ; i++)
    {
        if(str[i] == str[i-K] && i >= K)
        {
            str[i] = 'A';
        }

        else
        {
            if(str[i] == 'r')
                score += P;
            if(str[i] == 'p')
                score += S;
            if(str[i] == 's')
                score += R;
        }
    }

    cout<<score<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}