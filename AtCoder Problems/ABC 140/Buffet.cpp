#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N,inp;
    cin>>N;

    vector<int>A,B,C;

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        A.push_back(inp - 1); //0 - based indexing 
    }

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        B.push_back(inp);
    }

    for(int i = 0; i < N - 1; i++)
    {
        cin>>inp;
        C.push_back(inp);
    }

    int sum = 0;

    for(int i = 0; i < A.size() - 1; i++)
    {
        int index = A[i];
        int next_index = A[i + 1];

        //cout<<index + 1<<" "<<next_index + 1<<endl;

        if(next_index == index + 1)
        {
            //cout<<B[index]<<" "<<C[index]<<" ";
            sum = sum + B[index] + C[index];
            //cout<<sum<<endl;
        }

        else
        {
            //cout<<B[index]<<" ";
            sum = sum + B[index];
            //cout<<sum<<endl;
        }

    }


    sum = sum + B[A[N - 1]];

    cout<<sum<<endl;

    return 0;
}