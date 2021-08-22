#include <stdio.h> 
#include <time.h> 
#include <stdlib.h>
void insertRand(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (10);
	}
}
void binarySearch(int *arr, int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2; 
		if (arr[mid] == x)
			printf("x is found at position %d", arr[mid]); 
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x); 
		return binarySearch(arr, mid + 1, r, x);
	}
	printf("x is not found");
}
void disp(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
double timetaken(int *arr, int n, int x)
{
	time_t t;
	t =  clock(); 
	binarySearch(arr, 0, n - 1, x); 
	t = clock() - t;
	double time_taken = ((double)t) / CLOCKS_PER_SEC; return time_taken;
}
int middle(int *arr, int n)
{
	return arr[n / 2];
}
/*
Worst case - x not present or at any extreme corner O(log n) best case - x is middle element 0(1)
Average case - x is random 0(log n)
*/
int main()
{
	int n; int x;
	printf("Enter value of n: "); 
	scanf("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int)); 
	insertRand(arr, n);
	disp(arr, n);
//for best case x is middle element printf("For best case : \n");
	x = middle(arr, n); 
	printf("X : %d \n", x);
	double timeBest = timetaken(arr, n, x);
	printf("best case took %f seconds to execute \n", timeBest);
//for worst case x is extreme element printf("For worst case : \n");
	x = arr[0];
	printf("X : %d \n", x);
	double timeWorst = timetaken(arr, n, x);
	printf("worst case took %f seconds to execute \n", timeWorst);
//for average case x is random element printf("For average case : \n");
	x = rand() % 10; 
	printf("X : %d \n", x);
	double timeAvg = timetaken(arr, n, x);
	printf("average case took %f seconds to execute \n", timeAvg); 
	return 0;
}
