#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    while(a!=1){
        if((a%2)==0){
            a/=2;
        }
        else if((a%3)==0){
            a/=3;
        }
        else if((a%5)==0){
            a/=5;
        }
        else{
            printf("Irregular number!\n" );
            return 0;
        }
    }
    printf("Regular number!\n" );
    return 0;
}
