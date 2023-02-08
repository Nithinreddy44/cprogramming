// max and min value in array
#include<stdio.h>
main(){
	int n;
	printf("enter number of elements in array:\n");
	scanf("%d",&n);
	int a[n];
	int i,j,k,x,l;
	for(i=0;i<=n-1;i++)
	{
		printf("enter element %d:\n",i+1);
		scanf("%d",&a[i]);
	}
	for (j=0;j<=n-1;j++)
	{
		for (k=j+1;k<=n-1;k++)
		{
			if (a[j]>a[k])
			{
				x=a[k];
				a[k]=a[j];
				a[j]=x;
			}
		}
	}
	printf("maximum element :%d\n",a[n-1]);
	printf("minimum element:%d",a[0]);
}
