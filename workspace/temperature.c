#include <stdio.h>

int main ()
{
    float x, y;
    printf("The temperature in F:  \n");
    scanf("%f", &x);

y = (x-32) * 5/9;

    printf("The temperature in C: %.2f\n",y);
}