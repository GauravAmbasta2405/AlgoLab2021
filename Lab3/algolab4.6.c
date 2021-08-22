#include<stdio.h>
int main()
{
    int n;
	int i,j;
    printf("Enter the edge of the matrix (n x n): ");
    scanf("%d", &n);
    float arr[n][n];
    int int_array[n][n];
    // int column_sum[10] = { 0 }, row_sum[10] = { 0 };
    float column_sum[10] = {0}, row_sum[10] = {0};
    printf("Enter the elements (%d x %d) inlcuding float numbers: \n", n, n);
    //calculate the sum of every row and column + input
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &arr[i][j]);
            row_sum[i] += arr[i][j] - ((int)(arr[i][j]));
            column_sum[j] += arr[i][j] - ((int)(arr[i][j]));
            int_array[i][j] = (int)arr[i][j];
        }
    }
    printf("\n\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (row_sum[i] > 0.000001 && column_sum[j] > 0.000001)
            {
                int_array[i][j] += 1;
                row_sum[i]--;
                column_sum[j]--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", int_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
