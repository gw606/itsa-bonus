#include<stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    for(int i=5;i<=a;i++){
        int b=i;
        while((b%5)==0){
            b/=5;
            count++;
        }
    }
    printf("%d\n",count );
}
