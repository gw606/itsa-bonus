#include<stdio.h>
int main(){
    int a,b=2,count=0;
    while(scanf("%d",&a)){
        if(a==0)return 0;
        for(int i=2;i<a;i++){
            while(b<i){
                if((i%b)==0){
                    break;
                }
                else{
                    b++;
                }
            }
            if(b==i){
                count++;
            }
            b=2;
        }
        printf("%d\n",count );
        count=0;
    }
}
