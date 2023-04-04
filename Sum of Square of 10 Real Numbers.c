// This Progam Takes Input of 10 Real Numbers and Prints The Sum of Their Squares.

#include <stdio.h>

int main()
{
    int i;
    float x[10], total;
    
    /* Reading Values into Array */
    printf("Enter 10 Real Numbers\n");
    
    for(i=0; i<10; i++)
    {
        scanf("%f", &x[i]);
    }
    
    /* Computation of Total */
    total = 0.0;
    for(i = 0; i<10; i++)
    {
        total = total + x[i] * x[i];
    }
    
    /* Printing of x[i] Values and Total*/
    printf("\n");
    for(i=0; i<10; i++)
    {
        printf("x[%2d] = %5.2f\n", i+1, x[i]);
    }
    
    printf("\ntotal = %.2f\n", total);
    
    return 0;
    
}
