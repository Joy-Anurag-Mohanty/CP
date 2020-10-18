#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

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
        ll n;
        cin>>n;

        string s;
        cin>>s;

        unordered_map<char,int> mp;
        int minDiff=n;
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=i;
            }
            else
            {
                int currentDiff=i-mp[s[i]];
                if(currentDiff<minDiff)
                {
                    minDiff=currentDiff;
                }
                mp[s[i]]=i;
            }
        }
        cout<<n-minDiff<<endl;
    } 

    return 0;
}  