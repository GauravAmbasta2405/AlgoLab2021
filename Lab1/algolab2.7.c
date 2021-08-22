#include<stdio.h>
int main()
{
	int n, i, t;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nOriginal array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	if(n%2==0)
	{
		for(i=0;i<n;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	else
	{
		for(i=0;i<n-1;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	printf("\nSwapped array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
