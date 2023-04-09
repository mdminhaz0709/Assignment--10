/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>

int perm(int,int);
int fact(int);
int main()
{
    int num1,num2;

    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    printf("The permutation of number is %d", perm(num1,num2));
    
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

int perm(int n,int r)
{
    return fact(n)/(fact(n-r));
}