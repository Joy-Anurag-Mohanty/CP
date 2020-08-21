#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int mxN=2e5;
int n, m;
ll k, a[mxN+1], b[mxN+1];

void solve()
{
	
	cin >> n >> m >> k;
	for(int i=0; i<n; ++i) {
		cin >> a[i+1];
		a[i+1]+=a[i];
	}
	for(int i=0; i<m; ++i) {
		cin >> b[i+1];
		b[i+1]+=b[i];
	}
	int ans=0;
	for(int i=0, j=m; i<=n; ++i) {
		if(a[i]>k)
			break;
		while(a[i]+b[j]>k)
			--j;
		ans=max(i+j, ans);
	}
	cout << ans;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
} 