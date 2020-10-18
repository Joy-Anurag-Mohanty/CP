#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif
    
    int N,Q;
    cin>>N>>Q;

    vector<long long>A;
    vector<long long>B;

    for(int i=0;i<N;i++)
    {
        long long inp;
        cin>>inp;
        A.push_back(inp);
    }

    for(int i=0;i<N;i++)
    {
        long long inp;
        cin>>inp;
        B.push_back(inp);
    }

    while(Q--)
    {
        int L,R;
        cin>>L>>R;

        long long sum = 0;

        for(int i=L-1;i<=R-1;i++)
        {
            sum = sum + A[i]*B[i];
        }

        cout<<sum<<endl;
    }

    return 0;
}