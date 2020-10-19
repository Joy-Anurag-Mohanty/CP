#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int N;
    cin>>N;

    string S;
    cin>>S;

    map<char,int>freq;

    for(int i = 0; i < S.length(); i++)
    {
        freq[S[i]]++;
    }

    if(freq[S[S.length() - 1]] >= 2)
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