#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

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
        ll N;
        cin>>N;

        string S;
        char ch;
        cin>>S>>ch;

        ll count = 0;

        ll Total_substring = (N*(N+1))/2;

        vector<ll>counts;

        for(ll i = 0;i<N;i++)
        {
            //cout<<"i = "<<i<<endl;
            if(S[i] == ch )
            {
                counts.push_back(count);
                count = 0;
                //cout<<count<<endl;   
            }

            else 
            {
                count++;
                //cout<<count<<endl;
            }
        }

        counts.push_back(count);

        ll sum = 0;

        for(ll i = 0;i<counts.size();i++)
        {
            //cout<<counts[i]<<endl;
            sum += (counts[i]*(counts[i]+1))/2;
            //cout<<sum<<endl;
        }

        cout<<Total_substring-sum<<endl;

    }

    return 0;
}