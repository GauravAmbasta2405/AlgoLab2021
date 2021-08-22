#include<stdio.h>
#include<stdlib.h>
int root(int n)
{
	if(n<0)
	{
		printf("Invalid Input\n");
		return -1;
	}
	else if(n==0)
	return 0;
	int low=0,high=n;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(mid*mid==n)
			return mid;
		else if(mid*mid<n)
			low=mid+1;
		else
			high=mid-1;
	}
	return high;
}
int main()
{
	int n;
	printf("Enter a positive number whose square root is to be found: ");
	scanf("%d",&n);
	int res=root(n);
	if(res!=-1)
		printf("Square Root of %d: %d\n",n,res);
	return 0;
}

