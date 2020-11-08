#include<bits/stdc++.h>
using namespace std;
#define ll long long

int N,inp;
vector<int>V;
vector<int>gcd_ness;

void init()
{
    for(int i = 0 ; i < 1000; i++)
        gcd_ness.push_back(0);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        V.push_back(inp);
    }

    init();

    for(int i = 2; i <= 1000; i++)
    {
        int cnt = 0;

        for(int j = 0; j < N; j++)
        {
            if(V[j] % i == 0)
                cnt++;
        }

        gcd_ness[i - 1] = cnt;
    }

    int max_cnt = INT_MIN, res;

    for(int i = 1; i < 1000; i++)
    {
        if(gcd_ness[i] >= max_cnt)
        {
            res = i + 1;
            max_cnt = gcd_ness[i];
        }
    }

    cout<<res<<endl;

    return 0;
}