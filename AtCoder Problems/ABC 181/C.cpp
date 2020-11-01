#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isCollinear(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int a = x1 * (y2 - y3) +  x2 * (y3 - y1) +  x3 * (y1 - y2); 
  
    if(a == 0)
        return true;
    return false;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N,res = 0;
    cin>>N;

    vector<pair<int,int>>V;

    for(int i = 0; i < N; i++)
    {
        int x,y;
        cin>>x>>y;
        V.push_back(make_pair(x,y));
    }

    for(int i = 0; i <= N - 3; i++)
    {
        int x1 = V[i].first;
        int y1 = V[i].second;

        for(int j = i + 1; j <= N - 2; j++)
        {
            int x2 = V[j].first;
            int y2 = V[j].second;

            for(int k = j + 1; k <= N - 1; k++)
            {
                int x3 = V[k].first;
                int y3 = V[k].second;

                if(isCollinear(x1,y1,x2,y2,x3,y3))
                {
                    cout<<"Yes"<<endl;

                    // cout<<x1<<" "<<y1<<endl;
                    // cout<<x2<<" "<<y2<<endl;
                    // cout<<x3<<" "<<y3<<endl;

                    exit(0);
                }
            }
        }
    }

    cout<<"No"<<endl;

    return 0;
}
