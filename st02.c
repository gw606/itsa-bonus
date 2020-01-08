#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char a[100];
    while(scanf("%s",a )!=EOF){
        int len=strlen(a);
        int encode=0;
        for(int i=0;i<=len-1;i++){
            int k=pow(26,len-i-1)+0.5;
            encode+=k*(a[i]-64);
        }
        printf("%d\n",encode );
    }
    return 0;
}
