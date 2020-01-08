#include<stdio.h>
int main(){
    int a,i=0,num=0;
    while(scanf("%d",&a)!=EOF){
        for(int i=0;i<=a;i++){
            if((i%3)==0)
                num+=i;
        }
        printf("%d\n",num );
        num=0;
    }
    return 0;
}
