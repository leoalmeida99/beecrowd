#include <stdio.h>

int main(){

    int x,y,i,cont = 0;

    scanf("%d",&x);
    scanf("%d",&y);

    if(y > x){
        for(i = x; i <= y; i++){
            if(i % 13 != 0){
                cont += i;
            }
        }
    }else{
        for(i = y; i <= x; i++){
            if(i % 13 != 0){
                cont += i;
            }
        }
    }
    printf("%d\n",cont);

    return 0;
}
