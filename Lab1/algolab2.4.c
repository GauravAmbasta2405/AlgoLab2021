 #include <stdio.h>
void Swap(int *n1, int *n2, int *n3) 
{
    int t;
    t = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = t;
}
int main() 
{
    int a, b, c;
    printf("Enter values of a,b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);
    Swap(&a, &b, &c);
    printf("After:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);
    return 0;
}
