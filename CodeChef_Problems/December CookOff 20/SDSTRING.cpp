#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string S;
    cin>>S;

    if(S.length() % 2 == 0)
    {
        int cnt_0 = 0, cnt_1 = 0;

        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == '0')
                cnt_0++;
            else
                cnt_1++;
        }

        if(cnt_0 == S.length() || cnt_1 == S.length())
        {
            cout<<-1<<endl;
            return;
        }

        else
        {
            cout<<abs(cnt_0 - cnt_1)/2<<endl;
            return;
        }
        
    }

    else
    {
        cout<<-1<<endl;
        return;
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
}