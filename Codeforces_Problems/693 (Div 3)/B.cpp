#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool findPartition(vector<int>V)
{
    int sum = 0;

    for(int i = 0; i < V.size(); i++)
        sum += V[i];

    if(sum % 2)
        return false;

    bool part[sum/2 + 1][V.size() + 1];

    for(int i = 0; i <= V.size(); i++)
        part[0][i] = true;

    for(int i = 1; i <= sum/2; i++)
        part[i][0] = false;

    for(int i = 1; i <= sum / 2; i++)
    {
        for(int j = 1; j <= V.size(); j++)
        {
            part[i][j] = part[i][j - 1];

            if(i >= V[j - 1])
                part[i][j] = part[i][j] || part[i - V[j - 1]][j - 1];
        }
    }

    return part[sum/2][V.size()];
}

void solve()
{
    int N;
    cin>>N;

    vector<int>V;

    for(int i = 0; i < N; i++)
    {
        int inp;
        cin>>inp;
        V.push_back(inp);
    }

    if(findPartition(V))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;


    while(T--)
        solve();

    return 0;
}