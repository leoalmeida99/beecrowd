#include <stdio.h>

int main() {

    int senha;
    scanf("%d",&senha);
    while(senha){
        if(senha == 2002){
            printf("Acesso Permitido\n");
            break;
        }
        printf("Senha Invalida\n");
        scanf("%d",&senha);
    }

    return 0;
}
