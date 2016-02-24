#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int i,sl;
printf("enter the string");
scanf("%s",&str);
sl=strlen(str)-1;
printf("reverse string is:");
for(i=sl;i>=0;i--)
{
printf("%c",str[i]);
}
printf("\n");
return 0;
}
