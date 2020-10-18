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
    
    string str;
    cin>>str;
 
    vector<int>V;
 
    for(int i = 0;i<str.length();i++)
    {
        if(str[i] != '+')
        {
            int x = str[i] - 48;
            V.push_back(x);
        }
    }
 
    sort(V.begin(),V.end());
 
    int charcount = 0;
 
    for(int i = 0;i<V.size();i++)
    {
        if(charcount < V.size()-1)
        {
            cout<<V[i]<<'+';
        }
 
        else
            cout<<V[i];
 
        charcount++;
    }
 
    return 0;
}