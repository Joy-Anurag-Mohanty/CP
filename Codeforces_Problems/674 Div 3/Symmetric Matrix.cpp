#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int n,m;
    cin>>n>>m;
    
    if((m % 2) == 0)
    {

        int count = 0;

        for(int i = 0; i < n; i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;

            int mat[2][2];

            mat[0][0] = a;
            mat[0][1] = b;
            mat[1][0] = c;
            mat[1][1] = d;

            //check if matrix is symmetical

            int flag = 1;

            for(int r = 0; r < 2; r++)
            {
                for(int c = 0; c < 2; c++)
                {
                    if(mat[r][c] != mat[c][r])
                    {
                        flag = 0;
                        break;
                    }
                }
            }

            if(flag)
                count++;
        }

        if(count)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        

    }

    else
    {

        cout<<"NO"<<endl;
        
        for(int i = 0; i < n; i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    //int cs = 1;

    while(T--)
    {
        //cout<<"Case #:"<<cs<<endl;
        solve();
        //cs++;
    }

    return 0;
}