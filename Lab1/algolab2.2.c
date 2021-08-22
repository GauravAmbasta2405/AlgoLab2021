#include <stdio.h>  
void duplicate(int a[],int n)
{
    int i,j,c=0;
    for(i=0; i<n; i++) 
	{  
        for(j=i+1; j<n; j++)
		{    
            if(a[i]==a[j])
			{
            	c++;  
            	break;  
            }  
        }  
    }  
    printf("\n\nNo. of Duplicate Element are: %d", c);  
}
void repeat(int a[],int n)
{
    int i, j, m, count, r=0;
    for(i=0; i<n; i++) 
    {
        count=1;
        for(j=i+1; j<n; j++) 
        {
            if(a[j] == a[i])
            {
                count++;    
                if(count > r)
                {
                    m = a[j];
                }
            }
        }
    }
    printf("\nThe number most repeated: %d",m);
}
int main() 
{    
    int i, n;     
    printf("Enter Number of Elements in a: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter numbers: ");
    for(i=0;i<n;i++)
	{
    	a[i]=rand();	
    	printf("%d ",a[i]);
	}
    duplicate(a,n);
    repeat(a,n);
    return 0;  
}
