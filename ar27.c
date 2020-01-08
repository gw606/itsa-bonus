#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a );
    int number[70005];
    int b;
    while(scanf("%d",&b)!=EOF){
         number[b]=1;
    }
    for(int i=1;i<a;i++){
        if(number[i]==0){
            printf("%d\n",i );
        }
    }
    return 0;
}
