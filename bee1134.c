#include <stdio.h>
#include <stdbool.h>

int main(){

    int combustivel = 0,alcool = 0, gasolina = 0, diesel = 0;
    bool entrada = true;

    while(entrada){
        scanf("%d",&combustivel);
        while(combustivel < 1 || combustivel > 4){
            scanf("%d",&combustivel);
        }
        if(combustivel == 1) alcool++;
        if(combustivel == 2) gasolina++;
        if(combustivel == 3) diesel++;
        if(combustivel == 4) entrada = false;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
