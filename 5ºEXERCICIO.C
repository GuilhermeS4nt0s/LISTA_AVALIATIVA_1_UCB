#include <stdio.h>

int main() {
    int valueone, valuetwo;
    //printf("digite o primeiro numero\n");
    scanf("%d %d", &valueone, &valuetwo);
    if( valueone == valuetwo){
        prinf("O numero %d e %d sao iguais\n", a,b);
    }
    if (valueone > valuetwo) {
         printf("%d eh maior que %d\n",valueone, valuetwo);
        if (valueone % valuetwo == 0) {
            printf("%d eh multiplo de %d\n",valueone, valuetwo);
        } else {
            printf("%d nao eh multiplo de %d\n",valueone, valuetwo);
        }
    } else if (valueone < valuetwo){
         printf("%d eh maior que %d\n",valuetwo, valueone);
        if (valuetwo % valueone == 0) {
            printf("%d eh multiplo de %d\n",valuetwo, valueone);
        } else {
            printf("%d nao eh multiplo de %d\n",valuetwo, valueone);
        }
       
    }else{
        printf("Os valores lidos sao iguais\n");
    }
    return 0;
}
