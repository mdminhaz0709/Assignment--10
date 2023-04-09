// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>

void fun(int);
int main()
{
    int n;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    fun(n);
    return 0;
}

void fun(int a)
{
    int i;
    for(i=1 ; i<=a ;i++)
    {
        printf("%d\n",i);
    }
}