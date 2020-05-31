#include <stdio.h>
#include <stdlib.h>
int fib(int x)
{
    if(x==1)
        return 1;
    else
    {
        printf("going ");

        return ((2*x-1)*(2*x-1) + fib (x-1));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));

    return 0;
}
