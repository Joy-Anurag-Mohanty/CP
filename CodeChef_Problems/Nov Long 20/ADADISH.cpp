#include<bits/stdc++.h>
using namespace std;
#define ll long long

void base_case()
{
    int c;
    cin>>c;
    cout<<c<<endl;
}

void first_case()
{
    int a,b;
    cin>>a>>b;

    cout<<max(a,b)<<endl;
}

void second_case(int N)
{
    int inp;
    vector<int>V;

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        V.push_back(inp);
    }

    sort(V.begin(),V.end(),greater<int>());

    int a = V[0];
    int b = V[1];
    int diff = a - b;

    cout<<b + max(diff,V[2])<<endl;
}

void last_case(int N)
{
    int inp;
    vector<int>V;

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        V.push_back(inp);
    }

    sort(V.begin(),V.end(),greater<int>());

    int t = 0;

    int a = V[0];
    int b = V[1];

    int diff = a - b;
    t = t + b;

    if(diff != 0)
    {
        int c = V[2];
        t = t + min(c,diff);
        int diff2 = abs(c - diff);

        t = t + max(diff2,V[3]);
    }

    else if(diff == 0)
    {
        int c = V[2];
        int d = V[3];

        t = t + max(c,d);
    }

    cout<<t<<endl;
}

void test_cases()
{
    int N;
    cin>>N;

    if(N == 1)
    {
        base_case();
        return;
    }

    if(N == 2)
    {
        first_case();
        return;
    }

    if(N == 3)
    {
        second_case(N);
        return;
    }

    if(N == 4)
    {
        last_case(N);
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
        test_cases();

    return 0;
}