//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float);

int main()
{
    float radius;
    printf("Enter radius of a circle\n");
    scanf("%f",&radius);
    printf("The area of a circle is %.2f",area(radius));
    return 0;
}
float area(float r)
{
    float area = (3.14* r * r);
    return area;
}