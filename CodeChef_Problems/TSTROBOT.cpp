#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif  

    int T;
    cin>>T;

    while(T--)
    {
        long long N,X;
        set<long long>S;

        cin>>N>>X;

        S.insert(X);

        string str;
        cin>>str;

        for(long long i = 0;i<str.length();i++)
        {
            if(str[i] == 'R')
            {
                X++;
                S.insert(X);
            }

            else
            {
                X--;
                S.insert(X);
            }
        }

        cout<<S.size()<<endl;
    }

    return 0;
}