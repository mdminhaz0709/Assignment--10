// 5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

void fun(int);
int main()
{
    int n;
    printf("Enter an odd natural number: ");
    scanf("%d",&n);
    fun(n);

    return 0;
}

void fun(int n)
{
    int i;
    for(i=1 ; i<=n*2 ; i+=2)
    {
        printf("%d\n",i);
    }
}