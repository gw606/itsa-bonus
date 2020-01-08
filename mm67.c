#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        int count=0;
        if(b==1)
            count=1;
        while(b!=1){
            if((b%2)==0){
                b/=2;
                count++;
            }
            else{
                b=3*b+1;
                count++;
            }
        }
        printf("%d\n",count );
    }
    return 0;
}
