#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    string S;
    cin>>S;

    if(S.length() == 1)
    {
        if(S[0] == 's')
            S = S + "es";
        else
            S = S + "s";
        
    }
    
    else
    {
        int len = S.length();

        if(S[len - 1] == 's')
            S = S + "es";
        else
            S = S + "s";
    }

    cout<<S<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();

    return 0;
}