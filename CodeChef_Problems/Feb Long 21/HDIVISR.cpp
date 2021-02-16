#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int N;
    cin>>N;

    int maxi = 1;

    for(int i = 1; i <= 10; i++)
    {
        if(N % i == 0)
        {
            maxi = max(maxi,i);
        }
    }

    cout<<maxi<<endl;
}