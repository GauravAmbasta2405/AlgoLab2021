#include <stdio.h>

void gcd(int, int);
void gcdi(int, int);
void gcdio(int, int);

int main() 
{
    int a, b, n;
    printf("Enter the first number: ");
    scanf ("%d", &a);
    printf("Enter the second number: ");
    scanf ("%d", &b);
    printf("Choose which method: 1: Euclid's algorithm, 2: Consecutive interger checking algorithm, 3: Middle school procedure: ");
    scanf("%d",&n);
    switch(n)
    {
    	case 1:
    		gcd(a, b);
    		break;
    	case 2:
    		gcdi(a, b);
    		break;
    	case 3:
    		gcdio(a, b);
    		break;
	}
    return 0;
}
void gcd(int x, int y) 
{
    while (y > 0) 
	{
        int r = x % y;
        x = y;
        y = r;
    }
    printf ("Eulid's algorithm: GCD = %d \n",x);
}
void gcdi(int x, int y) 
{
    int c, i;
    c = x >= y ? y : x;
    for(i=c; i>=1; i--) {
        if(x%i ==0 && y%i == 0) {
            printf("Consecutive integer checking algo: GCD = %d\n",i);
            break;
        }
    }
}
void gcdio(int x, int y) 
{
    int c, ans=1, m, n, i;
    c = x >= y ? y : x;
    for(i=2; i<c; i++) 
	{
        n=0;
        m=0;
        if(x%i==0) 
		{
            n=1;
            x/=i;
        }
        if(y%i==0) 
		{
            m=1;
            y/=i;
        }
        if(n==1 && m==1) 
		{
            ans*=i;
        }
        if(n==1 || m == 1)
        i--;
    }
    printf("Middle school procedure: GCD = %d\n",ans);
}
