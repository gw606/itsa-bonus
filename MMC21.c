#include<stdio.h>
int main(){
    int a;
    long long int num=1;
    while (scanf("%d",&a)!=EOF) {
        for(int i=a;i>0;i--){
            num*=i;
        }
        printf("%lld\n",num );
        num=1;
    }
}
