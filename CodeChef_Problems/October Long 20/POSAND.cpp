#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool check(vector<int>V)
{
    for(int i = 0; i < V.size()-1; i++)
    {
        if((V[i] & V[i+1]) == 0)
            return false;
    }

    return true;
}

void printArray(vector<int>V)
{
    for(int i = 0; i < V.size(); i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

void solve()
{
    int N;
    cin>>N;

    if(N == 2)
    {
        cout<<-1<<endl;
        return;
    }
    
    else
    {
        if(N == 1)
            cout<<1<<endl;

        else if(N % 2 != 0)
        {
            int num = 1;

            vector<pair<int,int>>V;

            for(int i = 2; i <= N; i += 2)
                V.pb(make_pair(i,i+1));

            for(int i = 0; i < V.size(); i++)
            {
                if(i % 2)
                    swap(V[i].first,V[i].second);
            }

            vector<int>res;

            for(int i = 0 ; i < V.size(); i++)
            {
                if(i == 0)
                {
                    res.pb(V[i].first);
                    res.pb(V[i].second);
                    res.pb(num);
                }

                else
                {
                    res.pb(V[i].first);
                    res.pb(V[i].second);
                }
            }

            if(check(res))
                printArray(res);
            else
                cout<<-1<<endl;
        }

        else
        {
            int first = 1;
            int last = N;

            vector<pair<int,int>>V;

            for(int i = 2; i <= N - 1; i += 2)
            {
                V.pb(make_pair(i,i+1));
            }

            for(int i = 0; i < V.size(); i++)
            {
                if(i % 2)
                    swap(V[i].first,V[i].second);
            }

            vector<int>res;

            for(int i = 0 ; i < V.size(); i++)
            {
                if(i == 0)
                {
                    res.pb(V[i].first);
                    res.pb(V[i].second);
                    res.pb(first);
                }

                else
                {
                    res.pb(V[i].first);
                    res.pb(V[i].second);
                }
            }

            res.pb(last);

            if(check(res))
                printArray(res);
            else
                cout<<-1<<endl;
        }
        
    }
    
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