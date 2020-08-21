#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif
    
    int T;
    cin>>T;

    while(T--)
    {
        int D;
        cin>>D;

        string S;
        cin>>S;

        int P_count = 0;

        for(int i = 0;i<D;i++)
        {
            if(S[i] == 'P')
                P_count++;
        }

        int x = ceil(0.75*D - P_count);

        if(x>0)
        {

        int p_count = 0;

        for(int i = 2;i<D-2;i++)
        {
            if(S[i] == 'A')
            {
                if((S[i-2] == 'P' || S[i-1] == 'P') && (S[i+1] == 'P' || S[i+2] == 'P'))
                    p_count++;
            }
        }

        if(x>p_count)
            cout<<-1<<endl;

        else
            cout<<x<<endl;
        }

        else
        {
            cout<<0<<endl;
        }
        
    }

    return 0;
}