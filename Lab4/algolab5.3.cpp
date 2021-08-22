#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 
struct pair
{
	int min; 
	int max;
};
struct pair getMinMaxNormal(int arr[], int n)
{
	struct pair minmax; int i;

	if (n == 1)
	{
		minmax.max = arr[0]; 
		minmax.min = arr[0]; 
		return minmax;
	}
/* If there are more than one elements, then initialize min and max*/
	if (arr[0] > arr[1])
	{
		minmax.max = arr[0]; 
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1]; 
		minmax.min = arr[0];
	}
	for (i = 2; i < n; i++)
	{
		if (arr[i] > minmax.max) 
		minmax.max = arr[i];
		else if (arr[i] < minmax.min) 
			minmax.min = arr[i];
	}
	return minmax;
}
struct pair getMinMaxDiv(int arr[], int low, int high)
{
	struct pair minmax, mml, mmr; 
	int mid;
// If there is only one element if (low == high)
	{
		minmax.max = arr[low]; 
		minmax.min = arr[low]; 
		return minmax;
	}
/* If there are two elements */ 
	if (high == low + 1)
	{
		if (arr[low] > arr[high])
		{
			minmax.max = arr[low]; 
			minmax.min = arr[high];
		}
		else
		{
			minmax.max = arr[high]; 
			minmax.min = arr[low];
		}
	return minmax;
	}
/* If there are more than 2 elements */ 
	mid = (low + high) / 2;
	mml = getMinMaxDiv(arr, low, mid); 
	mmr = getMinMaxDiv(arr, mid + 1, high);
/* compare minimums of two parts*/ 
	if (mml.min < mmr.min)
		minmax.min = mml.min; 
	else
		minmax.min = mmr.min;
/* compare maximums of two parts*/ 
	if (mml.max > mmr.max)
		minmax.max = mml.max; else
		minmax.max = mmr.max; return minmax;
}
void disp(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
		printf("\n");
}
void insertRand(int *arr, int n)
{
	for (int i=0;i<n;i++)
	{
		arr[i] = rand() % (100);
	}
}
double timetakenDiv(int *arr, int n)
{
	time_t t;
	t = clock();
	struct pair minmax = getMinMaxDiv(arr, 0, n - 1); 
	t = clock() - t;
	double time_taken = ((double)t) / CLOCKS_PER_SEC; 
// in seconds printf("nMinimum element is %d \n", minmax.min); printf("nMaximum element is %d \n", minmax.max);
	return time_taken;
}
double timetakenNor(int *arr, int n)
{
	time_t t;
	t = clock();
	struct pair minmax = getMinMaxNormal(arr, n); 
	t = clock() - t;
	double time_taken2 = ((double)t) / CLOCKS_PER_SEC; 
// in seconds printf("nMinimum element is %d \n", minmax.min); printf("nMaximum element is %d \n", minmax.max);
	return time_taken2;
}
int main()
{
	int arr_size;
	printf("Enter value of n: "); 
	scanf("%d", &arr_size);
	int *arr = (int *)malloc(arr_size * sizeof(int)); 
	insertRand(arr, arr_size);
	disp(arr, arr_size);
	printf("For Divide and Conquer : \n"); 
	double tmDiv = timetakenDiv(arr, arr_size);
	printf("divide and conquer took %f seconds to execute \n", tmDiv); 
	printf("For normal method : \n");
	double tmNor = timetakenNor(arr, arr_size);
	printf("divide and conquer took %f seconds to execute \n", tmNor); 
	return 0;
}
