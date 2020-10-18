#include<iostream>
#include<cstring>
#include<vector>
#include<unordered_map>
 
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
 
    int N;
    string S;
    cin>>N;
    cin>>S;
 
    vector<string>V;
 
    for(int i = 0;i<N-1;i++)
    {
    	char a = S[i];
    	char b = S[i+1];
 
    	string A = string(1,a);
    	string B = string(1,b);
 
    	string inp = A + B;
    	V.push_back(inp);
    }
 
    unordered_map<string, int> hash;
 
    for (auto &x : V) 
        hash[x]++;
 
    int max_count = 0;
    string res; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    }
 
    cout<<res<<endl;
 
    return 0;
}