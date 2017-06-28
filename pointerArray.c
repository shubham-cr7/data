#include<stdio.h>
int main()
{
int arr[10];
int n,i,highest;
printf("enter no of elements\n");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
highest=*(arr);
for(i=0;i<n;i++)
{
if(*(arr+i)>highest)
highest=*(arr+i);
}
printf("highest is %d\n",highest);
return 0;
}
