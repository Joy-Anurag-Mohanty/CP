#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long t,n,inp,Nsum=0;
  vector<long long>result;
  cin>>t;
  for(long long i=1;i<=t;i++)
  {
    vector<long long>num;
    long sum=0;

    cin>>n;

    Nsum += n;

    for(long long j=1;j<=n;j++)
    {
      cin>>inp;
      num.push_back(inp);
    }

    sort(num.begin(),num.end());

    for(long long j=0;j<n/2;j++)
    {
      sum += abs(num[j]-num[n-j-1]);
    }


    result.push_back(sum);
  }

  if(Nsum<=200000)
  {
    for(long long i=0;i<t;i++)
    {
      cout<<result[i]<<endl;
    }
  }

}
