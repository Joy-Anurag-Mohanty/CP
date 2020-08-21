#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
 
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif  
    
    int Q;
    cin>>Q;
 
    while(Q--)
    {
        long long N,K;
        cin>>N>>K;
 
        vector<long long>V;
 
        for(long long i = 0;i<N;i++)
        {
            long long inp;
            cin>>inp;
            V.push_back(inp);
        }
 
        long long max = *max_element(V.begin(),V.end());
        long long min = *min_element(V.begin(),V.end());
 
        long long max_gap = abs(max - K);
        long long min_gap = abs(min + K);
 
        long long max_diff = abs(max - min_gap);
        long long min_diff = abs(max_gap - min);
 
        if((max_diff <= K) && (min_diff <= K))
        {
            if(max_gap>min_gap)
                cout<<max_gap<<endl;
 
            else
                cout<<min_gap<<endl;
        }
 
        else
        {
            cout<<-1<<endl;
        }
    }
 
    return 0;
}