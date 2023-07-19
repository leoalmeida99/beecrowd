#include <stdio.h>

int main(){

    int i,j,a = 1,b = 7;

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 3 ;j++){
            printf("I=%d J=%d\n",a,b);
            b--;
        }
        a += 2;
        b += 5;
    }

    return 0;
}
