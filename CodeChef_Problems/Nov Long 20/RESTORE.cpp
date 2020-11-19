#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mxN = 4e6 + 1;

vector<int>P; //primes

void sieve()
{
    bool prime[mxN + 1];

    memset(prime,true,sizeof(prime));

    for(int p = 2; p*p <= mxN; p++)
    {
        if(prime[p])
        {
            for(int i = p*p; i<= mxN; i += p)
            {
                prime[i] = false;
            }
        }
    }

    for(int p = 2; p <= mxN; p++)
    {
        if(prime[p])
            P.push_back(p);
    }
}

void print(vector<int>V)
{
    for(int i = 0; i < V.size(); i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

void test_cases()
{
    int N,inp;
    cin>>N;

    vector<int>B;
    vector<int>A;

    for(int i = 0; i < N; i++)
    {
        cin>>inp;
        B.push_back(inp);
    }

    map<int,int>mp;

    for(int i = 0; i < N; i++)
        mp[B[i]]++;

    for(int i = 0; i < N; i++)
    {
        A.push_back(P[B[i]]);
        auto it = mp.find(B[i]);
        mp.insert(it,{B[i],mp[B[i]] - 1});
    }

    for(int i : A)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve();

    //print(P);

    int T;
    cin>>T;

    while(T--)
        test_cases();

    return 0;
}