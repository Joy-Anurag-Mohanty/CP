#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int MOD = 1e9 + 7;

void solve()
{
	int X;
    cin>>X;

    int count = 0;

    for(int i = 1; i <= sqrt(X); i++)
    {
        if(X % i == 0)
        {
            if(X/i == i)
                count++;
            else
                count = count + 2;
        }
    }

    cout<<count<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int N;
    cin>>N;

    while(N--)
        solve();

	return 0;
}