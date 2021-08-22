#include<stdio.h>
#include<stdlib.h>
void sum(int *a,int n)
{
int s=0,max=0;
int i, j;
 for(i=0;i<n;i++)
 {
  s=a[i];
  if(s>max)
   max=a[i];
  for(j=i+1;j<n;j++)
  {
   s+=a[j];
   if(s>max)
    max=s;
  }
 }
 printf("\nMaximum Sum is %d",max);
}
int main()
{
 int n;
 printf("Enter the no of elements: ");
 scanf("%d",&n);
 int *a;
 a=(int*)malloc(n*sizeof(int));
 printf("\nEnter the elements: ");
 int i;
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 sum(a,n);
 return 0;
 }
