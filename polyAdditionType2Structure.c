#include<stdio.h>
typedef struct term
{
int exp;
int coeff;
};
int main()
{
struct term poly1[10],poly2[10],poly3[10];
int count1,count2,count3,i,j,k;
printf("enter no of terms in first\n");
scanf("%d",&count1);
printf("enter exponent and coefficient of each term\n");
for(i=0;i<count1;i++)
scanf("%d %d",&poly1[i].exp,&poly1[i].coeff);
printf("enter no of terms in second\n");
scanf("%d",&count2);
printf("enter exponent and coefficientof each term\n");
for(i=0;i<count2;i++)
scanf("%d %d",&poly2[i].exp,&poly2[i].coeff);
i=0;
j=0;
k=0;
while((i<count1)&&(j<count2))
{
if(poly1[i].exp>poly2[j].exp)
{
poly3[k].exp=poly1[i].exp;
poly3[k].coeff=poly1[i].coeff;
k++;
i++;
}
else if(poly1[i].exp<poly2[j].exp)
{
poly3[k].exp=poly2[j].exp;
poly3[k].coeff=poly2[j].coeff;
k++;
j++;
}
else
{
if((poly1[i].coeff+poly2[j].coeff)!=0)
{	
poly3[k].exp=poly1[i].exp;
poly3[k].coeff=poly1[i].coeff+poly2[j].coeff;
k++;
}
j++;
i++;
}
}
while(i<count1)
{
poly3[k].exp=poly1[i].exp;
poly3[k].coeff=poly1[i].coeff;
k++;
i++;
}
while(j<count2)
{
poly3[k].exp=poly2[j].exp;
poly3[k].coeff=poly2[j].coeff;
k++;
j++;
}
count3=k;
printf("resultant polynomial is\n");
for(i=0;i<count3;i++)
printf("%d x^%d\n",poly3[i].coeff,poly3[i].exp);
return 0;
}
