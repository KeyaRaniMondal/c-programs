/*Sum of first and last digit*/
#include<stdio.h>
int main()
{
int n,fd,ld;
printf("input three dig num:");
scanf("%d",&n);
fd=n/100;
ld=n%10;
printf("%d\n",fd+ld);
return 0;
}

