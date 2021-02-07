#include <bits/stdc++.h>
using namespace std;
#define ll long long

// O(N^2) -> first l and update x for every r

int main()
{
    int N;
    cin>>N;

    vector<int>A;

    for(int i = 0;i < N; i++)
    {
        int inp;
        cin>>inp;
        A.push_back(inp);
    }  

    int oranges = 0; 

    for(int l = 0; l < N; l++)
    {
        int x = A[l];

        for(int r = l; r < N; r++)
        {
            x = min(x , A[r]);
            oranges = max(oranges,x * (r - l + 1));
        }
    }

    cout<<oranges<<endl;

    return 0;
}
