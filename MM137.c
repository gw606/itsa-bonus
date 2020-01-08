#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d ",&a );
    for(int i=0;i<a;i++){
        int b;
        scanf("%d",&b);
        int c=pow(2,b);
        printf("%d\n", c);
    }
    return 0;
}
