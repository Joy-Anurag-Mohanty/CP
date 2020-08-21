#include <iostream>
#include <string>
using namespace std;

int main() 
{
    
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;
    int sign=0;
    string s;
    while(T!=0)
        
    {
        cin>>s;
        
        for(int i = 0 ; i!=s.length(); i=i+2)
        { 
            
                if(s[i]==s[i+1] && sign==0)
                {
                    sign++;
                }
      
            
        }
        if(sign==0)
        {
            cout<<"yes"<<endl;
            
        }
        else{
            cout<<"no"<<endl;
        }
        
        sign=0;
        T--;
    }

    return 0;
}