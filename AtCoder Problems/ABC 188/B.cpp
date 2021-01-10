#include<bits/stdc++.h>
using namespace std;
#define ll long long

int N;
vector<int>A,B;
int inp;

void solve()
{
    cin>>N;

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        A.push_back(inp);
    }

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        B.push_back(inp);
    }

    int sum = 0;

    for(int i = 0; i < N; i++)
    {
        sum += A[i]*B[i];
    }

    if(sum == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    
}

int main()
{
    solve();

    return 0;
}