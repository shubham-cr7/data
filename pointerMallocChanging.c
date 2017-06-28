#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p;
int n,i,highest;
printf("enter no of elements\n");
scanf("%d",&n);
p=(int* )malloc(n*sizeof(int));
printf("enter the terms\n");
for(i=0;i<n;i++)
{
scanf("%d",p);
p=p+1;
}
p=p-n;
highest=*p;
for(i=0;i<n;i++)
{
if(*p>highest)
highest=*p;
p=p+1;
}
printf("highest is %d\n",highest);
return 0;
}
