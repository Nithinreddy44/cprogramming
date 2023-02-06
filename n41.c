#include<stdio.h>
int main(){
	int i,n,factor;
	printf("enter the number:");
	sacnf("%d",&n);
	for(i=1;i<n;i++);
	{
	if (n%i==0)
	{
	factor=i;/*finds the largest proper divisor*/
	}
	}
	if(factor>1)
	{
	printf("the number is a coposite number!");
}
else
{
	printf("this is not a composite number!");
}
return 0;
}
