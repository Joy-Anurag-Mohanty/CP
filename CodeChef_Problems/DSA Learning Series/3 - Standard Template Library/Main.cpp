#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N,Z,inp,count = 0;
    cin>>N>>Z;

    priority_queue<int>pq;

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        pq.push(inp);
    }

    while(Z > 0 && pq.top() > 0)
    {
        Z = Z - pq.top();
        int temp = pq.top();
        pq.pop();

        temp = temp/2;
        pq.push(temp);
        count++;
    }

    if(Z > 0)
        cout<<"Evacuate"<<endl;
    else
        cout<<count<<endl;
    
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