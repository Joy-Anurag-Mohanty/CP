#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int N, X;
    cin >> N >> X;

    X = X * 100;

    vector<pair<int, int>> V;

    for (int i = 0; i < N; i++)
    {
        int v, p;
        cin >> v >> p;

        V.push_back(make_pair(v,p));
    }

    int total_intake = 0;

    for(int i = 0; i < N; i++)
    {
        int intake = V[i].first * V[i].second;
        total_intake += intake;

        if(total_intake > X)
        {
            cout<<i + 1<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    return 0;
}
