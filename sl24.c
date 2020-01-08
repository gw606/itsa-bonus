#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    int mod[3];
    for(int i=0;i<3;i++){
        mod[i]=0;
    }
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        if((b%3)==0){
            mod[0]++;
        }
        else if((b%3)==1){
            mod[1]++;
        }
        else{
            mod[2]++;
        }
    }
    printf("%d %d %d\n",mod[0],mod[1],mod[2] );
    return 0;
}
