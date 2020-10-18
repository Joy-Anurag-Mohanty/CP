#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int N;
	cin>>N;
	int dig = N % 10;

	if(dig == 2 || dig == 4 || dig == 5 || dig == 7 || dig == 9)
		cout<<"hon"<<endl;

	else if(dig == 0 || dig == 1 || dig == 6 || dig == 8)
		cout<<"pon"<<endl;

	else if(dig == 3)
		cout<<"bon"<<endl;

	return 0;
}