#include<stdio.h>
int p1[100],p2[100],p3[100];
int main()
{
int deg1,deg2,deg3,i,j,k;
printf("enter the degree of first polynomial\n");
scanf("%d",&deg1);
printf("enter degree of second polynomial\n");
scanf("%d",&deg2);
printf("enter the terms of polynomial 1 in decreasing order of power\n");
for(i=0;i<=deg1;i++)
scanf("%d",&p1[i]);
printf("enter the terms of polynomial 2 in decreasing order of power\n");
for(i=0;i<=deg2;i++)
scanf("%d",&p2[i]);
if(deg1==deg2)
{
i=0;
while(p1[i]+p2[i]==0)
{
deg1=deg1-1;
i=i+1;
}
k=0;
for(;i<=deg2;i++)
{
p3[k]=p1[i]+p2[i];
k++;
}
deg3=deg1;
}
else if(deg1>deg2)
{	
for(i=0;i<(deg1-deg2);i++)
p3[i]=p1[i];
for(i=(deg1-deg2);i<=deg1;i++)
p3[i]=p1[i]+p2[i-deg1+deg2];
deg3=deg1;		
}
else
{	
for(i=0;i<(deg2-deg1);i++)
p3[i]=p2[i];
for(i=(deg2-deg1);i<=deg2;i++)
p3[i]=p2[i]+p1[i-deg2+deg1];
deg3=deg2;		
}
for(i=0;i<=deg3;i++)
printf("coeff of power %d is %d\n",deg3-i,p3[i]);
return 0;
}
