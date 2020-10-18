#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int N;
string S;

void solve()
{
    //number of A = number of T
    //number of G = number of C

    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        int c1 = 0, c2 = 0;

        for(int j = i ; j <N; j++)
        {
            if(S[j] == 'A')
                c1++;
            else if(S[j] == 'T')
                c1--;

            else if(S[j] == 'G')
                c2++;

            else
                c2--;

            if(c1 == 0 && c2 == 0)
                cnt++;

        }
    }

    cout<<cnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N>>S;

    solve();

    return 0;
}