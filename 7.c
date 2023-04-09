/* 7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>

int fact(int);
int comb(int,int);
int main()
{
    int num1, num2;

    printf("Enter two integer numbers\n");
    scanf("%d %d", &num1, &num2);
    printf("The combinations of number is %d ", comb(num1,num2));
    
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

int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}