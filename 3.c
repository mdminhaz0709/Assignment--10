/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int check(int);

int main()
{
    int num,a;
    printf("Enter an integer number\n");
    scanf("%d",&num);
    a=check(num);
    printf("%d",a);
    return 0;
}

int check(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}