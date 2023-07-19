#include <stdio.h>


int main(){

    int a,b,inter = 0,gremio = 0,entrada = 1;
    int grenais = 0,empates = 0;

    while(entrada != 2){

        scanf("%d %d",&a,&b);

        grenais += 1;
        if(a == b) empates++;
        if(a > b)  inter ++;
        if(b > a)  gremio ++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&entrada);
    }
    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",empates);

    if(inter == gremio){
        printf("Nao houve vencedor\n");
    }else{
        if(inter > gremio) printf("Inter venceu mais\n");
        else printf("Gremio venceu mais\n");
    }

    return 0;
}
