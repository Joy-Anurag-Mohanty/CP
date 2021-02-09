#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int T;
   cin>>T;

   while(T--)
   {
       ll N;
       cin>>N;

       vector<ll>V(N);

       for(ll i = 0; i < N; i++){
           cin>>V[i];
       }

       int even = 0, odd = 0;  //number of even and odd terms

       for(int i = 0; i < N; i++){
           if(V[i] % 2 == 0)
                even++;

           else
                odd++;
       }

       if(odd % 2 != 0)
            cout<<2<<endl;
        else
            cout<<1<<endl;
   }
}