#include<stdio.h>
int main(){
    int a,b,total=0;
    for(int i=0;i<3;i++){
        scanf("%d %d",&a,&b);
        total+=a*b;
    }
    printf("%d\n",total );
}
