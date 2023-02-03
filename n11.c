//eligible for voting
#include<stdio.h>
int main()
{ 
int a;
printf("enter the age of the person");
scanf("%d",&a);
if (a>18)
{
	printf("eligible for voting");
}
else
{
printf("not eligible for voting");
printf("wait for %d year",18-a);
}
return 0;
}
