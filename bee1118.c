#include <stdio.h>
#include<stdbool.h>

int main(){

    float a,b;
    bool novoCalculo = true;
    int novoCalculo2;

    while(novoCalculo){

        scanf("%f",&a);
        while(a < 0 || a > 10){
            printf("nota invalida\n");
            scanf("%f", &a);
        }
        scanf("%f",&b);
        while(b < 0 || b > 10){
            printf("nota invalida\n");
            scanf("%f", &b);
        }
        printf("media = %.2f\n",(a + b) / 2);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&novoCalculo2);
        while(novoCalculo2 != 1 && novoCalculo2 != 2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&novoCalculo2);
        }
        if(novoCalculo2 == 2) break;
    }
    return 0;
}
