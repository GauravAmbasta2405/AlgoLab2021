#include <stdio.h>
int main()
{
    int i,n,j,k,temp,c=0;
    printf("Enter size of the  array: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        	c++;
    }
	k=0;
    j=n-c;
	for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
        	if(k<n-c)
        	  b[k++]=a[i];
		}  
		else
		{
			if(j<n)
        	  b[j++]=a[i];
	    }
    }
    printf("Array after sorting even and odd elements separately: ");
    for(i=0; i<n; i++)
    {
       printf("%d ",b[i]);
    }    
 }
