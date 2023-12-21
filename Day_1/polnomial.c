#include <stdio.h>
int main()
{
    int degree, i;
    printf("Enter degree of polynomials: ");
    scanf("%d", &degree);
    int coefficients[degree + 1];
    for (i = degree; i >= 0; i--)
    {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &coefficients[i]);
    }
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int result = 0;
    for (i = degree; i >= 0; i--)
    {
        result = result * x + coefficients[i];
    }
    printf("The result of the polynomial for x=%d is: %d\n", x, result);

    return 0;
}
