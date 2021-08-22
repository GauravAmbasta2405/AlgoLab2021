#include<stdio.h>
#include<math.h>

int findnum(int arr[],int n)
{
    int max_count = 0;
    int index = -1;
	int i,j;
   	for(i = 0;i<n;i++)
    {
        int count = 0;
        for(j = 0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count > max_count)
        {
            max_count = count;
            index = i;
        }
    }
    if(max_count > n/2)
    printf("o(n^2)element is present");
    else
    printf("o(n^2)element is absent");
}
int find_n(int A[],int n){
    int m;
    int i=0;
	int j;	
    for(j=0;j<n;j++){
        if(i==0){
            m = A[j],i=1;
        }
        else{
            (m ==A[j]) ? i++ : i--;
        }
    }
    return m;
}
int main()
{
    int arr[100],np;
	int i;
    printf("Enter the size: ");
    scanf("%d",&np);
    printf("Enter the array: ");
    for(i = 0;i<np;i++)
    scanf("%d",&arr[i]);
    
    findnum(arr,np);
    if(find_n(arr,np)!=arr[np-1])
    printf("\no(n)element present");
    else
    printf("\no(n)element absent");
    return 0;
}
