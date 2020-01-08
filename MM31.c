#include <stdio.h>


int main()
{
    int a,num;
    scanf("%d",&a);
    int fac = 1;
    int out[a];
    for(int i = 0;i<a;i++)
    {
        scanf("%d",&num);
        for(int j=1;j<=num;j++)
            fac*=j;
        out[i] = fac;
        fac = 1;
    }

    for(int i = 0;i<a;i++)
        printf("%d\n",out[i]);

    return 0;
}
