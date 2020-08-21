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

    long long T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;

        int a[N][N];

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>a[i][j];
            }
        }  

        int safe = 0;      

        for(int i=0;i<N;i++)
        {
            bool flag1 = false;
            bool flag2 = false;

            for(int j=0;j<N;j++)
            {
                if(a[i][j]==0)
                    flag1 = true;

                if(a[j][i]==0)
                    flag2 = true;   
            }

            if(flag1 && flag2)
                safe++;
        } 

        if(safe == N)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}