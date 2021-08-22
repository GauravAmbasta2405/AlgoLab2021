#include<stdio.h>
#include<stdlib.h>
int divis(int a,int b)
{
	return a/b;
}
int maximum(int x,int y)
{
	int z,m,n=2;
	z=(x+y+abs(x-y));
	m=divis(z,n);
	return m;
}
int main()
{
	int i,j;
	printf("Enter the first element: ");
	scanf("%d",&i);
	printf("Enter the second element: ");
	scanf("%d",&j);
	printf("Maximum: %d\n",maximum(i,j));
	return 0;
}
