#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        int num=0;
        for(int j=1;j<i-1;j++){
            if(i%j==0)
                num+=j;
        }

        if(num==i)
            printf("%d\n",i );
    }
    return 0;
}
