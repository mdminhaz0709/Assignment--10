// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>

int fact(int);
int main()
{
    int num, factorial;

    printf("Enter a number\n");
    scanf("%d", &num);
    factorial=fact(num);
    printf("The factorial of %d = %d", num,factorial);
    
    return 0;
}

int fact(int n)
{
    int i,fact=1;

    for(i=1 ; i<=n ; i++)
    {
        fact=fact*i;
    }
    return fact;
}