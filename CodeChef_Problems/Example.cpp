#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll mxN = 101;
const ll mxT = 1001;

void solve()
{
	int N;
    cin>>N;

    int space = N - 1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < space; j++)
        {
            cout<<' ';
        }

        for(int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
        space--;
    }

    space = 0;

    for(int i = N ; i>0 ; i--)
    {
        for(int j = 0; j<space; j++)
            cout<<" ";

        for(int j = 0; j < i; j++)
            cout<<"* ";

        cout<<endl;
        space++;
    }
    
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
}