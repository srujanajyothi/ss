#include<stdio.h>
main()
{
int i,j,temp,n,b,c,a[10],temp1;
printf("enter the value of i&j");
scanf("%d%d",&i,&j);
temp=i;
i=j;
j=temp;
printf("after swaping the values are:%d,%d",i,j);
printf("\n*********BUBBLE SORT**********");
printf("\n enter size of an array");
scanf("%d",&n);
printf("\n enter values");
for(b=0;b<n;b++)
scanf("%d",&a[b]);
for(b=1;b<=n-1;b++)
{
for(c=0;c<n-i;c++)
{
if(a[c]>a[c+1])
{
temp1=a[c];
a[c]=a[c+1];
a[c+1]=temp1;
}
}
}
printf("\n After sorting the elements");
for(b=0;b<n;b++)
printf("\n %d\t",a[b]);
return 0;
}
