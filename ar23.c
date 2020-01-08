#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[1000];
    while(fgets(a, 1000, stdin))
    {
        int i;
        for(i=0; i<strlen(a); i++){
            if(isalpha(a[i])){
                if((a[i]>='A' && a[i]+13<='Z') || (a[i]>='a' && a[i]+13<='z'))
                    printf("%c", a[i]+13);
                else
                    printf("%c", a[i]+13-26);
            }
            else
                printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}
