#include<stdio.h>
int main()
{
	int i,n,max,min;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("\nInput the array elements : ");
	for(i=0;i<n;++i)
	{
		a[i]=rand();
		printf("%d ",a[i]);
	}
	max=min=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("\nMinimum element is %d\n",min);
	printf("\nMaximum element is %d\n",max);
	return 0;
}
