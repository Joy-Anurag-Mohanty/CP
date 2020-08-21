#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
    	int N;
    	cin>>N;

    	vector<long long>A;
    	vector<long long>D;

    	for(long long i=0;i<N;i++)
    	{
    		long long inp;
    		cin>>inp;
    		A.push_back(inp);
    	}

    	for(long long i=0;i<N;i++)
    	{
    		long long inp;
    		cin>>inp;
    		D.push_back(inp);
    	}

    	sort(A.begin(),A.end());
    	sort(D.begin(),D.end());

    	if((A[N-1]+A[N-2])>(D[N-1]+D[N-2]))
    		cout<<"AAYUSHI"<<endl;

    	else
    		cout<<"DAKSH"<<endl;
    }
   
    return 0;
}