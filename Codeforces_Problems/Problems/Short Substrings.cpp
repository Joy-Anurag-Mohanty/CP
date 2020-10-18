#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

string guessA(string B)
{
    string A = "";
    A = A + B[0] + B[1];

    for(int i = 3; i < B.length(); i = i + 2)
        A = A + B[i];

    return A;
}

void solve()
{
    string B;
    cin>>B;

    //cout<<B<<endl;

    cout<<guessA(B)<<endl;
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