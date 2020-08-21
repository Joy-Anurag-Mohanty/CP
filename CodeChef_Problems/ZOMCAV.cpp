#include<stdio.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
    long long int n;
    scanf("%lld",&n);
    int i,j,a[n],b[n],s=0,c=0,p,k;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
      p=i-a[i];
      k=a[i]+i;
      if(p<=0)
      p=0;
      if(k>=n)
      k=n-1;
      s=s+(k-p+1);
    }
    for(i=0;i<n;i++)
    c+=b[i];
    if(s==c)
    printf("YES\n");
    else
    printf("NO\n");
  }
}