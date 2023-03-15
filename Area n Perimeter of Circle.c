// Q. A point on the circumference of a circle whose center is (0,0) is (4,5). Write a program to compute perimeter and area of circle.

#define PI 3.1415

#include <stdio.h>
#include <math.h>

float dataofcircle()
{
    float x1 = 0, y1 = 0, x2 = 4, y2 = 5, radius, perimeter, area;
    
    radius = pow((x2-x1),2) + pow((y2-y1),2);
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    
    printf("Radius of Circle : %.4f \n", pow(radius,0.5));
    printf("Perimeter of Circle : %.4f \n", perimeter);
    printf("\nArea of Circle : %.4f \n", area);
}

int main()
{
    dataofcircle();
    return 0;
}
