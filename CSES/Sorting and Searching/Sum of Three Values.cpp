#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int N,X;
    cin>>N>>X;

    vector<pair<int,int>>V;

    for(int i = 1; i <= N; i++)
    {
        int inp;
        cin>>inp;

        V.push_back(make_pair(inp,i));
    }

    sort(V.begin(),V.end());

    for(int i = 0; i < N; i++)
    {
        int l = 0, r = N - 1;

        while(l != r)
        {
            int target = X - V[i].first;

            if(l != i &&  r != i && V[l].first + V[r].first == target)
            {
                //found the three values
                
                cout<<V[i].second<<" "<<V[l].second<<" "<<V[r].second<<endl;
                return 0;
            }

            if(V[l].first + V[r].first < target)
                l++;

            else
                r--;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;
}
