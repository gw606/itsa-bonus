#include <stdio.h>
int main()
{
    double a;
    while(scanf("%lf", &a)==1)
    {
        double b,c;
        b=a*((double)9/(double)5)+32;
        c=a+273.15;
        printf("Fahrenheit = %.2lf\n", b);
        printf("Absolute temperature = %.2lf\n", c);
    }
    return 0;
}
