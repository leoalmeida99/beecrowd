#include <stdio.h>

int main(){

    int i,j,n,a,b,cont = 0;
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        scanf("%d %d",&a,&b);
        if(a >= b){
            if(a == b){
                printf("0\n");
                continue;
            }
            for(j = b + 1; j < a; j++){
                if(j % 2 != 0) cont += j;
            }
        }else{
            for(j = a + 1; j < b; j++){
                if(j % 2 != 0) cont += j;
            }
        }
        printf("%d",cont);
        cont = 0;
        printf("\n");
    }

    return 0;
}
