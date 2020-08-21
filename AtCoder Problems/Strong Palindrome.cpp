#include<bits/stdc++.h>
using namespace std;
#define ll long long

int isPal(string str)
{
	int l = 0; 
    int h = str.length() - 1; 
  
    
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return -1;
        } 
    } 
    
    return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	string S;
	cin>>S;

	int N = S.length();
	//cout<<N<<endl;

	string S1,S2;

	for(int i = 0;i<(N-1)/2;i++)
		S1 = S1 + S[i];
	//cout<<S1<<endl;

	for(int i = ((N+3)/2)-1;i<N;i++)
		S2 = S2 + S[i];
	//cout<<S2<<endl;


	if(isPal(S) == 1 && isPal(S1) == 1 & isPal(S2) == 1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}