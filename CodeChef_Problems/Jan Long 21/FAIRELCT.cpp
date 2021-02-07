#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int N,M;
    cin>>N>>M;

    priority_queue<int,vector<int>,greater<int>>A;
    priority_queue<int>B;

    int sumA = 0, sumB = 0, flag = 0;

    for(int i = 0; i < N; i++)
    {
        int inp;
        cin>>inp;

        sumA += inp;
        A.push(inp);
    }

    for(int i = 0; i< M; i++)
    {
        int inp;
        cin>>inp;

        sumB += inp;
        B.push(inp);
    }

    if(sumA > sumB)
    {
        flag = 1;
        cout<<0<<endl;
    }

    
    else
    {
        for(int i = 0; i < N; i++)
        {
            int a = A.top();
            int b = B.top();

            sumA -= a;
            sumA += b;

            sumB -= b;
            sumB += a;

            A.pop();
            B.pop();

            if(sumA > sumB)
            {
                flag = 1;
                cout<<i + 1<<endl;
                break;
            }
        }

        if(!flag)
            cout<<-1<<endl;
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
