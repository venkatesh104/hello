#include<stdio.h>
main()
{
char st[30];
int i;
printf("enter the string");
scanf("%s",st);
printf("entered string is:%s",st);
for(i=0;st[i];i++)
;
printf("strig length of given string is %d",i);
}
