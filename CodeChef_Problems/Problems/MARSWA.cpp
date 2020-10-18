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

    long long T;
    cin>>T;

    while(T--)
    {
        long long S1,S2,T1,T2,X;
        cin>>S1>>S2>>T1>>T2;
        cin>>X;

        long long gap1 = abs(X - T1);
        long long gap2 = abs(X - T2);

        if(X<=T1)
        {
            while(T1 != X)
            {
                S1 = (S1/2);
                T1--;
            }

            cout<<S1<<endl;
        }

        else if((X>T1) && (X<T2))
        {
            if(gap1<gap2)
            {
                while(T1 != X)
                {
                    S1 = (S1*2);
                    T1++;
                }

                cout<<S1<<endl;
            }

            else
            {
                while(T2 != X)
                {
                    S2 = (S2/2);
                    T2--;
                }

                cout<<S2<<endl;
            }
        }

        else
        {
            while(T2 != X)
            {
                S2 = (S2*2);
                T2++;
            }

            cout<<S2<<endl;  
        }
    }

    return 0;
}