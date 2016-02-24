#include<stdio.h>
//#include</home/bossmool/sort.h>
main()
{
int i,j,temp;
printf("enter the value of i&j");
scanf("%d%d",&i,&j);
temp=i;
i=j;
j=temp;
printf("after swaping the values are:%d,%d",i,j);
bubble();
}
void bubble()
{
int n,i,j,a[10],temp;
printf("\n*********BUBBLE SORT**********");
printf("\n enter size of an array");
scanf("%d",&n);
printf("\n enter values");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n-1;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n After sorting the elements");
for(i=0;i<n;i++)
printf("\n %d\t",a[i]);
return 0;
}
