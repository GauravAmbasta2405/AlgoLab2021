#include<stdio.h>
int  main()
{
	int n, i, t=1, j, s;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m=1;
	for(i=1;i<n;i++)
	{
		m=m*a[i];
	}

	t=a[0];
	for(i=0;i<n;i++)
	{		
		
		s=(m/a[i+1])*t;
		a[i+1]=s;
	}
	a[0]=m;
	printf("\nThe changed array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;	
}
