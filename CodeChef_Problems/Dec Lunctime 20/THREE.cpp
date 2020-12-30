#include<bits/stdc++.h>
using namespace std;
#define ll long long

int coins(string S)
{
    map<char,int>freq;

    for(int i = 0; i < S.length(); i++)
        freq[S[i]]++;

    int max_obtainable = (int)floor(S.length()/3);

    vector<int>pairs;

    for(auto f: freq)
        pairs.push_back((int)floor(f.second/2));

    int total_pairs = accumulate(pairs.begin(),pairs.end(),0);

    return min(max_obtainable,total_pairs);
}

int main(int argc, char const *argv[])
{
    int T;
    cin>>T;

    while(T--)
    {
        string S;
        cin>>S;

        int c = coins(S);

        cout<<c<<endl;
    }

    return 0;
}
