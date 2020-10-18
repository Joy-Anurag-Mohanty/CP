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

    long long N;
    cin>>N;

    vector<long long>A;
    vector<long long> :: iterator itr;

    for(long long i=0;i<N;i++)
    {
        long long inp;
        cin>>inp;
        A.push_back(inp);
    }

    sort(A.begin(),A.end());

    itr = unique(A.begin(),A.end());

    A.resize(distance(A.begin(),itr));

    long long len = A.size();

    if(len == 1) //All the elements are same 
    {
        cout<<0<<endl;
    }

    else
    {
        cout<<(A[len - 2])<<endl;
    }
    return 0;
}