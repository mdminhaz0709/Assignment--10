/*9. Write a function to check whether a given number contains a given digit or not.
(TSRS) */

#include<stdio.h>
int fun(int,int);
int main()
{
    int n,digit;
    printf("Enter a number and digit: ");
    scanf("%d%d",&n,&digit);
    printf("%d",fun(n,digit));

    return 0;
}

int fun(int a,int digit)
{
    int rem;
    
    while(a)
    {
        rem= a%10;
        if(rem == digit)
            return 1;
        a=a/10;
            
    }
    return 0;
}