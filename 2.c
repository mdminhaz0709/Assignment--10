//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SI(int,int,int);

int main()
{
    int p,t,r;
    float s;
    printf("Enter Principal, Rate and Time\n");
    scanf("%d %d %d",&p, &r, &t);
    s=SI(p,r,t);
    printf("Simple inerest is %.2f" ,s);
    return 0;

}

float SI(int a,int b,int c)
{
    return ((a*b*c)/100);
}