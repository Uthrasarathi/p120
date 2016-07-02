#include<stdio.h>
#include<math.h>
void main()
{
int n;
clrscr();
printf("enter the time  am/pm\n");
scanf("%d",&n);
if(n>=1 && n<=12)
{
printf("true");
}
else
{
printf("false");
}
getch();
}
