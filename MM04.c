#include<stdio.h>
#include<math.h>
int main(){
    long long int a;
    int b;
    scanf("%d",&b );
    long long int number[b];
    int out[b];
    for(int i=0;i<b;i++){
        scanf("%lld",&a);
        number[i]=a;
        out[i]=0;
    }
    for(int i=0;i<b;i++){
        int c=sqrt(number[i]);
        long long int num=0;
        for(int j=2;j<=c;j++){
            if((number[i]%j)==0){
                num+=j;
                num=num+(number[i]/j);
            }
        }
        num+=1;
            if(num==number[i])
                out[i]=1;
            else
                out[i]=0;
            if(number[i]==1)
                out[i]=0;
    }
    for(int i=0;i<b;i++){
        if(out[i]==1)
            printf("perfect\n" );
        else
            printf("nonperfect\n" );
    }
    return 0;
}
