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
 
    //cout<<T<<endl;
 
    while(T--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
 
        double avg = (double)(a+b+c)/3;
 
        //cout<<avg<<endl;
 
        double a1 = avg - a;
        double b1 = avg - b;
        double c1 = avg - c;
 
        //cout<<a1<<" "<<b1<<" "<<c1<<endl;
 
        if(a1>0.5)
            a = a+1;
        else if(a1<-0.5)
            a = a-1;
 
 
        if(b1>0.5)
            b = b+1;
        else if(b1<-0.5)
            b = b-1;
 
 
        if(c1>0.5)
            c = c+1;
        else if(c1<-0.5)
            c = c-1;
 
        //cout<<a<<" "<<b<<" "<<c<<endl;
 
        cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl;
 
    }
 
    return 0;
}