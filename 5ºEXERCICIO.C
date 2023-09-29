#include <stdio.h>

int main() {
    int valueone, valuetwo;

    scanf("%d", &valueone);
    scanf("%d", &valuetwo);

    if (valueone == valuetwo) {
        printf("Os valores lidos sao iguais\n");
    } else if (valueone > valuetwo) {
        printf("%d eh maior que %d\n", valueone, valuetwo);
        if (valueone % valuetwo == 0) {
            printf("%d eh multiplo de %d\n", valuetwo, valueone);
        } else {
            printf("%d nao eh multiplo de %d\n", valuetwo, valueone);
        }
    } else if (valuetwo > valueone) {
        printf("%d eh maior que %d\n", valuetwo, valueone);
        if (valuetwo % valueone == 0) {
            printf("%d eh multiplo de %d\n", valueone, valuetwo);
        } else {
            if ((valueone == 1 && valuetwo == 0) || (valueone == 0 && valuetwo == 1)) {
                printf("%d nao eh multiplo de %d\n", valuetwo, valueone);
            } else {
                printf("%d nao eh multiplo de %d\n", valueone, valuetwo);
            }
        }
    }
    return 0;
}
