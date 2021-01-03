#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<double,double>>V;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    if(N == 1)
    {
        cout<<0<<endl;
        exit(0);
    }

    for(int i = 0; i < N; i++)
    {
        double x,y;
        cin>>x>>y;

        V.push_back(make_pair(x,y));
    }

    int cnt = 0;

    for(int i = 0; i < N - 1; i++)
    {
        double xi = V[i].first;
        double yi = V[i].second;

        for(int j = i + 1; j < N; j++)
        {
            double xj = V[j].first;
            double yj = V[j].second;

            double slope = ((yj - yi)/(xj - xi));

            //cout<<slope<<endl;

            if(slope >= -1 && slope <= 1)
                cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}