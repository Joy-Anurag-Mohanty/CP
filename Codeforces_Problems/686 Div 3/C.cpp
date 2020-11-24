#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int N;
    cin>>N;

    vector<int>V(N);

    for(int i = 0; i < N; i++)
        cin>>V[i];

    vector<int>::iterator ip;

    ip =  std::unique(V.begin(),V.end());
    V.resize(std::distance(V.begin(),ip));
    
    map<int,int>freq;

    for(int i = 0; i < V.size(); i++)
        freq[V[i]]++;
    
    int res = INT_MAX;
    
    freq[V[0]]--;
    freq[V[V.size() - 1]]--;

    for(int i = 0; i < V.size(); i++)
        res = min(freq[V[i]],res);
    
    cout<<res + 1<<endl;
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