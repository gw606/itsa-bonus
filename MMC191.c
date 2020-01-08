#include<stdio.h>
int main(){
    int i;
    long long int a;
    scanf("%lld",&a );
        for(i=2;i<=a;i++){
            if((a%i)==0)
                break;
        }
        if(i==a){
            printf("Yes\n" );
        }
        else{
            printf("No\n" );
        }
}
