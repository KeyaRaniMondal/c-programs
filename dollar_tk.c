#include<stdio.h>
int main()
{
int BDT;
float US=77.5;
scanf("%d",&BDT);
int d=BDT/US;
double tk=BDT-(US*d);
printf("%ddollar %.1lfTK\n",d,tk);
return 0;

}
