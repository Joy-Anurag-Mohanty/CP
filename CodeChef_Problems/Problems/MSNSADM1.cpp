#include<iostream>
#include<vector>
#include<algorithm>

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

    int T;
    cin>>T;

    while(T--)
    {
    	int N;
    	cin>>N;

    	vector<int>A;

    	for(int i = 0;i<N;i++)
    	{
    		int inp;
    		cin>>inp;
    		inp = 20*inp;
    		A.push_back(inp);
    	}    

    	for(int i = 0;i<N;i++)
    	{
    		int inp;
    		cin>>inp;
    		inp = 10*inp;
    		A[i] = A[i] - inp;
    		if(A[i] < 0)
    			A[i] = 0;
    	}

    	cout<<*max_element(A.begin(),A.end())<<endl;
    }

    return 0;
}