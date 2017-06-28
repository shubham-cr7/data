#include<stdio.h>
int main()
{
int poly1[10][2],poly2[10][2],poly3[10][2],count1,count2,count3,i,j,k;
printf("enter no of terms in first\n");
scanf("%d",&count1);
printf("enter exponent and coefficent for each term\n");
for(i=0;i<count1;i++)
scanf("%d %d",&poly1[i][0],&poly1[i][1]);
printf("enter no of terms in second\n");
scanf("%d",&count2);
printf("enter exponent and coeffecient of each term\n");
for(i=0;i<count2;i++)
scanf("%d %d",&poly2[i][0],&poly2[i][1]);
i=0;
j=0;
k=0;
while((i<count1)&&(j<count2))
{
if(poly1[i][0]>poly2[j][0])
{
poly3[k][0]=poly1[i][0];
poly3[k][1]=poly1[i][1];
i++;
k++;
}
else if(poly1[i][0]<poly2[j][0])
{
poly3[k][0]=poly2[j][0];
poly3[k][1]=poly2[j][1];
j++;
k++;
}
else
{
if((poly1[i][1]+poly2[j][1])!=0)
{	
poly3[k][0]=poly1[i][0];
poly3[k][1]=poly1[i][1]+poly2[j][1];
k++;
}
i++;
j++;
}
}
while(i<count1)
{
poly3[k][0]=poly1[i][0];
poly3[k][1]=poly1[i][1];
k++;
i++;
}
while(j<count2)
{
poly3[k][0]=poly2[j][0];
poly3[k][1]=poly2[j][1];
k++;
j++;
}
count3=k;
printf("resultant polynomial is\n");
for(i=0;i<count3;i++)
printf("%d x^%d\n",poly3[i][1],poly3[i][0]);
return 0;
}

