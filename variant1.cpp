#include <stdio.h>
#include <math.h>
int main()
{
    double C=2.1 , D=0.56 ;
    double x ,y;
    printf("x = "); 
    scanf("%lf",&x);
    printf("y = ");
    scanf("%lf",&y);
    double result = x > y ? exp(x) + (C*log10(pow(x,2))): pow(x*y , 1.0/3.0) + (D*y);
    printf("%lf", result);
    return 0;
}
