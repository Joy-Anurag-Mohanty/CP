#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool permdiv(string S,int N)
{
    if(N < 3)
    {
        if(stoi(S) % 8 == 0)
            return true;

        reverse(S.begin(),S.end());

        if(stoi(S) % 8 == 0)
            return true;
        
        return false;
    }

    int hash[10] = {0};

    for(int i = 0; i < N; i++)
        hash[S[i] - '0']++;

    for(int i = 104; i < 1000; i = i + 8)
    {
        int dup = i;

        int freq[10] = { 0 }; 
        freq[dup % 10]++; 
        dup = dup / 10; 
        freq[dup % 10]++; 
        dup = dup / 10; 
        freq[dup % 10]++; 
  
        dup = i; 
  
        if (freq[dup % 10] > hash[dup % 10]) 
            continue; 
        dup = dup / 10; 
  
        if (freq[dup % 10] > hash[dup % 10]) 
            continue; 
        dup = dup / 10; 
  
        if (freq[dup % 10] > hash[dup % 10]) 
            continue; 
  
        return true; 
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin>>S;

    int len = S.length();

    if(permdiv(S,len))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
