#include<stdio.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    a/=100;
    a=a*a;
    b/=a;
    if(b<18.5){
        printf("%.1f underweight\n", b);
        return 0;
    }
    if(b<24){
        printf("%.1f normal\n", b);
        return 0;
    }
    if(b<27){
        printf("%.1f overweight\n", b);
        return 0;
    }
    if(b<30){
        printf("%.1f mild obesity\n", b);
        return 0;
    }
    if(b<35){
        printf("%.1f moderate obesity\n", b);
        return 0;
    }
    if(b>=35){
        printf("%.1f severe obesity\n", b);
        return 0;
    }
    return 0;
}
