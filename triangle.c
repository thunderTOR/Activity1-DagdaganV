#include<stdio.h>
#include<stdlib.h>
int main()
{
   float b, h, area;
   printf("Enter a base & height of tringle : ");
   scanf("%f %f", &b, &h);
   area = (b*h)/2;
   printf("The area of the tringle is %.2f", area);
}
