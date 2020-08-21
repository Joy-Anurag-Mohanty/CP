#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int left_rotate(int n,int d)
{
    int mask = (1<<(16-d))-1;
    int num1 = (n&mask)<<d;
    int num2 = (n&(~mask))>>(16-d);
    return num1|num2;
}

int right_rotate(int n,int d)
{
    int mask = (1<<(d))-1;
    int num1 = (n&mask)<<(16-d);
    int num2 = (n&(~mask))>>(d);
    return num1|num2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll T;
	cin>>T;

	while(T--)
	{
		int N,m;
		char c;
		cin>>N>>m>>c;

		if(c == 'L')
			cout<<left_rotate(N,m)<<endl;
		else
			cout<<right_rotate(N,m)<<endl;
	}
}