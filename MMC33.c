#include<stdio.h>
int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i=6;i<=a;i++){
            int num=0;
            for(int j=1;j<i-1;j++){
                if(i%j==0)
                    num+=j;
            }
                if(i==6){
                    printf("%d" ,num);
                }
                if(num==i&&(num!=6)){
                    printf(" %d" ,num);
                }
        }
        printf("\n" );
    }
    return 0;
}
