#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll mxN = 101;
const ll mxT = 1001;

void solve()
{
	
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    map<ll,ll>mp;

    for(int i=0;i<n;i++)
        cin>>a[i];


    ll mat[n+1][n+1]={0};


    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            mat[i][j]=0;
    }


    for(int i=0;i<n;i++)
    {
        mp.clear();
       	for(ll j=i;j<n;j++)
        {
            if(j == 0)
               	mat[i][j] = 0;
            else
            	mat[i][j] = mat[i][j-1];

            if(mp.count(a[j]))
           	{
                if(mp[a[j]]==1)
                {
                    mat[i][j]++;
                }
                mat[i][j]++;
            }
            mp[a[j]]++;
 
        }
 
    }
 
    ll res = INT_MAX;

    ll table = 100;

    ll dp[mxN][mxT]={0};


    for(ll i=0;i<=table;i++)
    {
        for(ll j=0;j<=table;j++)
        {
            dp[i][j]=0;
        }
    }


    for(ll i=0;i<n+1;i++)
        dp[1][i] = mat[0][i-1];


    for(ll i=2;i<=table;i++)
    {
        dp[i][1]=0;
    }


    for(ll i=2;i<=table;i++)
    {
        for(ll j=2;j<=n;j++)
        {
            ll min_j = INT_MAX;

            for(ll p=1;p<j;p++)
            {
                min_j = min(min_j,dp[i-1][p]+mat[p][j-1]);
            }

            dp[i][j] = min_j;
        }
    }

    for(ll i =1; i<=table ; i++)
    {
        res = min(i*k+dp[i][n],res);
    }

    cout<<res<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll T;
	cin>>T;

	while(T--)
		solve();

	return 0;
}