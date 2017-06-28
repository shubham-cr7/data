#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p;
int n,i,highest;
printf("enter no of elements\n");
scanf("%d",&n);
p=(int* )malloc(n*sizeof(int));
printf("enter the terms \n");
for(i=0;i<n;i++)
scanf("%d",p+i);
highest=*p;
for(i=0;i<n;i++)
{
if(*(p+i)>highest)
highest=*(p+i);
}
printf("highest is %d\n",highest);
return 0;
}
