#include<stdio.h>
void display(int arr[],int n){
printf("array elements:");
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
printf("\n");
}
int insert(int arr[],int pos,int element,int n){
if(pos<0 ||pos>n){
printf("invalid position");
return n;
}
for(int i=n-1;i>=pos;i--){
arr[i+1]=arr[i];
}
arr[pos]=element;
return n+1;
}
int delete(int arr[],int n,int element,int pos){
if(pos<0||pos>size){
printf("invslid position");
return n;
}
for(int i=pos;i<size-1;i++){
arr[i]=arr[i+1];
}
return n-1;
}
int main(){
int arr[],pos,n,element,choice;
prinf("enter the size of an array");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("1=insert");
printf("2=delete");
printf("3=display");
printf("4=exit");
printf("enter the choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter the element to insert:");
scanf("%d",&element);
printf("enter the position to insert:");
scanf("%d",&pos);
n=insert(arr,n,pos,element);
break;
case 2:
printf("enter the position to delete:");
scanf("%d",&pos);
size=delete(arr,n,pos);
break;
case 3:
display(arr,n);
break;
case 4:
printf("exiting...");
}
break;
default:
printf("invslid choice");
}
