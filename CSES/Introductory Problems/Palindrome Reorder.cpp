#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

string S;
map<char,int>mp;

void evenpalstring()
{
    string str = "";

    for(auto x : mp)
    {
        char c = x.first;

        for(int i = 0; i < x.second/2; i++)
        {
            str += c;
        }
    }

    string rev = str;
    reverse(rev.begin(),rev.end());

    cout<<str + rev<<endl;
}

void oddpalstring(char odd_char)
{
    string str = "", odd_str = "";

    for(auto x : mp)
    {
        char c = x.first;

        if(c == odd_char)
            continue;

        else
        {
            for(int i = 0; i < x.second/2; i++)
            {
                str += c;
            }
        }
    }

    for(int i = 0; i < mp[odd_char]; i++)
        odd_str += odd_char;

    string rev = str;
    reverse(rev.begin(),rev.end());

    cout<<str + odd_str + rev<<endl; 
}

void solve()
{
    cin>>S;

    for(int i = 0; i < S.length(); i++)
        mp[S[i]]++;

    //if length is even then all character occurences should be even

    if(S.length() % 2 == 0)
    {
        for(auto x : mp)
        {
            if(x.second % 2)
            {
                cout<<"NO SOLUTION"<<endl;
                exit(0);
            }
        }

        evenpalstring();
    }

    //if length is odd then only one character occurence should be odd and rest even

    else
    {
        int odd_occurences = 0;
        char odd_char;

        for(auto x : mp)
        {
            if(x.second % 2)
            {
                odd_occurences++;
                odd_char = x.first;
            }
        }

        if(odd_occurences > 1)
        {
            cout<<"NO SOLUTION"<<endl;
            exit(0);
        }

        oddpalstring(odd_char);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}