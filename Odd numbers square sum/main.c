#include <stdio.h>
#include <stdlib.h>
int sum(int x)
{
    if(x==1)
        return 1;
    else
    {
        return ((2*x-1)*(2*x-1) + sum (x-1));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));

    return 0;
}
