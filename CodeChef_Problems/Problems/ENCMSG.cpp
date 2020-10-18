#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T; //test cases

    vector<string>result;

    for(int t=0;t<T;t++)
    {
        int len;
        cin>>len;

        char str[len];

        cin>>str;
        
        for(int i=0;i<len-1;i+=2)
        {
            char c = str[i] ; 
            str[i] = str[i+1];  
            str[i+1] = c;
        }

        for(int i=0;i<len;i++)
       {
         
             str[i] = 122 - (str[i] - 97); 
       }

        result.push_back(str);
    }

    for(int i=0;i<T;i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;
}