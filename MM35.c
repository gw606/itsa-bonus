#include<stdio.h>
int main(){
	int x,y=2,i=0;
    int a;
    scanf("%d",&a );
    for(int k=0;k<a;k++){
    	scanf("%d",&x);
    	while(x!=1){
    		if(x%y==0){
    			x=x/y;
    			i++;
    			if((x%y)!=0){
                    if((i!=1)&&(x!=1))
    				    printf("%d^%d*",y,i);
                    else if((i!=1)&&(x==1))
                        printf("%d^%d\n",y,i);
                    if((i==1)&&(x!=1))
                        printf("%d*",y );
                    else if((i==1)&&(x==1))
                        printf("%d\n",y);
    			}
                else{
                    continue;
                }
                i=0;
    		}
    		else
    		y++;
	   }
       y=2;
    }
    return 0;
}
