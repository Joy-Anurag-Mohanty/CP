#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int N,inp;
    cin>>N;

    vector<int>B;

    for(int i = 0; i < N - 1; i++)
    {
        cin>>inp;
        B.push_back(inp);
    }

    vector<int>A;

    A.push_back(B[0]);

    for(int i = 0; i < B.size() - 1; i++)
    {
        A.push_back(min(B[i],B[i + 1]));
    }

    A.push_back(B[B.size() - 1]);

    ll sum = 0;

    for(int i = 0; i < A.size(); i++)
        sum = sum + A[i];
    
    cout<<sum<<endl;
 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}