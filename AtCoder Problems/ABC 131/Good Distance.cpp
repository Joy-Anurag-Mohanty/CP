    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define pb push_back

    const int MOD = 1e9+7;
    const int mxN = 300005;

    int mat[100][100];

    int countPairs(int N,int D)
    {
        int count = 0;

        for(int i = 0; i < N - 1; i++)
        {
            for(int  j = i + 1; j < N ; j++)
            {
                int norm = 0;

                for(int k = 0; k < D; k++)
                {
                    int d = abs(mat[i][k] - mat[j][k]);
                    norm += (d*d);
                }

                bool flag = false;

                for(int k = 0; k <= norm; k++)
                {
                    if(k*k == norm)
                        flag = true;
                }

                if(flag)
                    count++;
            }
        }

        return count;
    }

    void solve()
    {
        int N,D;
        cin>>N>>D;

        for(int i = 0; i < N ; i++)
        {
            for(int j = 0; j < D; j++)
            {
                cin>>mat[i][j];
            }
        }

        cout<<countPairs(N,D)<<endl;
    }

    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        solve();

        return 0;
    }