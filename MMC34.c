#include<stdio.h>
int main(){
    int a;
    while(scanf("%d",&a )!=EOF){
        for(int i=1;i<=a;i++){
            if((a%i)==0&&(i!=1)){
                printf(" %d",i );
            }
            if(i==1){
                printf("%d",i );
            }
        }
        printf("\n" );
    }
}
