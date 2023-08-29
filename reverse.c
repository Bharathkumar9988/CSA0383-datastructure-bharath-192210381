#include<stdio.h>
int main()
{
int n,rem=0,reverse;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
rem =n%10;reverse=reverse*10+rem;
n\=10;
printf("%d is the reverse:",reverse,rem);
return 0;
}

