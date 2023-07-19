#include <stdio.h>

int main(){

    double money;
    scanf("%lf",&money);

    if(money <= 2000){
        printf("Isento\n");
    }
    else{
        if(money <= 3000){
            money -= 2000;
            money *= 0.08;
        }
        else{
            if(money <= 4500){
                money -= 2000;
                money = (1000 * 0.08) + ((money - 1000) * 0.18);
            }
            else{
                money -= 2000;
                money = (1000 * 0.08) + (1500 * 0.18) + ((money - 2500) * 0.28);
            }
        }
        printf("R$ %.2lf\n",money);
    }

    return 0;
}



