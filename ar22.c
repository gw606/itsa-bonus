#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a );
    for(int i=0;a[i]!='\0';i++){
        a[i]-=3;
    }
    printf("%s\n",a );
    return 0;
}
