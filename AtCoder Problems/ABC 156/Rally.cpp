#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int mxN = 100;

int coordinates[mxN];

void init()
{
    for(int i = 0; i < mxN; i++)
        coordinates[i] = i + 1;
}

void solve()
{
    int N;
    cin>>N;

    init();

    vector<int>X;

    for(int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        X.pb(x);
    }

    int min_sum = INT_MAX;

    for(int i = 0; i < mxN; i++)
    {
        int p = coordinates[i];

        int sum = 0;

        for(int j = 0 ; j < X.size(); j++)
        {
            sum = sum + (X[j] - p)*(X[j] - p);
        }

        if(sum < min_sum)
            min_sum = sum;
    }

    cout<<min_sum<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}