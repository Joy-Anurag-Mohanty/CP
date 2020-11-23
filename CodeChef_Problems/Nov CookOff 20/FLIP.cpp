#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string A,B;
    cin>>A>>B;

    int cnt = 0, len = A.length();

    for(int i = 0; i < len; i += 2)
    {   
        if(A[i] != B[i])
        {
            while(i < len && A[i] != B[i])
                i += 2;
            
            cnt++;
        }
    }

    for(int i = 1; i < len; i += 2)
    {
        if(A[i] != B[i])
        {
            while(i < len && A[i] != B[i])
                i += 2;
            
            cnt++;
        }
    }

    cout<<cnt<<endl;
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--)
        solve();

    return 0;
}