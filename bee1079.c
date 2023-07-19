#include <stdio.h>

int main(){

    int i,n;
    float a,b,c;
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        scanf("%f %f %f",&a,&b,&c);
        printf("%.1f\n",(a * 0.2) + (b * 0.3) + (c * 0.5));
    }

    return 0;
}
