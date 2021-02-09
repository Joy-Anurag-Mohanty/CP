#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int T;
   cin>>T;

   while(T--)
   {
       int N;
       cin>>N;

       vector<int>V(N);

       for(int i = 0;i < N; i++){
           cin>>V[i];
       }

       int even = 0, odd = 0; //number of even and odd terms

       for(int i = 0; i < N; i++)
       {
           if(V[i] % 2 != 0){
               odd++;
           }
           else{
               even++;
           }
       }

       cout<<min(odd,even)<<endl;
   }
}