#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,flag;
	long int n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%ld",&n);
	        flag=1;
	    for (i = 2; i <= n / 2; i++) 
	    { 
        if (n % i == 0)
        { 
            flag = 0; 
            break; 
        } 
    } 
  
    if (flag == 1) 
    printf("yes\n"); 
    else
        printf("no\n"); 
	}
	return 0;
}
