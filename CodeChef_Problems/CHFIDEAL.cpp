#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int Y;
    cout<<1<<endl;

    cin>>Y;

    cout<<(Y^1)<<endl; //XOR Operation
    cout.flush();

    return 0;
}