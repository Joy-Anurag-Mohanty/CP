
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
 
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif  
 
    string s;
    cin>>s;
    
    for(int i=0;i<s.size();i++)
    {
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
		{
			cout<<"YES";
			return 0;
		}
	}
 
	cout<<"NO";
 
    return 0;
}