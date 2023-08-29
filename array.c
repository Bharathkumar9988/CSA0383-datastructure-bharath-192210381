#include<stdio.h>
int main()
{
int arr[25];
int i,n;
printf("enter the array element");
scanf("%d",& n);
printf("enter the array");
for(i=0;i<n;i++)
{
scanf("%d",& arr[i]);
}
printf("array element");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
