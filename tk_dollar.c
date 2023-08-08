#include<stdio.h>
int main()
{
int BDT;
int US=77;
scanf("%d",&BDT);
printf("%ddollar %dTK\n",(BDT/US),(BDT-(US*(BDT/US))));
return 0;

}
